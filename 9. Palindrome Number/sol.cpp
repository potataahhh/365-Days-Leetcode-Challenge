// check if our given number is negative or not in range (return false)
// take a variable store the orginal value in that var and do the operation on number
// compare both the number at last and return true or false 

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x>=INT_MAX) return false;

        long int a= 0;
        int b=x;

        while(x>0){
            a=a*10;
            if(a>INT_MAX) return false;
            a+=x%10;
            x/=10;
        }
        if(a==b) return true;
        
        return false;
    }
};
