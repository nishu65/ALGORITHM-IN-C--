#include<iostream>
#include<vector>
class array{
public:
    void rotate(std::vector<int>& arr){
        if(arr.empty()||arr.size()==1){
            return;
        }
        int first=arr[0];
       size_t i=0;
        for(i;i<arr.size()-1;i++){
          arr[i]=arr[i+1];
        }
        arr[i]=first;

    }
    void display (const std::vector<int>& arr){
        for(int i:arr){
            std::cout<<i<<" ";
        }
    }
};

int main(){
    std::vector<int> arr={1,2,3,4,5};
    array x;
    x.rotate(arr);
    x.display(arr);

}