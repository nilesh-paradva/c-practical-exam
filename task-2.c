#include<stdio.h>

int main(){

    int get, max=0;

    printf("Enter array size :-");
    scanf("%d",&get);
    int array[get];

    for(int i=0; i<get; i++){
        printf("Enter the value of array [%d] :-",i);
        scanf("%d",&array[i]);
    }

    for(int i=0; i<get; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("\nLargest number in array :- %d\n\n",max);

    return 0;
}