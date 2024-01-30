// take a string 
// check if it is alphanumeric or not 
// if it is convert it into lowercase
//check for digit
// reverse the string and check if our original string matches with it or not 

class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int n = s.size();

        for(int i=0;i<n;i++){
            if(isalpha(s[i]))
                str+=tolower(s[i]);
                else if(isdigit(s[i]))
                str+=s[i];
            }
            string rev = str;
            reverse(rev.begin(),rev.end());

            return str == rev;
        
    }
};
