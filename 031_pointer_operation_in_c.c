#include<stdio.h>
int main(){
    int v1=9, v2=10;
    int *p1 = &v1, *p2=&v2;

    printf("%d = %d, %d = %d\n",&v1,v1,&v2,v2);
    printf("Addition (variable): %d\n",v1+v2);
    //printf("Addition (pointer): %d\n",p1+p2);
    printf("Addition (pointer): %d\n",*p1+*p2);
    printf("Addition (pointer + 1): %d\n",*p1+(*p1+1));

    return 0;
}
