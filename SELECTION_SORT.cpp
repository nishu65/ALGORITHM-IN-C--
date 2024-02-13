//...................................................SELECTION SORTING.......................................................
#include <iostream>
using namespace std;
class sort
{
public:
    void selection(int arr[], int size, int y)
    {
        int i = y;
        int smallindex = y;
        int key = arr[y];
        int x = size / sizeof(int);
        // cout << x << y;
        for (i = y + 1; i < x; i++)
        {
            if (key > arr[i])
            {
                key = arr[i];
                smallindex = i;
            }
        }
        if (arr[smallindex] != arr[y])
        {
            arr[smallindex] = arr[y];
            arr[y] = key;
        }
    }
};
int main()
{
    cout<<"................................THIS IS SELECTION SORT..............................."<<endl;
    cout << "ENTER RANGE OF ARRAY :";
    int r;
    cin >> r;
    int arr[r];
    for (int l = 0; l < r; l++)
    {
        cout << "ENTER VALUE AT INDEX " << l << ":";
        cin >> arr[l];
    }
    cout << " ARRAY : "
         << "{";
    for (int v = 0; v < r; v++)
    {

        cout << arr[v] << ",";
    }
    cout << "}"<<endl;

    int size = sizeof(arr);
    sort a;
    int x = size / sizeof(int);

    for (int i = 0; i < x - 1; i++)
    {
        a.selection(arr, size, i);
    }
    cout << "SORTED ARRAY : "
         << "{";
    for (int f = 0; f < x; f++)
    {

        cout << arr[f] << ",";
    }
    cout << "}";

    return 0;
}