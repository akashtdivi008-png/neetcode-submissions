class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(char ch:s){
            if(ch == '{'|| ch == '('|| ch == '[')
                str.push(ch);
            else {
                if(str.empty()) return false;
                if((ch == ')' && str.top() != '(') ||
                   (ch == '}' && str.top() != '{') ||
                   (ch == ']' && str.top() != '['))
                    return false;
                str.pop();
            }
        }
        if(str.empty())
            return true;
        else
            return false;
    }
};