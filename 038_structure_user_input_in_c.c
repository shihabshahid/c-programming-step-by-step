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
    printf("Type char: ");
    scanf("%c",&s1.my_char);
    printf("Type int: ");
    scanf("%d",&s1.my_int);
    printf("Type float: ");
    scanf("%f",&s1.my_float);
    printf("Type bool(0/1): ");
    scanf("%d",&s1.my_bool);
    printf("%c\n",s1.my_char);
    printf("%d\n",s1.my_int);
    printf("%.2f\n",s1.my_float);
    printf("%d\n",s1.my_bool);

    return 0;
}
