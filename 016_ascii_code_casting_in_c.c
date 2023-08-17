#include<stdio.h>
int main(){
    printf("--------1 to 9--------\n");
    for(int i=48;i<=57;i++){
        printf("%d=%c ",i,i);
    }
    printf("\n--------A to Z--------\n");
    for(int i=65;i<=90;i++){
        printf("%d=%c ",i,i);
    }
    printf("\n--------a to z--------\n");
    for(int i=97;i<=122;i++){
        printf("%d=%c ",i,i);
    }
    printf("\n");
    return 0;
}
