// Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,x;
        while(n>0){
            x = n%10;
            n = n/10;
            sum += x;
            product *= x;
        }
        return (product-sum);
    }
};
