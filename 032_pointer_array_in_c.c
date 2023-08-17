#include<stdio.h>
int main(){
    int arr[] = {9,5};
    int *p1 = &arr[0];

    printf("%d = %d, %d = %d\n",&arr[0],arr[0],&arr[1],arr[1]);
    printf("Sum with variable = %d\n",arr[0]+arr[1]);
    printf("Sum with pointer = %d\n",*arr+*(arr+1));
    printf("Sum with pointer = %d\n",*p1+*(p1+1));
    return 0;
}
