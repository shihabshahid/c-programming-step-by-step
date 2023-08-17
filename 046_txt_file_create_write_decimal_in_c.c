#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("decimal_file.txt","w");
    fprintf(file,"%.2f\n",10.123);
    fclose(file);
    printf("File write(decimal number) successfully");
    return 0;
}
