#include <iostream>
using namespace std;


template<typename T>
class SimpleList {
private:
    vector<T> data;   // internal storage

public:
    // Default constructor
    SimpleList() = default;

    // Constructor from initializer list
    SimpleList(initializer_list<T> il) : data(il) {}

    // Add element to the end
    void append(const T& value) {
        data.push_back(value);
    }

    // Remove element by value (first occurrence). Returns true if removed.
    bool remove(const T& value) {
        auto it = find(data.begin(), data.end(), value);
        if (it == data.end()) return false;
        data.erase(it);
        return true;
    }

    // Remove element at index (throws out_of_range)
    void pop_at(size_t index) {
        if (index >= data.size()) throw out_of_range("index out of range");
        data.erase(data.begin() + index);
    }

    // Get size
    size_t size() const {
        return data.size();
    }

    // Index operator (read/write)
    T& operator[](size_t index) {
        if (index >= data.size()) throw out_of_range("index out of range");
        return data[index];
    }
    const T& operator[](size_t index) const {
        if (index >= data.size()) throw out_of_range("index out of range");
        return data[index];
    }

    // Display as Python-like list using friend ostream operator
    friend ostream& operator<<(ostream& os, const SimpleList<T>& lst) {
        os << "[";
        for (size_t i = 0; i < lst.data.size(); ++i) {
            os << lst.data[i];
            if (i + 1 != lst.data.size()) os << ", ";
        }
        os << "]";
        return os;
    }
};

int main() {
    SimpleList<int> a = {1, 2, 3};
    cout << "Initial list: " << a << "\n";
    a.append(4);
    cout << "After append(4): " << a << "\n";
    a.remove(2);
    cout << "After remove(2): " << a << "\n";
    cout << "Element at index 1: " << a[1] << "\n";
    cout << "Size: " << a.size() << "\n";
    a.pop_at(0);
    cout << "After pop_at(0): " << a << "\n";
    return 0;
}