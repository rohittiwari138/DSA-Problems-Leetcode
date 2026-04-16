class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem;
        int sum=0;
        int product=1;
        while(n>0){
            rem=n%10;
            n=n/10;
            product=product*rem;
            sum=sum+rem;

        }
        return product-sum;
    }
};