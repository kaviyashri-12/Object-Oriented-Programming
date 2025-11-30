#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string inputExpression) {
    stack<char> bracketStack;

    for (char current : inputExpression) {
        if (current == '(' || current == '{' || current == '[') {
            bracketStack.push(current);
        }
        else {
            if (bracketStack.empty()) return false;

            char lastOpen = bracketStack.top();
            bracketStack.pop();

            if ((current == ')' && lastOpen != '(') ||
                (current == '}' && lastOpen != '{') ||
                (current == ']' && lastOpen != '[')) {
                return false;
            }
        }
    }

    return bracketStack.empty();
}

int main() {
    string sequence = "(([])){}";

    if (isValid(sequence))
        cout << "Valid parentheses";
    else
        cout << "Invalid parentheses";
}