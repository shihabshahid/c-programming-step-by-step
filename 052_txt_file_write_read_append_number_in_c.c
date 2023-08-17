#include<stdio.h>
int main(){
    FILE *file;
    int my_int,process;
    file = fopen("number_file.txt","a");
    printf("--------file write----------\n");
    while(1){
        printf("Type continue(1/0): ");
        scanf("%d",&process);
        if(process==1){
            printf("Type a number: ");
            scanf("%d",&my_int);
            fprintf(file,"%d\n",my_int);
        }
        else{
            break;
        }
    }
    fclose(file);
    printf("--------file read----------\n");
    file = fopen("number_file.txt","r");
    while(fscanf(file, "%d", &my_int) == 1){
        printf("%d\n",my_int);
    }
    fclose(file);
    return 0;
}
