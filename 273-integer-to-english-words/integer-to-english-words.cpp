class Solution {
public:
    vector<string> ones = {"",        "One",       "Two",      "Three",
                           "Four",    "Five",      "Six",      "Seven",
                           "Eight",   "Nine",      "Ten",      "Eleven",
                           "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
                           "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"",      "",      "Twenty",  "Thirty", "Forty",
                           "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string helper(int num) {
        string ans = "";
        if (num == 0)
            return "";
        else if (num < 20) {
            ans = ones[num];
        } else if (num < 100) {
            ans = tens[num / 10] + " " + ones[num % 10];
        } else if (num < 1000) {
            ans = helper(num / 100) + " Hundred " + helper(num % 100);
        } else if (num < 1000000) {
            ans = helper(num / 1000) + " Thousand " + helper(num % 1000);
        } else if (num < 1000000000) {
            ans = helper(num / 1000000) + " Million " + helper(num % 1000000);
        } else {
            ans = helper(num / 1000000000) + " Billion " +
                  helper(num % 1000000000);
        }
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        return ans;
    }

    string numberToWords(int num) {
        if (num == 0)
            return "Zero";
        return helper(num);
    }
};