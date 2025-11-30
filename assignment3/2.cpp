#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> consolidateRanges(vector<pair<int,int>>& ranges) {
    if (ranges.empty()) return {};

    sort(ranges.begin(), ranges.end());

    vector<pair<int,int>> output;
    output.push_back(ranges[0]);

    for (int k = 1; k < ranges.size(); k++) {
        auto &previous = output.back();
        auto &current = ranges[k];

        if (current.first <= previous.second) {
            previous.second = max(previous.second, current.second);
        } else {
            output.push_back(current);
        }
    }

    return output;
}

int main() {
    vector<pair<int,int>> input_data = {{4, 7}, {1, 5}, {8, 12}, {11, 15}};

    auto final_set = consolidateRanges(input_data);

    cout << "Consolidated ranges:\n";
    for (auto &item : final_set)
        cout << "[" << item.first << ", " << item.second << "]\n";
}