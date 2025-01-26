 (arithmetic operator)
#include <stdio.h>

int main()
{
    int A,B;
    int add, sub,mul, mod;
    float divi;
    // Input two number
    printf("enter value of A and B:");
    scanf("%d %d",&A,&B);
    
    //perform arithmetic operator 
    add=A+B;
    sub=A-B;
    mul=A*B;
    divi=(float)A/B;
    mod=A%B;
    
  //  Displyay result
  printf("Addition = %d\n",add);
  printf("Subtract = %d\n",sub);
  printf("Multiply = %d\n",mul);
  printf("Divide   = %.2f\n",divi);
  printf("Module   = %d\n",mod);
  
    return 0;
}

(radius of circle)

#include <stdio.h>
int main(){
    float radius, area;
    // user enter the radius 
    printf("enter radius of the circle:");
    scanf("%f",&radius);
    
    // calculate radius of circle 
    area= 3.14159*radius*radius;
    
    // print the result 
    printf("Area of circle in floating point notation = %.2f\n",area);
    printf("Area of circle in exponential notation = %.2e\n",area);
    
    return 0;
}

(logical operator)

#include<stdio.h>
int main (){
int a=5,b=10,c=0;

// Logical AND (&&) operator 
if (a>0 && b>0){
printf("both a and b are positive number.\n");
}
// logical OR (||) operator 
if(a>0 || c>0){
printf("atleast one a or c is a positive number. \n");
}
// Logical NOT(!) operator 
if(!c)
printf("c is equal to 0.");
return 0;
}

(simple interest)
#include <stdio.h>

int main()
{
    float principal,rate,time,SI;
    printf("Enter principal:");
    scanf("%f",& principal);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    
    printf("Enter time:");
    scanf("%f",&time);
    
    SI=principal*rate*time/100;
    printf("The Simple interest is = %f",SI);
    
    return 0;
}