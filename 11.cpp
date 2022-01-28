// Maximum Performance of a Team.

class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            pq.push({efficiency[i],speed[i]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq1;
        long long ans=0;
        int m=1000000007;
        long long total_speed=0;
        long long curr=0;
        while(!pq.empty()){
            pair<int,int> p=pq.top();
            pq.pop();
            if(k>0){
                pq1.push({p.second,p.first});
                total_speed+=p.second;
                k--;
                curr=(total_speed*(long long)p.first);
                ans=max(ans,curr);
            }
            else{
                pair<int,int> q=pq1.top();
                pq1.pop();
                total_speed-=q.first;
                pq1.push({p.second,p.first});
                total_speed+=p.second;
                curr=(total_speed*(long long)p.first);
                ans=max(ans,curr);
            }
        }
        return ans%m;
    }
};
