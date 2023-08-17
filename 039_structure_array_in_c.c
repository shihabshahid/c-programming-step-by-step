#include <stdio.h>
struct student{
    int roll_no;
    char name[30];
    int age;
};
int main(){
  int i;
  struct student stud[5];
  for(i=0; i<=4; i++){
    printf("Student %d\n",i+1);
    stud[i].roll_no = i+1;
    printf("Enter name :");
    scanf("%s",stud[i].name);
    printf("Enter age :");
    scanf("%d", &stud[i].age);
  }
  printf("-----------Display ALL Data--------\n");
  for(i=0; i<=4; i++){
      printf("Student %d\n",i+1);
      printf("Roll no. : %d\n", stud[i].roll_no);
      printf("Name : %s\n", stud[i].name);
      printf("Age. : %d\n", stud[i].age);
  }
  printf("-------------Search (2)-----------\n");
  for(i=0; i<=4; i++){
    if(stud[i].roll_no == 2){
      printf("Student %d\n",i+1);
      printf("Roll no. : %d\n", stud[i].roll_no);
      printf("Name : %s\n", stud[i].name);
      printf("Age. : %d\n", stud[i].age);
    }
  }
  return 0;
}
