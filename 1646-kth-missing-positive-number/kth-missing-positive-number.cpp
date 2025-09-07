class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int missing = 0;
        int i=0;
        int j=1;
        while(true)
        {
            if(i<n && arr[i] == j)
            {
                i++;
            }
            else{
                missing++;
                if(missing == k)return j;
            }
            j++;
        }
    }
};