#include <iostream>
#include <vector>
class array
{
public:
    void findmax(const std::vector<int> &arr)
    {
        int low = 0, high = arr.size() - 1;
        int mid;
        while (low <high)
        {
            mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid + 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        std::cout << low;
    }
};
int main()
{
    //element peak 
    std::vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
    array x;
    x.findmax(arr);
}