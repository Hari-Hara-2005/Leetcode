class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        string doubleStr = goal+goal;
        if(n!=m)return false;
        return doubleStr.find(s) != -1 ;
    }
};