// Problem Statement:
// Given a rotated sorted array (sorted in ascending order and then rotated at some pivot), find the minimum element in O(log n) time.

#include <iostream>
#include <vector>
class array
{
public:
    int findminr(const std::vector<int> &arr)
    {

        int min = INT_MAX;
        if (arr.empty() || arr.size() == 1)
        { // Edge cases
            if (arr.size() == 1)
            {
                min = arr[0];
                return min;
            }
            std::cout << "empty array";
            return min = -1;
        }
        int low = 0, high = arr.size() - 1;
        while (low <= high)
        {

            int mid = low + (high - low) / 2;
            if (mid < 0)
            {
                break;
            }

            if (arr[mid] < arr[high])
            {
                min = arr[mid];
                high = mid - 1;
            }
            else
            {
                min = arr[high];

                low = mid + 1;
            }
        }
        return min;
    }
};
int main()
{
    std::vector<int> arr = {3, 4, 5, 1, 2};
    array a;
    std::cout << a.findminr(arr);
}

//optimal solution below

/*#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

class array
{
public:
    int findminr(const std::vector<int> &arr)
    {
        if (arr.empty())
        {
            std::cout << "empty array";
            return -1;
        }
        int low = 0, high = arr.size() - 1;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            // If mid is greater than high, minimum is in the right half
            if (arr[mid] > arr[high])
            {
                low = mid + 1;
            }
            else
            {
                // Minimum is in the left half (including mid)
                high = mid;
            }
        }

        // At the end, low == high, which is the minimum element
        return arr[low];
    }
};

int main()
{
    std::vector<int> arr = {3, 4, 5, 1, 2};
    array a;
    std::cout << a.findminr(arr);
}
*/