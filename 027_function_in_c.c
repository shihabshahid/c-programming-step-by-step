#include<stdio.h>
void fun_1(){
    printf("I am from the function 1: 10\n");
}
int fun_2(){
    return 20;
}
void fun_3(int p1){
    printf("I am from the function 3: %d\n",p1+10);
}
int fun_4(int p1,int p2){
    return p1+p2;
}
int main(){
    fun_1();
    printf("I am from the function 2: %d\n",fun_2());
    fun_3(20);
    printf("I am from the function 4: %d",fun_4(25,15));
    return 0;
}
