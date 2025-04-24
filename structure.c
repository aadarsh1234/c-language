// record of 3 student using struct 
#include <stdio.h>
#include <string.h>

struct student{
    int roll_no;
    int id;
    char name[20];
    float marks;
}a,b,c;

int main()
{
    printf("Enter student A\n");
    printf("Enter roll_no");
    scanf("%d",&a.roll_no);
    printf("Enter name");
    scanf("%s",a.name);
    printf("Enter marks");
    scanf("%f",&a.marks);
    printf("Enter id");
    scanf("%d",&a.id);
    

    printf("\nEnter student B\n");
    printf("Enter roll_no");
    scanf("%d",&b.roll_no);
    printf("Enter name");
    scanf("%s",b.name);
    printf("Enter marks");
    scanf("%f",&b.marks);
    printf("Enter id");
    scanf("%d",&b.id);
    

    printf("\nEnter student C\n");
    printf("Enter roll_no");
    scanf("%d",&c.roll_no);
    printf("Enter name");
    scanf("%s",c.name);
    printf("Enter marks");
    scanf("%f",&c.marks);
    printf("Enter id");
    scanf("%d",&c.id);
    

    printf("\n Detail of Student A\n");
    printf("Roll no is=%d\n",a.roll_no);
    printf("Id is=%d\n",a.id);
    printf("name is=%s\n",a.name);
    printf("marks is=%f\n",a.marks);
    

    printf("\n Detail of Student B\n");
    printf("Roll no is=%d\n",b.roll_no);
    printf("Id is=%d\n",b.id);
    printf("name is=%s\n",b.name);
    printf("marks is=%f\n",b.marks);
    

    printf("\n Detail of Student \n");
    printf("Roll no is=%d\n",c.roll_no);
    printf("Id is=%d\n",c.id);
    printf("name is=%s\n",c.name);
    printf("marks is=%f\n",c.marks);
    
    


    return 0;
}
