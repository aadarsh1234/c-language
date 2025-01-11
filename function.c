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
