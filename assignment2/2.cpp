#include <iostream>
#include <vector>
#include <string>
#include <utility> 

class SimpleMap {
private:
    // Internal storage: A vector of (Key, Value) pairs. This is kept private 
    // to enforce encapsulation.
    std::vector<std::pair<std::string, int>> mapElements;

    
    int findKeyIndex(const std::string& key) const {
        for (size_t i = 0; i < mapElements.size(); ++i) {
            if (mapElements[i].first == key) {
                return i;
            }
        }
        return -1;
    }

public:
   
    void setPair(const std::string& key, int value) {
        int index = findKeyIndex(key);

        if (index != -1) {
            // Key found: Update the value
            mapElements[index].second = value;
        } else {
            // Key not found: Add the new pair
            mapElements.push_back({key, value});
        }
    }

   
    int getValue(const std::string& key) const {
        int index = findKeyIndex(key);

        if (index != -1) {
            return mapElements[index].second;
        } else {
            throw std::runtime_error("Key not found.");
        }
    }

    
    void displayAll() const {
        std::cout << "\n Map Contents" << std::endl;
        for (const auto& pair : mapElements) {
            std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        }
        
    }
};


int main() {
    SimpleMap myMap;

    myMap.setPair("Book", 50);
    myMap.setPair("Pen", 5);
    myMap.setPair("Book", 55); // Update

    myMap.displayAll();

    try {
        std::cout << "Value for 'Pen': " << myMap.getValue("Pen") << std::endl;
        // myMap.getValue("Pencil"); // Uncomment to test error
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}