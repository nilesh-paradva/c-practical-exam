#include<stdio.h>

int main(){
    int num;

    for (int i = 1; i <= 5; i++) {
        num = i * i;
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}