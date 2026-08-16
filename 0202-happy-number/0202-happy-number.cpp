class Solution {
public:
    int square(int n){
        int sum=0;
        while(n>0){
            int d=n%10;
            sum=sum+d*d;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=square(n);
        while(fast!=1 && fast!=slow){
            slow=square(slow);
            fast=square(square(fast));
        }
        return fast==1;
    }
};