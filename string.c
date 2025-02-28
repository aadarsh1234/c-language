(1) print hello
#include <stdio.h>

int main()
{
     char arr[]="Hello";
    int i=0;
    while(i<5){
    printf("%c ",arr[i]);
    i++;
    }

    return 0;
}

(2)
#include <stdio.h>

int main()
{
     char arr[]="Hello Aadarsh how are you";
    int i=0;
    while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
    }

    return 0;
}

(3) size of string
#include <stdio.h>

int main()
{
    char str[40];
    puts("enter string");
    scanf("%[^\n]s",str);
    puts("the size of string is:");
    int k=0;
    int size=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d",size);
    return 0;
}
(4) reverse of string
#include <stdio.h>

int main()
{
    char str[40];
    printf("enter string");
    scanf("%[^\n]s",str);
    int k=0;
    int  size=0;
    while(str[k]!='\0'){
    size++;
    k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reverse is");
    puts(str);
    
     return 0;
}
(5) charcter array pointer
#include <stdio.h>

int main()
{
    char str[]="college wallah";
    char* ptr=str;
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}
