#include <iostream>
#include <vector>
void checking_arr(const std::vector<int>& arr)
{
    

    if (arr.empty())
    {
        std::cout << "array is empty" << std::endl;

        return;
    }
    
    for (size_t i = 1; i < arr.size(); i++)
    {
        if (arr[i-1] > arr[i])
        {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
}

int main()
{
    std::vector<int> arr = {3, 5, 7, 9, 33, 445,2};
    checking_arr(arr);
    return 0;
}