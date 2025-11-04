class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int idx=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[idx])
            {
                arr[idx+1] = arr[i];
                idx++;
            }
        }
        return idx+1;
    }
};