int main()
{
   int n;
   printf("enter value");
   scanf("%d",&n);
   int a=3;
   for(int i=1;i<=n;i++){
       printf("%d ",a);
       a=a*4;
   }

    return 0;
}



int main()
{
   int n;
   printf("enter value");
   scanf("%d",&n);
   int a=1;
   for(int i=1;i<=n;i++){
       printf("%d",a);
       a=a*2;
   }

    return 0;
}




include <stdio.h>

int main()
{ int n;
printf("enter the number");
scanf("%d",&n);
    for (int i=1;i<=3*n+1;i=i+3)
    {
    printf("%d ",i);
    }

    return 0;
}



#include <stdio.h>

int main()
{ int n;
printf("enter the number");
scanf("%d",&n);
    for (int i=1;i<=2*n-1;i=i+2)
    {
    printf("%d ",i);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;
        printf("the %dth term of fabonacci is %d\n",i,sum);
    }
    
   #include <stdio.h>

int main()
{
int n;
printf("enter the num");
scanf("%d",&n);
 float a=100;
for(int i=1;i<=n;i++)
{
    printf("%f ",a);
    a=a/2;
}
return 0;
}


#include <stdio.h>

int main()
{
int a=100;
     for(int i=1;a>0;i++)
     {
         printf("%d ",a);
         a=a-3;
     }
    return 0;
}



#include <stdio.h>

int main() {
    int n, factorial = 1;
  
    for (int i = 1; i <= 5; i++) {
        factorial *= i;
    
    printf(" %d\n", factorial);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i =1;i<=10;i++){
        printf("%d x %d =%d\n",n,i,n*i);
    }
    

    return 0;
}

#include <stdio.h>

int main() {
  
    for (int i = 1; i <= 100; i++) 
    {
        if(i%2==0 )
        printf("%d ", i);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int num;
    printf("enter the nu");
    scanf ("%d",&num);
    for(int i=num; i>=1;i--){
        printf("%d ",i);
    }
}


#include <stdio.h>

int main()
{
   for(int i=0;i<=4;i++)
   {
       for(int j=i;j<=(2*i);j++)
   {
       printf("*");
   }
   printf("\n");
}
    return 0;
}

#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        // Print spaces
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("enter the row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    printf("enter the row");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=a;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
    return 0;
}

include <stdio.h>

int main()
{
    int n;
    printf("enter the row");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
        for(int i=1; i<=n;i++){
            printf("%d",i);
        }
       
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int n;
    printf("enter row");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
       int a=1;
       for(int j=1;j<=i;j++){
           int d=a+64;
           char ch=(char)d;
           printf("%c ",ch);
           a++;
       }
       printf("\n");
   }

    return 0;
