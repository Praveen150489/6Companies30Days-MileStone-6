// Divide Two Integers without using divide , multiplication ans mod operator.

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool flag=false;
        if((dividend>=0 && divisor>0) || (dividend<0 && divisor<0)){
            flag=true;
        }
        long long int n=abs(dividend);
        long long int m=abs(divisor);
        if(m==1){
            if(flag==true && n>=(pow(2,31)-1)){
                return pow(2,31)-1;
            }
            else if(flag==true && n<(pow(2,31)-1)){
                return n;
           }
            else if(flag==false && n>=pow(2,31)){
                return (0-pow(2,31));
            }
            else if( flag==false && n<pow(2,31)){
                return (0-n);
            }
        }
        int count=0;
        bool slag=false;
        while(true){
            if(n<m){
                break;
            }
            else{
                n=n-m;
                count++;
            }
            if(count==pow(2,31)-1){
                slag=true;
                break;
            }
        }
        if(count==0){
            return 0;
        }
        if(flag==true){
            return count;
        }
        int ans=count;
        if(flag==false && slag==true){
            if(n>=m){
                ans++;
                return (0-ans);
            }
            else{
                return (0-ans);
            }
        }
        if(flag==false && slag==false){
            return (0-ans);
        }
        return ans;
    }
};
