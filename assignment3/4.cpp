#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& inputVector) {
    int n = inputVector.size();
    vector<int> result(n, -1);
    stack<int> candidateStack;

    for (int i = n - 1; i >= 0; i--) {
        while (!candidateStack.empty() && candidateStack.top() <= inputVector[i]) {
            candidateStack.pop();
        }

        if (!candidateStack.empty()) {
            result[i] = candidateStack.top();
        }

        candidateStack.push(inputVector[i]);
    }

    return result;
}

int main() {
    vector<int> sequence = {4, 5, 2, 25};

    vector<int> output = nextGreaterElement(sequence);

    cout << "Next Greater Elements:\n";
    for (int val : output) cout << val << " ";
}