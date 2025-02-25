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
(4) also insilization 
#include <stdio.h>

int main()
{
    int arr[4][2]={1234,25,3456,64,2345,67 ,7890,98};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
(5) marks or roll no 4 student 
#include <stdio.h>

int main()
{ 
    int r;
    printf("enter nuber of row:");
    scanf("%d",&r);
    int c;
    printf("enter number of column:");
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
(6) add two matric 
#include <stdio.h>

int main()
{ 
    int r;
    printf("enter nuber of row:");
    scanf("%d",&r);
    int c;
    printf("enter number of column:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         scanf("%d",&arr[i][j]);
     }
    }
    int brr[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         scanf("%d",&brr[i][j]);
     }
    }
     int result[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=arr[i][j]+brr[i][j];
            
        }
      
    }
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           printf("%d ",result[i][j]);
       }
       printf("\n");
   }
   

    return 0;
}