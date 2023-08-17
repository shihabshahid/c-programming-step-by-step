#include<stdio.h>
int main(){
    int arr[] = {9,8,3,6,2},sum=0;
    int *p1=&arr[0];
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("Sum with variable = %d\n",sum);

    sum=0;
    for(int i=0;i<5;i++){
        sum=sum+*(arr+i);
    }
    printf("Sum with pointer = %d\n",sum);
    sum=0;
    for(int i=0;i<5;i++){
        sum=sum+*(p1+i);
    }
    printf("Sum with pointer = %d\n",sum);
    return 0;
}
