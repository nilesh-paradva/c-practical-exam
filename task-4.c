#include<stdio.h>

int main(){

    int get,a[100],squ;

    scanf("%d",&get);

    for(int i=0; i<get; i++){
        printf("enter the elements [%d]:-",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<get; i++){
        squ = a[i]*a[i];	
    }
    
    printf("\nsquare of the element:- %d\n",squ);

    return 0;
}