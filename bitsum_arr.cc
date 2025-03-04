#include<iostream>
#include<vector>

class array{
public:
    void checkmiss(const std::vector<int> &arr){
        int n=arr.size()+1;
        int sum=0;
        for(int i:arr){
            sum^=i;
        }
        int total=0;
        for(int i=0;i<=n;i++){
        total^=i;
    }
    int miss=total^sum;
    std::cout<<miss;
}

};


int main(){
    std::vector<int>arr={1,2,3,5};
    array x;
    x.checkmiss(arr);

}
