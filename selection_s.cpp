//...........................................................SELECTION SORT FOR STRING according to length.......................................................
#include <iostream>
#include <string>
using namespace std;
#define max_len 100
class sort
{
public:
    void selection(char arr[][max_len], int size)
    {
        int x;
        string y;
        int k = 0;
        for (int i = 0; i < size; i++)
        {
            int count = 0;
            for (int j = 0; j < max_len; j++)
            {
                if (arr[i][j] == '\0')
                {
                    break;
                }
                count = count + 1;
            }
            cout << count << endl;
            if(k<count){
                string y=arr[i];
                cout<<y<<endl;

            }
            k=count;

        }
    }
    void display(char a [][max_len],int size){
        int i=0;
        for (i;i<size;i++){
            cout<<i<<":"<<a[i]<<endl;
        }
    }
};

int main()
{
    char arr[][max_len] = {"apple", "orange", "tomato", "pea"};
    int n = sizeof(arr) / max_len;
    int i;
    /* cout << "GIVEN ARRAY :" << endl;
      for(i=0;i<n;i++){
         for(int j=0;j<max_len;j++){
          if(arr[i][j]=='\0'){
             break;
          }
          cout<< i <<","<<j<<":"<<arr[i][j]<<endl;
         }

      }*/
    sort a;
    a.selection(arr, n);
    a.display(arr,n);
        return 0;
    }