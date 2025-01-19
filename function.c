combination 

#include <stdio.h>
int factorial (int x){
    int fact=1;
    for(int i=2;i<=x;i++){
    fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int r;
    printf("enter r :");
    scanf("%d",&r);
    int ncr=factorial(n)/(factorial(r)*factorial (n-r));
    printf("%d",ncr);

    return 0;
}
(2)
#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("the sum is %d", sum);

return 0;
}

(3)
#include <stdio.h>
void america(){
printf("you are in America\n");
return;
}
void Australia(){
printf("you are in Australia\n");
america();
return;
}
int main(){
  america();
  printf("\n");
return 0;
}
(3)
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1

#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
       fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int nsp=6;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp--;
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
          printf("%d ",icj);
        }
        printf("\n");
    }

(4)
include <stdio.h>
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
 float divide(int a,int b){
     if(a!=0)
   return  (float) a/b;
   else 
   printf("zero");
}
int main(){
    int num1,num2;
    printf("enter two integer:");
    scanf("%d %d",&num1,&num2);
    printf("sum %d\n",add(num1,num2));
    printf("sub %d\n",subtract(num1,num2));
    printf("product %d\n",product(num1,num2));
    printf("divide %.2f\n",divide(num1,num2));
}

(5) square 

#include <stdio.h>

int square(int num)
{
    return (num * num);
}
int main()
{
    int num;
    int  n;
    printf("Input any number for square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %d\n",num, n); 
    return 0;
}

(5)
#include <stdio.h>
// declaration of funtion
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divide(int a,int b);
// definition of add
int add(int a,int b){
    //int num1;
   // printf("enter the value of a and b:");
   // num1=a+b;
   // printf("addition is=%d\n",a+b);
   return a+b;
}
// definition of sub
int sub(int a,int b){
   //int num2;
  //  printf("enter the value of a and b:");
   // num2=a-b;
  //  printf("sub is=%d\n",a-b);
  return a-b;
}
// definition of mul
int mul(int a,int b){
   // int num3;
 //   printf("enter the value of a and b:");
  //  num3=a*b;
  //  printf("mul is=%d\n",a*b);
  return a*b;
}
//definition of divide
int divide (int a,int b){
  //  int num4;
  //  printf("enter the value of a and b:");
   // num4=a/b;
  //  printf("div is=%d\n",a/b);
  return a/b;
}
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf(" add = %d\n",add(a,b));
   // add(10,5);
 //   sub(10,5);
  //  mul(10,5);
  //  divide(10,5);
   
    return 0;
}

(6) series factorial sum n!/n

#include <stdio.h>
//calculate factorial of number 
int factorial (int n){
     int fact=1;
     for (int i=1;i<=n;i++){
         fact*=i;
     }
     return fact;
}
 int sum(int n){
     int  sum=0;
     for(int i=1;i<=n;i++){
         sum+=factorial(i)/i;
         n;
     }
     return sum;
 }
 int main(){
     int n;
     printf("enter value n");
     scanf("%d",&n);
     printf("the sum of series is=%d\n",sum(n));
     return 0;
 }
(6) calculate area of circle
#include <stdio.h>
    float calculatearea(float radius){
        return 3.14159*radius*radius;
    }
int main()
{
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    printf("the area is %2.f",calculatearea(radius));

    return 0;
}
(7) power
    #include<stdio.h>
    int power(int base,int raised){
        int power=1;
        for(int i=1;i<=raised;i++){
            power*=base;
        }
    }
    int main(){
        int a,b;
        printf("enter the value");
        scanf("%d %d",&a,&b);
        printf("%d is raised to the power %d is= %d\n",a,b,power(a,b));
        
    }
(8)call by reference 
#include <stdio.h>
void swap(int *a, int *b){
    int temp;
     temp=*a;
    *a=*b;
    *b=temp;
}
int main (){
    int x,y;
    printf("enter the value of first number: ");
    scanf("%d",&x);
    printf("enter the value of second number:");
    scanf("%d",&y);
    printf("Before swaping x=%d,y=%d\n",x,y);
   
     swap(&x,&y);
    printf("After swaping x=%d,y=%d\n",x,y);
    return 0;
}
(9) power 
#include<stdio.h>
int power(int a,int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
        }
        return x;
}
int main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("%d is raised to power of %d is %d",a,b,p);

return 0;
}

    

   
