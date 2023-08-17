#include<stdio.h>
int main(){
    char arr[3][7];
    for(int i=0;i<3;i++){
        printf("Type name(6 char): ");
        for(int j=0;j<7;j++){
            scanf("%c",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<7;j++){
            printf("%c",arr[i][j]);
        }
    }
    return 0;
}
