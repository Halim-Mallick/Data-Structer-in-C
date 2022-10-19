//Insertion sort using c
#include<stdio.h>
int main(){
    int i,j,size=8,val,empty;
    int data[]={5,2,4,1,6,3,8,7};

    printf("Unsorted List: ");
    for(i=0; i<size; i++){
        printf("%d ",data[i]);
    }

    for(i=1; i<size; i++){
        val=data[i];
        empty=i;
        while(empty>0 && data[empty-1]>val){
            data[empty]=data[empty-1];
            empty--;
        }
        data[empty]=val;
    }

    printf("\nSorted List: ");
    for(i=0; i<size; i++){
        printf("%d ",data[i]);
    }

    printf("\n");
    return 0;
}
