#include<iostream>
#include<vector>
class array{
public:
void check(const std::vector<int> &arr){
    int sum=0;
    int n=arr.size()+1;
    for(size_t i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int total_sum= (n*(n+1))/2;
    
    int miss=total_sum-sum;
   
        std::cout<<miss;
    

}
};

int main(){
    std::vector<int>arr={1,2,3,4,5,6,8};
    array x;
    x.check(arr);



}