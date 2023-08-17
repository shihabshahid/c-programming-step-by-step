#include<stdio.h>
int main(){
    int v1=1,v2=3,v3=5,v4=7,v5=9;
    printf("--------value-----\n");
    printf("%d\n",v1);
    printf("%d\n",v2);
    printf("%d\n",v3);
    printf("%d\n",v4);
    printf("%d\n",v5);
    printf("--------address-decimal-----\n");
    printf("%d\n",&v1);
    printf("%d\n",&v2);
    printf("%d\n",&v3);
    printf("%d\n",&v4);
    printf("%d\n",&v5);
    printf("--------address-hex-adecimal-----\n");
    printf("%p\n",&v1);
    printf("%p\n",&v2);
    printf("%p\n",&v3);
    printf("%p\n",&v4);
    printf("%p\n",&v5);
    return 0;
}
