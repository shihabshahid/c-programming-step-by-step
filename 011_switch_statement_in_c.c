#include<stdio.h>
int main(){
    char operation;
    float n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Type first operand: ");
    scanf("%f",&n1);
    printf("Type Second operand: ");
    scanf("%f",&n2);
    switch(operation){
        case '+':
            printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f",n1,n2,n1*n2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
