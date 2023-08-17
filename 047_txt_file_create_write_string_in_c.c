#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("string_file.txt","a");
    fputs("ABCD\n",file);
    fclose(file);
    printf("File write(string) successfully");
    return 0;
}

