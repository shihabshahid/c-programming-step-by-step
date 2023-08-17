#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("character_file.txt","r");
    printf("%c",fgetc(file));
    fclose(file);
    printf("\nFile read(character) successfully");
    return 0;
}
