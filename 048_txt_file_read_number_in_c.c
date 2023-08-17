#include<stdio.h>
int main(){
    FILE *file;
    int my_int;
    file = fopen("number_file.txt","r");
    fscanf (file, "%d", &my_int);
    printf("%d",my_int);
    fclose(file);
    printf("\nFile read(number) successfully");
    return 0;
}
