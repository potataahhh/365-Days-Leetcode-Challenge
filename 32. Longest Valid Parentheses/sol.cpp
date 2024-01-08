// use vector to store the values
// make a count var to store the count of longest valid parentheses
// if current element of s is '(' push it to the vector
// if the character is ')' and the stack is not empty , pop the top element 
// curr length is calculted as the difference between the curr index and the top element of stack
// count is incresed if the length is greater than the previous maximum
// return the result

class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> vec={-1};
        int count=0;
        int n = s.size();
        for(int i=0;i<n;i++)
            if(s[i]=='(')
                vec.push_back(i);
            else if (vec.size()==1)
            vec[0]=i;
            else
            {
                vec.pop_back();
                count = max(count,i-vec.back());
            }
            return count;
    }
};
