#include <iostream>
#include <vector>
class zero
{
public:
    void zero_at_end(std::vector<int> &arr)
    {

        size_t j = 0;
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                std::swap(arr[i], arr[j]);
                j++;
            }
        }
    }

    void display(const std::vector<int> &arr)
    {
        for (int i : arr)
        {
            std::cout << i << " ";
        }
    }
};

int main()
{
    std::vector<int> arr = {0, 1, 0, 3, 1, 2};
    zero x;
    x.zero_at_end(arr);
    x.display(arr);

    return 0;
}