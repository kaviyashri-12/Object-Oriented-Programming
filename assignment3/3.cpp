#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int>& inputVector, int k) {
    unordered_map<int, int> frequencyMap;

    for (int value : inputVector) {
        frequencyMap[value]++;
    }

    priority_queue<pair<int, int>> maxHeap;
    for (auto &entry : frequencyMap) {
        maxHeap.push({entry.second, entry.first});
    }

    vector<int> output;
    for (int i = 0; i < k; i++) {
        output.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    return output;
}

int main() {
    vector<int> dataset = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 5};
    int k = 2;

    vector<int> result = topKFrequent(dataset, k);

    cout << "Top " << k << " frequent elements: ";
    for (int element : result) {
        cout << element << " ";
    }
}