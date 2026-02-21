class Solution {
public:
    bool isPalindrome(string s) {
        string news = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                news += tolower(s[i]);
            }
        }
        string reversed = news;
        reverse(reversed.begin(), reversed.end());

        return reversed == news;
        

    }
};