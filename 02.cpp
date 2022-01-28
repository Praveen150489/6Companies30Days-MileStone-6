// Stone Game.

class Solution {
public:
    int t[501][501];
    bool stoneGame(vector<int>& piles) {
        memset(t,-1,sizeof(t));
        int i=0;
        int j=piles.size()-1;
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=piles[k];
        }
        int sum1=solve(i,j,piles);
        if(sum1>sum-sum1){
            return true;
        }
        return false;
    }
    int solve(int i,int j,vector<int>& piles){
        if(i==j){
            return piles[i];
        }
        if(i>j){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int ans1=max(piles[i]+solve(i+2,j,piles),piles[i]+solve(i+1,j-1,piles));
        int ans2=max(piles[j]+solve(i,j-2,piles),piles[j]+solve(i+1,j-1,piles));
        int ans=max(ans1,ans2);
        return t[i][j]=ans;
    }
};
