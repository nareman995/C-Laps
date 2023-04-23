#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*5- C Function to store information (name, id and grade) for
10 students in array of structures using pointers and
another function to print all the structures using pointers.*/
struct students
{
    int stud_id;
    char stud_name[100];
    float stud_grade;
    //students* stud_next;
};
void enter_data_studs(struct students*[10]);
void print_data_studs(struct students*[10]);
int main()
{
  static struct students *stud_arr[10];
  enter_data_studs(&stud_arr);
  print_data_studs(&stud_arr);
    return 0;
}
void enter_data_studs(struct students*stud_arr[10])
{
  for(int i=0;i<10;i++)
  {
      stud_arr[i]=malloc(sizeof(struct students));
      printf("Enter your student id");
      scanf("%d",&stud_arr[i]->stud_id);
      printf("Enter your student name");
      scanf("%s",&stud_arr[i]->stud_name);
      printf("Enter your student grade");
      scanf("%f",&stud_arr[i]->stud_grade);
  }

}
void print_data_studs(struct students* stud_arr[10])
{
  for(int i=0;i<10;i++)
  {
      printf("Enter your student %d id %d",i,stud_arr[i]->stud_id);
      printf("Enter your student %d name %s",i,stud_arr[i]->stud_name);
      printf("Enter your student %d grade %f",i,stud_arr[i]->stud_grade);
  }

}
