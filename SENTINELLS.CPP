#include <iostream>
using namespace std;
void sentinel(int arr[], int size, int key)
{
    int last = arr[size - 1];
    arr[size - 1] = key;
    int i = 0;
    while (arr[i] != key)
    {
        i++;
    }
    arr[i] = last;
    if ((i < size - 1) || (arr[i] == key))
    {
        cout << key << " IS PRESENT AT INDEX " << i;
    }
    else
    {
        cout << "KEY NOT FOUND ";
    }
};
int main()
{
    int arr[] = {10, 45, 76, 85, 23, 88};
    int size = sizeof(arr);
    int key;
    cout << "ENTER A KEY :";
    cin >> key;
    sentinel(arr, size, key);
}