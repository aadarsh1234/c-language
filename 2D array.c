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

(3) also insilization
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
(7) find sum n×m
#include <stdio.h>

int main()
{ 
    int r;
    printf("enter nuber of row:");
    scanf("%d",&r);
    int c;
    printf("enter number of column:");
    scanf("%d",&c);
    printf("enter all the elemnt:");
    int arr[r][c];
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
         scanf("%d",&arr[i][j]);
     }
     
    }
    int sum=0;
    for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
        sum+=arr[i][j];
     }
     
    }
    printf("%d",sum);

    return 0;
}
(8) find max element in the array
#include <stdio.h>
#include<stdbool.h>

int main()
{    int max = -2111;
int idx=-1;
    int arr[2][2]={1,2,2,3};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                idx=true;
            }
        }
    }
    printf("%d is the maximum value and its idx%d",max,idx);
    return 0;
}
(9) find max zero one in index 
{1,0,1,1},{1,0,0,1},{1,1,1,1}

#include <stdio.h>

int main()
{
    int arr[3][4]= {{1,0,0,1},{0,1,0,1},{1,1,1,1}};
    int maxcount=0;
    int maxidx=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
        printf("\n");
    }
    printf("%d",maxidx);

(10) transpose of matrix

#include <stdio.h>

int main()
{
    int r;
    printf("enter row:");
    scanf("%d",&r);
    int c;
    printf("enter column:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]= arr[j][i];
        }
        printf("\n");
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

(11) swap of transpose

#include <stdio.h>

int main()
{
    int n;
    printf("enter the row/column");
    scanf("%d",&n);
    printf("enter all element:");
    int arr[n][n];
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         scanf("%d",&arr[i][j]);
     }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

(12) rotate a transpose of matrix

#include <stdio.h>

int main()
{
    int n;
    printf("enter row/column:");
    scanf("%d",&n);
    printf("enter all elment:");
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose ofa matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int temp= arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
  
(12) multiply of matrix 
#include <stdio.h>

int main()
{
    int m;
    printf("enter row of 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("enter column of 1st matrix:");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("enter row of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("enter column of 2nd matrix:");
    scanf("%d",&q);
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
        printf("the matrix cannot multipy");
    }
    else{
      int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
           }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
    
}
    

    return 0;
}
 
