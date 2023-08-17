#include<stdio.h>
void fun_1(){
    printf("I declared before main function\n");
}
void fun_2();

int main(){
    fun_1();
    fun_2();
    return 0;
}

void fun_2(){
    printf("I declared after main function\n");
}
