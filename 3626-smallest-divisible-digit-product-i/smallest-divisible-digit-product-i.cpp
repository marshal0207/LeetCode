class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int o = n % 10;
            if(o == 0){
                return n;
            }
            else if(n >= 10){
                int ten = n / 10;
                int mul = o*ten;
                if(mul % t == 0){
                    return n;
                }
                else n++;
            }
            else{
                if(n%t==0){
                    return n;
                }
                else n++;
            }

        }
        return n;
    }
};