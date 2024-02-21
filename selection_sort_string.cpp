#include <iostream>
#include <string>
using namespace std;
#define max_len 100
class selection
{
public:
    void sort(char arr[][max_len], int size)
    {
        int i, j, min_ind;
        char  minval[max_len];

        for (i = 0; i < size - 1; i++)
        {
            min_ind = i;
            for (j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[min_ind])
                {
                    min_ind = j;
                }
            }
            if (min_ind != i)
            {
                swap(arr[i],arr[min_ind]);
            }
        }
    }
};
int main()
{
    char arr[][max_len] = {"pineapple", "mango", "tomato", "pea"};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    selection a;
    a.sort(arr, size);
    cout << "SORTED ARRAY:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << i << ":" << arr[i] << endl;
    }
    return 0;
}