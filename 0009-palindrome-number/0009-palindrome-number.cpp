class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        int rem;
        long long rev = 0;

        while (x > 0) {
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }

        return original == rev;
    }
};