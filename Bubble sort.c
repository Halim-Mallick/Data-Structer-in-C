//Bubble sort using c
#include<stdio.h>
int main(){
    int i,j,size=8,temp=0;
    int data[]={5,2,4,1,6,3,8,7};

    printf("Unsorted List: ");
    for(i=0; i<size; i++){
        printf("%d ",data[i]);
    }

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(data[j] > data[j+1]){
            //Swapping two number
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("\nSorted List: ");
    for(i=0; i<size; i++){
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}
