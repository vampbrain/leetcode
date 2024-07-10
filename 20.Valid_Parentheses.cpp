class Solution {
public:
    bool isValid(string s) {
        stack <char> stack;
        unordered_map<char, char> matchingBrackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                if (stack.empty() || stack.top() != matchingBrackets[c]) {
                    return false;
                }
                stack.pop();
            }
        }
        
        return stack.empty();
    }
};
