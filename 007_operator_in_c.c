#include<stdio.h>
int main(){
    int v1=25,v2=7,v3,result;
    float result_float;
    printf("----Arithmetic Operators-----\n");
    result = v1+v2;
    printf("Addition: %d\n",result);
    result = v1-v2;
    printf("Subtraction: %d\n",result);
    result = v1*v2;
    printf("Multiplication: %d\n",result);
    result_float = (float)v1/v2;
    printf("Division(float casting): %f\n",result_float);
    result_float = (float)v1/v2;
    printf("Division(2 decimal): %.2f\n",result_float);
    result = (int)v1/v2;
    printf("Division(int casting): %d\n",result);
    result = v1%v2;
    printf("Remainder : %d\n",result);

    printf("----Assignment Operators-----\n");
    result=v2;
    printf("Assign: %d\n",result);
    result+=2;
    printf("Assign Addition: %d\n",result);
    result-=2;
    printf("Assign Subtraction: %d\n",result);
    result*=2;
    printf("Assign Multiplication: %d\n",result);
    result/=2;
    printf("Assign Division: %d\n",result);
    result%=4;
    printf("Assign Remainder: %d\n",result);

    printf("----Increment and Decrement Operators-----\n");
    printf("Result value: %d\n",result);
    result++;
    printf("Increment after: %d\n",result);
    ++result;
    printf("Increment before: %d\n",result);
    result--;
    printf("Decrement after: %d\n",result);
    --result;
    printf("Decrement before: %d\n",result);

    printf("----Relational Operators-----\n");
    printf("Equal to: %d\n",2==2);
    printf("Greater than: %d\n",3>2);
    printf("Less than: %d\n",3<2);
    printf("Not equal to: %d\n",2!=2);
    printf("Greater than or equal to: %d\n",2>=2);
    printf("Less than or equal to: %d\n",2<=2);

    printf("----Logical Operators-----\n");
    printf("AND: %d\n",2==2 && 2!=2);
    printf("OR: %d\n",2==2 || 2!=2);
    printf("NOT: %d\n",!(2==2 || 2!=2));

    printf("----Bitwise Operators-----\n");
    printf("Bitwise AND: %d\n",1&2);
    printf("Bitwise  OR: %d\n",1|2);
    printf("Bitwise exclusive  OR: %d\n",1^2);
    printf("Bitwise complement: %d\n",~2);
    printf("Bitwise Shift left: %d\n",1<<2);
    printf("Bitwise Shift right: %d\n",1>>2);


    return 0;
}

