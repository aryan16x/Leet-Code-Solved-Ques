// Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n>3 && n%2==0){
            n /= 2;
        }
        if (n==1 || n==2){
            return true;
        }
        return false;
    }
};
