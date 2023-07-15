#include<stdio.h>
int main(){
    int array[]={8,1,5,2,9,0,3};
    int size=7,i,j,imin;
    
    for(i=0; i<size; i++){
        printf("%d ",array[i]); 
    }
    
    //Selection sort algorithm
    for(i=0; i<size; i++){
        imin=i;
        for(j=i+1; j<size; j++){
            if(array[j]<array[imin]){
                imin=j;
            }
        }
        int temp=array[i];
        array[i]=array[imin];
        array[imin]=temp;
    }
    printf("\n");
    for(i=0; i<size; i++){
        printf("%d ",array[i]); 
    }
    return 0;
}
