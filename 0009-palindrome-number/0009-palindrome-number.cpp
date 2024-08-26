class Solution {
public:
    bool isPalindrome(int x) {
        int rNumber = 0;
        int num = x;

        if(num<0){
            return false;
        }

        while(x != 0){
            if((rNumber > INT_MAX/10)||(rNumber < INT_MIN/10)){
                return false;
            }
            rNumber = rNumber*10 + x%10;
            x = x/10;
        }

        if(num == rNumber){
            return true;
        }

        return false;
    }
};