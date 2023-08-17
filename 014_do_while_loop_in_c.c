#include<stdio.h>
int main(){
    int i=1,j=5;
    do{
        printf("%d X %d = %d\n",i,j,i*j);
        i=i+1;
    }
    while(i<11);
}

