#include <iostream>
using namespace std;
// class for searching .................................
class search
{
public:
    int linear(int arr[], int key, int size)
    {
        for (int i=0; i < size; i++)
        {
            if (arr[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
};

int main(void)
{
    int key;
    int arr[] = {10, 45, 53, 34, 5};
    cout << "ENTER A N0. TO SEARCH = ";
    cin >> key;
    int size = sizeof(arr);
    search a;
    int index = a.linear(arr, key, size);
    if (index == -1)
    {
        cout << "ELEMENT IS NOT PRESENT ";
    }
    else
    {
        cout << "ELEMENT IS PRESENT AT " << index;
    }

    return 0;
}