#include<stdio.h>
int main(){
    float sub_marks,obj_marks;
    printf("Type your subjective marks: ");
    scanf("%f",&sub_marks);
    printf("Type your objective marks: ");
    scanf("%f",&obj_marks);
    if(sub_marks>=17.5 && obj_marks>=17.5){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}
