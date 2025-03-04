#include <iostream>
#include <vector>
class array
{
public:
    void palindr(std::vector<int> &arr)
    {
        size_t t=arr.size()-1;
        for(size_t i=0;i<t;i++){
            if(arr[i]!=arr[t]){
                std::cout<<"no";
                return;
            }
            t--;
        }
        std::cout<<"yes";

    }
};
int main()
{
    std::vector<int> arr = {1, 2,3,2, 1};
    array x;
    x.palindr(arr);
}