#include <stdio.h>

int main()
{ 
    int a=5;
    int* x=&a;
    printf("%d\n",*x);
    printf("%p",x);
    return 0;
}
(2)
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