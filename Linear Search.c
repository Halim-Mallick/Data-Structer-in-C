//Linear Serach Program without function
#include<stdio.h>
int main(){
    int i,x=6,arr[]={6,1,8,5,3,0};
    int size=6,index=-1;
    for(i=0; i<size; i++){
        if(x==arr[i]){
            index=i;
        }
    }
    if(index!=-1){
        printf("index No: %d",index);
    }
    else{
      printf("%d",index);
    }
    return 0;
}
