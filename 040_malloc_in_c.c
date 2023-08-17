#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=NULL;
    if(ptr==NULL){
        printf("Memory not allocated\n");
    }
    else{
        printf("Memory allocated\n");
    }
    ptr = (int *)malloc(sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated\n");
    }
    else{
        printf("Memory allocated\n");
    }
    //printf("Size: %d",sizeof(ptr));
    return 0;
}
