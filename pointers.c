#include <stdio.h>

int main()
{ 
    int a=5;
    int* x=&a;
    printf("%d\n",*x);
    printf("%p",x);
    return 0;
}