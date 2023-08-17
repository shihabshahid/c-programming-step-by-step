#include<stdio.h>
int main(){
    float present,marks;
    printf("Type your present number(15/30): ");
    scanf("%f",&present);
    if(present>=15){
        printf("Type your marks: ");
        scanf("%f",&marks);
        if(marks>=33){
            printf("Pass");
        }
        else{
            printf("Fail");
        }
    }
    else{
        printf("Presence is not sufficient");
    }
}
