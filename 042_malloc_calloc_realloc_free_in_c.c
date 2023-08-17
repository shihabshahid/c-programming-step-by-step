#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,count=0;
    ptr = (int *)malloc(sizeof(int));
    //ptr = (int *)calloc(sizeof(int));
    while(1){
        printf("Type operation code: 1=entry, 0=exit: ");
        int code,data;
        scanf("%d",&code);
        if(code==1){
            ptr=realloc(ptr,1);
            printf("Type data int: ");
            scanf("%d",&data);
            ptr[count]=data;
            count++;
        }
        else{
            break;
        }
    }
    printf("----------------\n");
    for(int i=0;i<count;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    printf("\nAllocated memory free");

    return 0;
}
