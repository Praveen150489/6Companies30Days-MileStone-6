// Path with Maximum Probability.

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int,double>> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double> prob(n,INT_MIN);
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        while(!pq.empty()){
            pair<double,int> p=pq.top();
            pq.pop();
            for(auto x:adj[p.second]){
                if(prob[x.first]<p.first*x.second){
                    prob[x.first]=p.first*x.second;
                    pq.push({prob[x.first],x.first});
                }
            }
        }
        if(prob[end]==INT_MIN){
            return 0.00000;
        }
        return prob[end];
    }
};
