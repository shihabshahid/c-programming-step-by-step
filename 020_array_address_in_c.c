#include<stdio.h>
int main(){
    int arr[] = {1,3,5,7,9};
    printf("---Array Address Decimal---\n");
    printf("%d\n",&arr);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[1]);
    printf("%d\n",&arr[2]);
    printf("%d\n",&arr[3]);
    printf("%d\n",&arr[4]);
    printf("---Array Address Hexadecimal---\n");
    printf("%p\n",&arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);

    return 0;
}
