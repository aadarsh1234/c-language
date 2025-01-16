#include <stdio.h>
// funtion decleration
    int add(int a,int b);
    int sub(int a,int b);
    int mul(int a,int b);
    float divi(int a,int b);
    
    // funtion defination
    int main(){
        int choice,num1,num2;
        printf("--Menu--\n");
        printf("1.Add:\n");
        printf("2.Su:\n");
        printf("3.mul:\n");
        printf("4.divi:\n");
        printf("5.exit:\n");
        printf("enter your choice");
        scanf("%d",&choice);
        
        if(choice>=1 && choice<=4){
            printf("enter two number");
            scanf("%d %d",&num1,&num2);
        }
        switch(choice){
            case 1:
            printf("Result:%d\n",add(num1,num2));
            break;
            case 2:
            printf("Result :%d\n",sub(num1,num2));
            break;
            case 3:
            printf("Result:%d\n",mul(num1,num2));
            break;
            case 4:
            if(num2==0){
                printf("divide zero is not allowed");
            }
            else{
                printf("Result:%2.f\n",divi(num1,num2));
            }
            break;
            case 5:
            printf("exit good by");
            break;
            default:
            printf("invalid number");
        }
        }
        int add(int a,int b){
            return a+b;
        }
        int sub(int a,int b){
            return a-b;
        }
        int mul(int a,int b){
            return a*b;
        }
            float divi(int a,int b){
            return a/b;
        }
            
            
        
        

    
    
    
