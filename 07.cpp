// Sorted Subsequence of size 3.

class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> ans;
        vector<int> v1(N,0);
        vector<int> v2(N,0);
        v2[N-1]=arr[N-1];
        for(int i=N-2;i>=0;i--){
            if(arr[i]>v2[i+1]){
                v2[i]=arr[i];
            }
            else{
                v2[i]=v2[i+1];
            }
        }
        v1[N-1]=arr[N-1];
        for(int i=N-2;i>=0;i--){
            if(v2[i]==arr[i]){
                v1[i]=arr[i];
            }
            else if(v2[i]>v1[i+1] && arr[i]<v1[i+1]){
                v1[i]=v1[i+1];
                ans.push_back(arr[i]);
                ans.push_back(v1[i]);
                ans.push_back(v2[i]);
                return ans;
            }
            else if(v2[i]==v1[i+1] && arr[i]<v2[i]){
                v1[i]=arr[i];
            }
            else if(v2[i]>v1[i+1] && arr[i]==v1[i+1]){
                v1[i]=v1[i+1];
            }
            else if(v2[i]>v1[i+1] && arr[i]>v1[i+1] && arr[i]<v2[i]){
                v1[i]=arr[i];
            }
        }
        return ans;
    }
};
