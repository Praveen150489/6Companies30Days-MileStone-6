// Power of a number is its reverse.

class Solution{
    public:
    //You need to complete this fucntion

    long long power(int N,int R)
    {
       //Your code here
        int M=1000000007;
        map<int,long long> mp;
        long long ans=N;
        int k=2;
        int m=1;
        mp[m]=N;
        while(k<=R){
            ans=(ans*ans)%M;
            m=k;
            mp[m]=ans;
            k=2*k;
        }
        int n=R-m;
        string str="";
        while(n!=0){
            str+=(n%2 + '0');
            n=n/2;
        }
        for(int i=0;i<str.length();i++){
            if(str[i]=='1'){
                int x=pow(2,i);
                ans=(ans*mp[x])%M;
            }
        }
        return ans;
    }

};
