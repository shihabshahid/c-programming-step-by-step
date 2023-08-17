#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("string_file.txt","r");
    char my_str[4];
    fgets(my_str,5,file);
    printf("%s",my_str);
    fclose(file);
    printf("\nFile read(string) successfully");
    return 0;
}
