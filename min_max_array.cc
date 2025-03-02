#include<iostream>
#include<vector>

void maxmin(std::vector<int> &arr,int &min,int &max){
    
    int size= arr.size();
    if(arr.empty()){
        std::cout<<"array is empty\n";
        return;
    }
    min=max=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
}
int main(){
    std::vector<int> arr={785,3532,42532,252532,11,1552,1351,12,131,315};
    int max=0;
int min=0;
    maxmin(arr,min,max);
    std::cout<<"min:"<<min<<std::endl;
    std::cout<<"max:"<<max<<std::endl;
}