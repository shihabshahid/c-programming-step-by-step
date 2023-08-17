#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    //printf("Size: %d",sizeof(ptr));
    return 0;
}
