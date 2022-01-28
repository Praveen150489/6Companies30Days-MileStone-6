// Number of Unique Paths.

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        int t[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(i==0 || j==0){
                    t[i][j]=1;
                }
            }
        }
        for(int i=1;i<a;i++){
            for(int j=1;j<b;j++){
                t[i][j]=t[i-1][j]+t[i][j-1];
            }
        }
        return t[a-1][b-1];
    }
};
