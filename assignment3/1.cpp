#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

vector<pair<int,int>> findUniqueSums(const vector<int>& dataList, int sumVal) {
    unordered_map<int,int> occurrences;
    set<pair<int,int>> distinctPairs;

    for (int currentNum : dataList) {
        int neededNum = sumVal - currentNum;
        
        if (occurrences.find(neededNum) != occurrences.end()) {
            distinctPairs.insert({min(currentNum, neededNum), max(currentNum, neededNum)});
        }
        
        occurrences[currentNum]++;
    }

    return vector<pair<int,int>>(distinctPairs.begin(), distinctPairs.end());
}

int main() {
    vector<int> inputData = {1, 5, 5, 4, 6, 8, 2, 9};
    int targetSum = 10;

    auto outputResult = findUniqueSums(inputData, targetSum);
    
    for (const auto &pairEntry : outputResult) {
        cout << pairEntry.first << ", " << pairEntry.second << endl;
    }

    return 0;
}