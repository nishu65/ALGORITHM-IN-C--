#include <iostream>
#include <vector>
#include <limits.h>

class Array {
public:
    void seclarge(const std::vector<int> &arr) {
        if (arr.size() < 2) {
            std::cout << "-1";  // No second largest
            return;
        }

        int largest = INT_MIN, second = INT_MIN;

        for (int num : arr) {
            if (num > largest) {
                second = largest;
                largest = num;
            } else if (num > second && num < largest) {
                second = num;
            }
        }

        if (second == INT_MIN) {
            std::cout << "-1"; // No second largest found
        } else {
            std::cout << second;
        }
    }
};

int main() {
    std::vector<int> arr = {34, 663, 232, 56454, 2422, 2233, 554, 6856};
    Array x;
    x.seclarge(arr);
    return 0;
}
