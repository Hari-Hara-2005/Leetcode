class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int n = arr.size();
    int i=0,j=1;
    int cnt = 0;
    while(i<n){
        if(arr[i]==j){
            i++;
            j++;
        }
        else{
            cnt++;
            if(cnt == k)return j;
            j++;
        }
    }
            return j + (k - cnt - 1);  
    }
};