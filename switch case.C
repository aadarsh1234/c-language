#include <stdio.h>

int main()
{
    char operator;
    printf("enter the operator");
    scanf("%c",&operator);
    switch(operator)
    {
        case '1':printf(" +");
        break;
        case '2':printf(" -");
        break;
        case '3':printf("*");
        break;
        case '4':printf("/");
        break;
        case '5':printf("mod");
        break;
        case '6': printf("no opretor ");
        break;
    }
    

    return 0;
}

#include<stdio.h>
int main()
{
    char grade;
    printf("enter the grade ");
    scanf("%c",&grade);
    switch(grade){
        case'A':printf("excellent");
        break;
        case'B':printf("verry good");
        break;
        case'C':printf("good");
        break;
        case'D':printf("flair");
        break;
        case'F':printf("fail");
        
    }
    
    return 0;
}

#include<stdio.h>
int main()
{
    int   month;
    printf("enter the month(1-12):");
    scanf("%d",&month);
    switch (month){
    case 12:
    case 1:
    case 2:
        printf("winter\n");
    break;
    case 3:
    case 4:
    case 5:
         printf("spring\n");
    break;
    case 6:
    case 7:
    case 8:
          printf("summer\n");
    break;
    case 9:
    case 10:
    case 11:
          printf("Autumn\n");
    break;
    default:
         printf("invalid number \n");
    break;
    }
    
   return 0;
}

( calculotr)
#include <stdio.h>
#include <conio.h>

int main()
{
   int a,b;
   int option;
   printf("1.additin\n 2.subtract\n 3.muliply\n 4.diviide\n");
   printf(" enter two oprator:");
   scanf("%d %d",&a,&b);
   printf("enter your choice");
   scanf("%d",&option);
   
   switch(option){
       case 1 : printf("Additin of %d and %d is %d",a,b,a+b);
       break;
       case 2 : printf("subtract of %d and %d is %d",a,b,a-b);
       break;
       case 3 : printf("multipky of %d and %d is %d",a,b,a*b);
       break;
       case 4 : printf("divide of %d and %d is %d",a,b,a/b);
       break;
       default:
       printf("invalid operator");
       break;
   }
    return 0;
}
