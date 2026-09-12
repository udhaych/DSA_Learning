class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0,result=0,num=n;
        while(num>0){
            int digit = num%10;
            rev = (rev*10)+digit;
            num=num/10;
        }
        result = abs(n-rev);
        return result;
    }
};