#include <iostream>
#include <vector>

class Array {
public:
    void findMajority(const std::vector<int> &arr) {
        int candidate = -1, count = 0;

        // Step 1: Find candidate
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Step 2: Verify if it's a majority
        count = 0;
        for (int num : arr) {
            if (num == candidate) count++;
        }

        if (count > arr.size() / 2) {
            std::cout << "Majority Element: " << candidate << std::endl;
        } else {
            std::cout << "No Majority Element" << std::endl;
        }
    }
};

int main() {
    std::vector<int> arr = {1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2};
    Array x;
    x.findMajority(arr);
}
