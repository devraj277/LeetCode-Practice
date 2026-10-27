class Solution {
public:
   int sumOfSquares(int n) {
        if (n == 0)
            return 0;

        int digit = n % 10;
        return digit * digit + sumOfSquares(n / 10);
    }

    bool isHappy(int n) {
        if (n == 1)
            return true;

        if (n == 4)
            return false;

        return isHappy(sumOfSquares(n));
    }
};