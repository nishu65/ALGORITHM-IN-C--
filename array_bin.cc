//You are given a rotated sorted array (sorted in ascending order and then rotated at some pivot). 
//You need to search for a given target element in O(log n) time.
//



#include <iostream>
#include <vector>

class array {
public:
    int findn(const std::vector<int>& arr, int target) {
        if (arr.empty()) {
            return -1;
        }

        int low = 0, high = arr.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                return mid;
            }

            // Check if the left half is sorted
            if (arr[low] <= arr[mid]) {
                // Check if the target is in the left half
                if (arr[low] <= target && target < arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            // Right half is sorted
            else {
                // Check if the target is in the right half
                if (arr[mid] < target && target <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }
};

int main() {
    std::vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    array a;
    
    int result = a.findn(arr, target);
    std::cout << "Index: " << result << std::endl;

    return 0;
}
