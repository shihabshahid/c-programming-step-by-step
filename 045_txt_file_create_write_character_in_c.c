#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("character_file.txt","w");
    fputc('A',file);
    fclose(file);
    printf("File write(character) successfully");
    return 0;
}
