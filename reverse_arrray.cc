#include<iostream>
#include<vector>
void reverse(std::vector<int> &arr){
    int size= arr.size();
    int j=size-1;
    for (int i=0;i<j;i++){
        std::swap(arr[i], arr[j]);
        j--;
    }
    
}
int main(){
    std::vector<int> arr={3,2,6,7,8};

    reverse(arr);
    for(int i:arr){
        std::cout<<i<<std::endl;
    }
}