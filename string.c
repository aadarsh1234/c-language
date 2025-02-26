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