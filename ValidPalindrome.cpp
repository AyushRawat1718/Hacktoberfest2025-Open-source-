class Solution {
public:
    string formatString(string s){
        string req = "";
        for (auto i : s){
            if (isalnum(i)){
                if (isalpha(i)) req += tolower(i);
                else req += i;
            }
        }
        return req;
    }
    bool isPalindrome(string s) {
        string formatted = formatString(s);
        int l = 0, r = formatted.size()-1;
        while (l < r){
            if (formatted[l] != formatted[r]) return false;
            else {
                l++;
                r--;
            }
        }
        return true;
    }
};
