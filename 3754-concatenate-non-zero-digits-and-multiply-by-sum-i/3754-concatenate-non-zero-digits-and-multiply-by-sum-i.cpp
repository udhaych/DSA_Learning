class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0 , place = 1 , sum = 0;
        while(n>0){
            int digit = n%10;
            if(digit!=0){
                sum += digit;
                x += digit*place;
                place = place*10;
            }
            n = n/10;
        }
        return x*sum;

    }
};