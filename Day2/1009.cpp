// Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask=0;

        if (n==0){
            return 1;
        }

        while(m!=0){
            mask = (mask<<1)|1;
            m >>= 1;
        }

        return ~n&mask;
    }
};
