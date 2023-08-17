#include<stdio.h>
void work_with_value(int p1,int p2){
    printf("Addition(work with value): %d\n",p1+p2);
}
void work_with_address(int *p1,int *p2){
    *p1=*p1+*p2;
}
int main() {
    int a=10, b=20;
    int *pa = &a, *pb = &b;
    work_with_value(a,b);
    work_with_address(pa, pb);
    printf("Addition(work with address): %d", *pa);
    return 0;
}
