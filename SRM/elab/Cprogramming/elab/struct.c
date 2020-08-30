#include <stdio.h>
struct
 eng{char name[30];
 char dep[4];
 int year ;
 float cgpa;} ;
 int main()
 {
    int t ;
    scanf("%d",&t);
    struct eng a;
    scanf("%s",a.name);
    scanf("%s",a.dep);
    scanf("%d%f",&a.year,&a.cgpa);
    printf("Name:%s",a.name);
    printf("\nDepartment:%s",a.dep);
    printf("\nYear of study:%d",a.year);
    printf("\nCGPA:%.1f\n",a.cgpa);
    
 return 0;
 }