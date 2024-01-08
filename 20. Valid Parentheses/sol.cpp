// take a stack of char
// make a var top to store the element
// base condition if stack is empty 
// check for the top element in the stack if it matches return true else false
// else return stack is empty

class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        int n = s.length();

        for(int i=0;i<n;i++){
            char top = ch.empty() ?'#':ch.top();

            if(top=='(' && s[i]==')'){
                ch.pop();
            }
            else if(top=='{' && s[i]=='}'){
                ch.pop();
            }
            else if(top=='[' && s[i]==']'){
                ch.pop();
            }
            else{
                ch.push(s[i]);
            }
        }
        return ch.empty();
    }
};
