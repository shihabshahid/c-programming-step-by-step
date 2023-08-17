#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("number_file.txt","w");
    fprintf(file,"%d\n",10);
    fclose(file);
    printf("File write(number) successfully");
    return 0;
}
