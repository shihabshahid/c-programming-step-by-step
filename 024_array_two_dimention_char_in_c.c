#include<stdio.h>
int main(){
    char arr[3][6]={
        {'s','h','i','h','a','b'},
        {'s','h','a','h','i','d'},
        {'s','u','l','t','a','n'}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
