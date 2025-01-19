// printf 1 to n....... increasing /deacrsing (D 

#include<stdio.h>
    void increasing(int n){
       if(n==0)return;
        printf("%d\n",n);
       increasing(n-1);
        return;
    }
    int main(){
        int n;
        printf("enter the number");
        scanf("%d",&n);
        increasing(n);
        return 0;
        
    }
// printf 1 to n.......321123

#include<stdio.h>
    void increasing(int n){
       if(n==0)return;
        printf("%d\n",n);
        increasing(n-1);
        printf("%d\n",n);
    
       
        return;
    }
    int main(){
        int n;
        printf("enter the number");
        scanf("%d",&n);
        increasing(n);
        return 0;
        
    }

// print sum from 1 to n (parameterised) 4=10
#include <stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main (){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
// print sum return type 5=15
#include <stdio.h>
int sum(int n){
    if(n==1||n==0)
     return 1;
     int recsum=n+sum(n-1);
     return recsum;
}

int main()
{
    int n;
    printf(" enter the value ");
    scanf("%d",&n);
    int add=sum(n);
    printf("the sum is %d",add);
    return 0;
}

