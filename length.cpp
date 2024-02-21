#include<iostream>
#include<string>
#include "string_count.h"
using namespace std;
#define max 20
int main(){
   // char arr[max]={'a','d','e','t','w'};
    char arr[]="hello hi";
   /* int c=0;
    int i;
    for(i=0;i<max;i++){
        if(arr[i]=='\0'){
            break;
        }
        c=c+1;
    }
    cout<<"length :"<<c;
    */
   cout<<count_len(arr);


}