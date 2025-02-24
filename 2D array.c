 (1) printf matrix output
#include <stdio.h>

int main()
{
    int arr[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
(2) user input

#include <stdio.h>

int main()
{
    int r;
    printf("enter the number row :");
    scanf("%d",&r);
    int c;
    printf("enter the number column:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
         for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

(3) alse insilization
#include <stdio.h>

int main()
{
    int arr[4][2]={{1234,25},{3456,64},{2345,67},{4567,98}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}