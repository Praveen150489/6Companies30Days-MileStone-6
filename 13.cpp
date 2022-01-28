// Find the Kth Largest Integer in the Array.

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<pair<int,string>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i].length(),nums[i]});
        }
        while(!pq.empty()){
            pair<int,string> p=pq.top();
            pq.pop();
            k--;
            if(k==0){
                return p.second;
            }
        }
        return "-1";

    }
};
