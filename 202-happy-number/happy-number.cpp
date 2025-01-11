class Solution {
public:
    bool isHappy(int n) {
       
       
       unordered_set<int> usedNumbers;
       while(n!=1){
        int sum = 0;
         int digit = n;
          while(digit>0){
            int d = digit%10;
             sum += d*d;
             digit/=10;

          }
          

           if (usedNumbers.count(sum)) {
                return false; 
            }

            usedNumbers.insert(sum);

            n = sum;
       }

       return true;
    }
};