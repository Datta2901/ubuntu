#include<stdio.h>
typedef enum
{
    A,B
}grade_type ;
int marks ;
void find_grade(int marks) ;
int main()
{
    grade_type rank ;
    printf("Enter the marks");
    scanf("%d",&marks);
    rank = find_grade(marks);
    if(rank ==A)
    printf("My grade is A");
    else
    {
        printf("My grade is B");
    }
    
}
grade_type gradefind_grade(int marks)
{
    grade_type a ;
    if(85<=marks<=92)
    {a=A ;
    return(a);
    }
    else
    {a=B ;
    return(a);
    }

}