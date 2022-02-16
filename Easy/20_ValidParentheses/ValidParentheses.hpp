#include <stack>
#include <iostream>

class Solution {
public:
    bool isValid(std::string s) {
        if (s.size() % 2) {
            return false;
        }
        std::stack<char> stack;
        for (auto c : s) {
            if (stack.empty()) {
                stack.push(c);
            } else {
                if (c == '(' || c == '[' || c == '{') {
                    stack.push(c);
                } else {
                    if (c == ')') {
                        if (stack.top() == '(') {
                            stack.pop();
                        } else {
                            stack.push(c);
                        }
                    } else if (c == ']') {
                        if (stack.top() == '[') {
                            stack.pop();
                        } else {
                            stack.push(c);
                        }
                    } else if (c == '}') {
                        if (stack.top() == '{'){
                            stack.pop();
                        } else {
                            stack.push(c);
                        }
                    }
                }
            }
        }
        return stack.empty() ? true : false;
    }
};