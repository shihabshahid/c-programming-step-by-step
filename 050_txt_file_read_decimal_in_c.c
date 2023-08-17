#include<stdio.h>
int main(){
    FILE *file;
    float i;
    file = fopen("decimal_file.txt","r");
    fscanf(file, "%f", &i);
    printf("%.2f",i);
    fclose(file);
    printf("\nFile read(decimal) successfully");
    return 0;
}

