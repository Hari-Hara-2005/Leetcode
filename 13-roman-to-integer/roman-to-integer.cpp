class Solution {
public:
    int num(char ch)
    {
        if(ch == 'I')return 1;
        else if(ch == 'V')return 5;
        else if(ch=='X')return 10;
        else if(ch=='L')return 50;
        else if(ch =='C')return 100;
        else if(ch == 'D')return 500;
        else if(ch == 'M')return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int n =s.size();
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            int v1 = num(s[i]);
            int v2 = num(s[i+1]);
            if(v1>=v2)
            {
                res+=v1;
            }
            else{
                res-=v1;
            }
        }
        res+=num(s[n-1]);
        return res;
    }
};