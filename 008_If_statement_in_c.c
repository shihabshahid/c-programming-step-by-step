#include<stdio.h>
int main(){
    float marks;
    printf("Type your marks: ");
    scanf("%f",&marks);
    if(marks>=33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}
