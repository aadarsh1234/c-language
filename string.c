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