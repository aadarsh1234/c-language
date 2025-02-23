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

 
  // this raised to the power this 
    #include<stdio.h>
    int power(int a,int b){
    if(b==0)return 1;
    return a*power(a,b-1);
    }
    int main(){
        int a,b;
        printf("enter a and b:");
        scanf("%d %d",&a,&b);
        int p=power(a,b);
        printf("%d is raised to power of %d is %d",a,b,p);
    
    return 0;
    }



  //fibonacci  term using recusion:
#include <stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("enter fibonacci term:");
    scanf("%d",&n);
    printf("fibonacci term %d",fibo(n));

    return 0;
}

// stair path 

#include <stdio.h>
int stair(int n){
    if(n<=3) return n;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int way=stair(n);
    printf("%d",way);

    return 0;
}

//powerlogrethmic

#include <stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    int x=powerlog(a,b/2);
    if(b%2==0)
    return x*x;
    else 
    return a*x*x;
}
int main()
{
    int a,b;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d is raised to power of %d is %d ",a,b,p);

    return 0;
}

//maze path 

#include<stdio.h>
int maze(int n,int m){
    int rightway=0;
    int downway=0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightway+=maze(n,m-1);
    }
    if(m==1){
        downway=maze(n-1,m);
    }
    if(n>1&&m>1){
        rightway+=maze(n,m-1);
        downway+=maze(n-1,m);
    }
    return rightway+downway;
}
int main(){
    int n,m;
    printf("enter row:");
    scanf("%d",&n);
    printf("enter colum");
    scanf("%d",&m);
    printf("%d",maze(n,m));
    return 0;
}

maze path 

#include <stdio.h>
 int maze(int cr,int cc,int er,int ec){
    int rightway=0;
    int downway=0;
    if(cr==er && cc==cc) return 1;
    if(cr==er){ //rightway
          rightway+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){//downway
    downway+=maze(cr+1,cc,er,ec);
    }
    if(cr<=er && cc<=ec){
        rightway=+maze(cr,cc+1,er,ec);
        downway=+maze(cr+1,cc,er,ec);
    }
    int totalway=rightway+downway;
    return totalway;
 }
int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    int m;
    printf("enter column");
    scanf("%d",&m);
    int totalway=maze(1,1,n,m);
    printf("%d",totalway);

    return 0;
}

preInpost

#include <stdio.h>
 void preinpost(int n){
     if(n==0)return;
     printf("pre %d\n",n);
     preinpost(n-1);
     printf("in %d\n",n);
     preinpost(n-1);
     printf("post %d\n",n);
     
 }
int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    preinpost(n);

    return 0;
}

zigzag 111 
211121112

#include <stdio.h>
 void zigzag(int n){
     if(n==0)return;
     printf("%d",n);
     zigzag(n-1);
     printf("%d",n);
     zigzag(n-1);
     printf("%d",n);
 }
int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    zigzag(n);

    return 0;
}

towel honai

#include <stdio.h>
void tower(int n,char s,char h,char d){
   if(n==0) return ;
   tower(n-1,s,d,h);
   printf("%c -> %c\n",s,d);
   tower(n-1,h,s,d);
   return;
}
int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    tower(n,'A','B','C');

    return 0;
}