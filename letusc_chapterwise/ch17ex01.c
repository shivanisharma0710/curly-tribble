#include <stdio.h>
#include <conio.h>
struct student
{
char name[20];
char dept[20];
char course[20];
int roll; 
int year_join;
}stud[450];

int main ()
{
int i,n;
printf("Enter the number of students");
scanf("%d",&n);
printf("Enter the record of students");
for(i=0;i<n;i++)
{
printf("Enter name");
scanf("%s",&stud[i].name);
printf("Enter Department");
scanf("%s",&stud[i].dept);
printf("Enter Roll no");
scanf("%d",&stud[i].roll);
printf("Enter year of joining");
scanf("%d", &stud[i].year_join);
printf("Enter course");
scanf("%s",&stud[i].course);
}
printf("Data of students are");

for(i=0;i<n;i++)
{
printf("Name of student is %s\t",stud[i].name);
printf("Departemt of student is %s\t",stud[i].dept);
printf("Roll no of student is %d\t",stud[i].roll);
printf("Year of joining is %d\t",stud[i].year_join);
printf("Course of student is %s\t",stud[i].course);
}
}