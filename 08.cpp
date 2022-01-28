// Maximum Height of Tree.

class Solution{
public:
    int height(int N){
        // code here
        int n=N;
        for(int i=1;i<=N;i++){
            if(n<i){
                return (i-1);
            }
            n=n-i;
        }
        return 1;
    }
};
