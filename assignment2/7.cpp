#include <iostream>

class ArraySorter {
private:
   
    static const int MAX_SIZE = 100;
    int dataArray[MAX_SIZE]; 
    
    int currentSize = 0; 

public:
    
    void inputData() {
        std::cout << "Enter the number of elements (max " << MAX_SIZE << "): ";
        int n;
        std::cin >> n;
        
     
        if (n > MAX_SIZE) {
            n = MAX_SIZE;
            std::cout << "Limiting input to " << MAX_SIZE << " elements.\n";
        }
        
        currentSize = n;
        std::cout << "Enter " << n << " integers:\n";
        
        for (int i = 0; i < n; ++i) {
            std::cin >> dataArray[i];
        }
    }

    void bubbleSort() {
        int n = currentSize; 
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (dataArray[j] > dataArray[j + 1]) {
                    
                    int temp = dataArray[j];
                    dataArray[j] = dataArray[j + 1];
                    dataArray[j + 1] = temp;
                }
            }
        }
    }

   
    void displayData(const std::string& message) const {
        std::cout << message << ": ";
        
        for (int i = 0; i < currentSize; ++i) {
            std::cout << dataArray[i] << " ";
        }
        std::cout << std::endl;
    }
};


int main() {
    
    
   
    ArraySorter sorter;

    sorter.inputData();
    sorter.displayData("Original Array");
    sorter.bubbleSort();
    sorter.displayData("Sorted Array");

    return 0;
}
