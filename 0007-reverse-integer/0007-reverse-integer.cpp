class Solution {
public:
    int reverse(int x) {
        int rNumber = 0;

    while (x != 0)
    {
        if ((rNumber > INT_MAX / 10) || (rNumber < INT_MIN / 10)) {
                return 0;
        }

        rNumber = rNumber*10 + (x%10);
        x=x/10;
    }


    return rNumber;
    }
};