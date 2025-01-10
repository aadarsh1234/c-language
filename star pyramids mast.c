*******
*** ***
**.  **
*.    *
#include <stdio.h>

int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
       for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp+=2;
        nst--;
        printf("\n");
       
    }

    return 0;
}

1234567
123 567
12.  67
1.    7
include <stdio.h>

int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
       for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
       
    }

    return 0;
}
ABCDEFG
ABC ABC
AB.  BC
A.    C
#include <stdio.h>

int main()
{
    int n;
    printf("Hello World");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        char ch=(char)(i+64);
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            char ch=(char)(j+64);
            printf("%c",ch);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
       for(int j=1;j<=nst;j++){
           char ch=(char)(j+64);
            printf("%c",ch);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
       
    }

    return 0;
}
