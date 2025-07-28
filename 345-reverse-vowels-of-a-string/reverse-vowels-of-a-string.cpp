class Solution {
public:
bool isVowels(char ch){
    if(ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'||ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i')
    {
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int n=s.size();
        int left = 0,right = n-1;
        while(left<right)
        {
            if(isVowels(s[left]) && isVowels(s[right]))
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isVowels(s[left]) && isVowels(s[right]))
            {
                left++;
            }
            else{
                right--;
            }
        }
        return s;
    }
};