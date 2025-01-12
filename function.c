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

   
