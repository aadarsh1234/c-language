#include <stdio.h>

int main()
{ 
    int a=5;
    int* x=&a;
    printf("%d\n",*x);
    printf("%p",x);
    return 0;
}
(2) pass by address 
void  swap(int *x,int *y){
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
   return;
}
int main()
{
  int a;
  printf("enter value a " );
  scanf("%d",&a);
  int b;
  printf("enter value b");
  scanf("%d",&b);
  swap(&a,&b);
  printf("the vakue of a is %d\n",a);
  printf("the value of b is %d\n",b);
  
    return 0;
}
(3)
#include <stdio.h>

int main()
{
    int a=25;
    int* x=&a;
    int** y=&x;
    int*** z=&y;
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    return 0;
}