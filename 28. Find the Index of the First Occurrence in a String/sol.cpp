class Solution {
public:
    int strStr(string haystack, string needle) {
        int str1 = haystack.size();
        int str2= needle.size();

        for(int i=0;i<=str1-str2;i++){
            if(haystack.substr(i,str2)== needle)
            return i;
        }
        return -1;
    }
};
