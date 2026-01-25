class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        unsigned reverse = 0;
        if(x<0)return false;
        while(x)
        {
            int digit = x%10;
            reverse = reverse*10 + digit;
            x = x/10;
        }
        return temp == reverse;
    }
};