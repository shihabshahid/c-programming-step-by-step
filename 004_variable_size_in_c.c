#include<stdio.h>
#include<stdbool.h>
int main(){
    char v1='a';
    int v2=123;
    float v3=123.321;
    double v4=123.321;
    bool v5=true;

    printf("%d\n",sizeof(v1));
    printf("%d\n",sizeof(v2));
    printf("%d\n",sizeof(v3));
    printf("%d\n",sizeof(v4));
    printf("%d\n",sizeof(v5));
    return 0;
}
