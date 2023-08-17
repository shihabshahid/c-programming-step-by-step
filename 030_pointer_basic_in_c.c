#include<stdio.h>
int main(){
    int v1=20;
    int *p1;
    printf("V1 address = %d\n",&v1);
    printf("V1 value = %d\n",v1);
    printf("p1 address = %d\n",&p1);
    printf("p1 garbage value = %d\n",p1);
    p1=v1;
    printf("p1 address = %d\n",&p1);
    printf("v1 value through p1  = %d\n",p1);
    p1=&v1;
    printf("p1 address = %d\n",&p1);
    printf("v1 address through p1 = %d\n",p1);
    *p1=30;
    printf("v1 address = %d\n",&v1);
    printf("v1 change value through p1 = %d\n",v1);
    return 0;
}
