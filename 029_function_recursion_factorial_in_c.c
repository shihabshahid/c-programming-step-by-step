#include<stdio.h>
int factorial(int p1){
    if(p1<1){
        return 1;
    }
    else{
        return p1*factorial(p1-1);
    }
}
int main(){
    printf("%d",factorial(5));
    return 0;
}
