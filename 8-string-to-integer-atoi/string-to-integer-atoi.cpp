class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long res=0;
        int sign =1;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
            }
        if(i<n && (s[i]=='+' || s[i]=='-'))
        {
        if(s[i]=='-')sign=-1;
        i++;
        }
        while(i<n && isdigit(s[i]))
        {
            res=res*10+s[i]-'0';
            if(res*sign>=INT_MAX)return INT_MAX;
            if(res*sign<=INT_MIN)return INT_MIN;
            i++;
        }

        return int(res*sign);
    }
};