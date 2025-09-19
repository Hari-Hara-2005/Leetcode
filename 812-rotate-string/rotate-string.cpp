class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m =goal.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++)
        {
            string str=s.substr(i) + s.substr(0,i);
            if(str==goal)return true;
        }
        return false;
    }
};