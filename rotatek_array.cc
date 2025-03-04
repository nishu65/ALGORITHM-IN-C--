#include <iostream>
#include <vector>
class array
{
public:
    void rotate(std::vector<int> &arr,int k)
    {

        std::vector<int >temp(arr.size());

        size_t j;
        size_t i=0;
        for( j=k;j<arr.size();j++){
            temp[i]=arr[j];
            i++;
        }
        for(j=0;j<k;j++){
            temp[i]=arr[j];
            i++;
        }
       

        for(int i:temp){
            std::cout<<i<<" ";
        }

    }
   

};
int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int k=2;
    array x;
    x.rotate(arr,k);
    
}