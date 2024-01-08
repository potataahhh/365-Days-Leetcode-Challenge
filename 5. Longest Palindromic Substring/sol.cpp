class Solution {
public:

    bool f(string &s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int max=0;
        int start=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(f(s,i,j)){
                    if(j-i+1>max){
                        max=j-i+1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,max);
    }
};
