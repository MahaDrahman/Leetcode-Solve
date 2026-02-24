class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string s = to_string(x);
        string s2 = s;
        reverse(s2.begin(), s2.end());
        if(s2 == s){
        return true;
        }else{
            return false;
        }
    }
};


