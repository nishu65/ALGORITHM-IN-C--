#include<iostream>
#include<vector>
class array{
public:
void searchxlast(const std::vector<int> &arr,int x,int low,int high){
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
           
            
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        if(arr[mid]>x){
            high=mid-1;
        }
        
    }

    std::cout<<last;
    
}
void searchxfirst(const std::vector<int> &arr,int x, int low,int high){
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
           
            
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        if(arr[mid]>x){
            high=mid-1;
        }
        
    }

    std::cout<<first;
}

};

int main(){
    std::vector<int> arr={1,2,4,4,4,5,4,6,6};
    array a;
    int x=4;
    size_t n=arr.size()-1;
    int low=0;
    a.searchxfirst(arr,x,low,n);
    a.searchxlast(arr,x,low,n);
    
}
