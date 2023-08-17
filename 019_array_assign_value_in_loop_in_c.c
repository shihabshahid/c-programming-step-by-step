#include<stdio.h>
int main(){
    int arr[5];
    printf("---Array Value Assign---\n");
    for(int i=0;i<5;i++){
        printf("Type number: ");
        scanf("%d",&arr[i]);
    }
    printf("---Array Value Access---\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
