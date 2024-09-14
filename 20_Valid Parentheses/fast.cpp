class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 == 1) return false;        
        std::stack<char> mystack;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') mystack.push(ch);
            else if (mystack.empty()) return false;
            else if ((ch == ')' && mystack.top() == '(') || (ch == ']' && mystack.top() == '[') || (ch == '}' && mystack.top() == '{')) mystack.pop();
            else return false;
        }
        if (mystack.size() > 0) return false;
        return true;
    }
};