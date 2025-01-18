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
