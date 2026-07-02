class Solution {
public:
    string winningPlayer(int x, int y) {
        int m = min(x, y / 4);
        if(m % 2) return "Alice";
        else return "Bob";
    }
};