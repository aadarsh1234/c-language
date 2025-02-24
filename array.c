     
#include <stdio.h>

int main()
{
    int rollno[5];
    int i;
    printf("enter the value of array");
    for( int i=0;i<=4;i++){
        scanf("%d",&rollno[i]);
        
    }
    for(i=0;i<=4;i++){
    printf("%d\n",rollno[i]);
    }
    return 0;
}

(4) reverse array

#include <stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
    printf(" enter the element number %d\n",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=4;i>0;i--){
    printf("%d",arr[i]);
}
    return 0;
}




(2) print12345

#include <stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
    printf(" \nenter the element number %d",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d",arr[i]);
}
    return 0;
}

(3) print 2
#include <stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<=4;i++){
    printf(" \nenter the element number %d",i+1);
    scanf("%d",&arr[i]);
    }
    
    printf("%d",arr[2]);

    return 0;
}

(4)
product of all elemet

#include <stdio.h>

int main()
{
    int n,i;
   int   product =1;
    printf("enter the value of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d element \n",n );
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<n;i++){
        product *=arr[i];
        
    }
    printf("the product of all element is %d\n", product);


(5)
maximum number

#include <stdio.h>

int main()
{
    int arr[7]={3,4,5,6,7,8,9};
    int max=arr[0];
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);

    return 0;
}

(6)

#include <stdio.h>

int main()
{
    int arr[3];
    int i;
    printf("enter the value of array\n");
    for(int i=0;i<=2;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=2;i>=0;i--){
        printf("the reverse value is:%d\n",arr[i]);
    
}
    return 0;
}

(7) sum 234=9

#include <stdio.h>

int main()
{
    int a[3];
    int sum=0;
    printf("enter the value of 3 array");
    for(int i=0;i<=2;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=2;i++){
        sum+=a[i];
    }
        printf("the sum is %d ",sum);
    

    return 0;
}

(8)
difference sumodd or sumeven indices
#include<stdio.h>
int main(){
int arr[7];
int sumeven=0;
int sumodd=0;
int i=;
for(int i=0;i<=6;i++){
printf("enter the array %d:",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<=6;i++){
if(i%2==0){
sumeven +=arr[i];
}
else{
sumodd +=arr[i];
}
}
printf("the sum is %d",sumeven-sumodd);
return 0;
}

(9)odd no.second multiple 
even indexed array value by 10

#include<stdio.h>
int main(){
int arr[7];
for(int i=0;i<=6;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<=6;i++){
if(i%2!=0) arr[i]*=2;
else arr[i]+=10;
}
for(int i=0;i<=6;i++){
printf("%d",arr[i]);
}
return 0;
}

(10)
count number of element in given array greater than a given number x

#include <stdio.h>

int main()
{
    int arr[7];
    int x=4;
    int count=0;
    int i;
    for(int i=0;i<=6;i++){
    printf("enter the array %d:",i+1);
    scanf("%d",&arr[i]);
    if(arr[i]>x){
        count++;
    }
    }
    printf("%d", count);

    return 0;
}

(11)
count the no. of triplet whose sum is equal to the given x

#include <stdio.h>

int main()
{
    int arr[8];
    int totaltriplate=0;
    int  x=12;
  int i;
  for(int i =0;i<=7;i++){
      printf("enter the array %d:",i+1);
      scanf("%d",&arr[i]);}
  
   for(int i=0;i<=7;i++){
       for(int j=i+1;j<=7;j++){
           for(int k=j+1;k<=7;k++){
               if(arr[i]+arr[j]+arr[k]==x){
                   totaltriplate++;
                   printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
               }
           }
       }
   }
   printf("%d", totaltriplate);
   
    return 0;
}

(12)
find the second largest element int the given array

#include <stdio.h>
//#include <limit.h>
int main()
{
    int arr[7];
    int max= arr[0];
    int smax=arr[0];
  int i;
 for(int i =0;i<=6;i++){
     printf("enter the array %d:",i+1);
      scanf("%d",&arr[i]);}
  
   for(int i=0;i<=6;i++){
       if(max<arr[i]){
           smax=max;
           max=arr[i];
       }
       else if(smax<arr[i] && max!=arr[i]){
           smax=arr[i];
       }
   }
        printf("%d", smax);
   
    return 0;
}
(13)
write a program to copy the content of one array another in the reverse order

#include <stdio.h>

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
        for(int i=0;i<=6;i++){
            brr[i]=arr[6-i];
        }
       for(int i=0;i<=6;i++){
           printf("%d ",brr[i]);
       }
       
    
    return 0;
}


(14) reverse part

#include <stdio.h>
 void reverse(int arr[],int si,int ei){
     for(int i=si,j=ei;i<j;i++,j--){
         int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
     }
     return;
 }
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=2;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=6;i++)
    printf("%d",arr[i]);

    return 0;
}

Search number in the array
#include <stdio.h>
#include<stdbool.h>

int main()
{
    int arr[7]={1,2,3,4,5,7};
     bool flag=false;
     int x=3;
     int idx=-1;
     for(int i=0;i<=6;i++){
      if(arr[i]==x){
          flag=true;
          idx=i;
          break;
      }
     }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the arrayy and idx is %d",x,idx);
    }
    return 0;
}
