class Solution {
public:
    bool isValid(string s) {
        std::stack<char> mystack;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') mystack.push(ch);
            else if (mystack.size() == 0) return false;
            else if ((ch == ')' && mystack.top() == '(') || (ch == ']' && mystack.top() == '[') || (ch == '}' && mystack.top() == '{')) mystack.pop();
            else return false;
        }
        if (mystack.size() > 0) return false;
        return true;
    }
};