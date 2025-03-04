#include<iostream>
#include<vector>
#include<unordered_map>
class array{
public:
void check(const std::vector<int>&arr){
    int n=arr.size();
    std::unordered_map<int,int> temp;
    for(int num:arr){
        temp[num]++;
    }
        for(const auto & pair:temp){
            if(pair.second>n/2){
                std::cout<<pair.first;
                return;
            }
        }


}
};

int main(){
    std::vector<int>arr={1,2,2,2,1,2,1,2,1,2,1,2,1,1,2};
    array x;
    x.check(arr);
    

}