#include<stdio.h>
int main(){
    float marks;
    printf("Type your marks: ");
    scanf("%f",&marks);
    printf("Grade: ");
    if(marks>=80){
        printf("A+");
    }
    else if(marks>=70){
        printf("A");
    }
    else if(marks>=60){
        printf("A-");
    }
    else if(marks>=50){
        printf("B");
    }
    else if(marks>=40){
        printf("C");
    }
    else if(marks>=33){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}
