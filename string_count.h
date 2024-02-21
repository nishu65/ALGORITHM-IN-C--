int count_len(char arr[]){
    int count=0;
    int len=100;
    int i=0;
    for(i;i<100;i++){
        if(arr[i]=='\0'){
            break;
        }
        count=count+1;
    }
    return count;
}