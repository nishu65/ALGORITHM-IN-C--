#include <iostream>
#include <vector>
#include<unordered_map>
class array
{
public:
    void checkn(std::vector<int> &arr)
    {
        std::unordered_map<int, int> temp;
       for(int num : arr){
        temp[num]++;

       }
       for(const auto & pair:temp){
        if(pair.second>arr.size()/2){
            std::cout<<pair.first;
        }
       }


    }
};

int main()
{
    std::vector<int> arr={3, 3, 4, 2, 3, 3, 3, 5};

    array x;
    x.checkn(arr);


}