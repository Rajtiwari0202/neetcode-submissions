class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>greater(n,-1);
        for(int i=0;i<n-1;i++){
            int max_seen = -1;
            for(int j=i+1;j<n;j++){
                max_seen = max(max_seen,arr[j]);
            }
            greater[i]=max_seen;
        }
        greater[n-1]={-1};
        for(int i=0;i<n;i++){
            arr[i]=greater[i];
        }
        return arr;
    }
};