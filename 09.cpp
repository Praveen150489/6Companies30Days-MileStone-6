// Guess Number Higher or Lower II.

class Solution {
public:
    int getMoneyAmount(int n) {
        int t[n+2][n+1];
        memset(t,0,sizeof(t));
        for(int i=2;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                int k=j+i-1;
                int currMin=INT_MAX;
                for(int x=j;x<=k;x++){
                    currMin=min(currMin,x+max(t[j][x-1],t[x+1][k]));
                }
                t[j][k]=currMin;
            }
        }
        return t[1][n];
    }
};
