#include<stdio.h>
#include<stdbool.h>
struct my_stratct{
    char my_char;
    int my_int;
    float my_float;
    bool my_bool;
};
int main(){
    struct my_stratct s1;
    s1.my_char='A';
    s1.my_int=10;
    s1.my_float=12.123;
    s1.my_bool=false;
    printf("%c\n",s1.my_char);
    printf("%d\n",s1.my_int);
    printf("%.2f\n",s1.my_float);
    printf("%d\n",s1.my_bool);

    return 0;
}
