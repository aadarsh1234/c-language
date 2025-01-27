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

(celsius)

#include <stdio.h>

int main() {
    int choice;
    float temperature, convert_temp;
    
    printf("1.convert fahrenheit to centigrade\n");
    printf("2.convert centigrade to fahrenheit \n");
    printf("Enter your choice (1 or 2):");
    scanf("%d",& choice);
    
    if(choice==1){
        printf("enter temp in fahrenheit:");
        scanf("%f",&temperature);
        
        convert_temp=(temperature - 32)*5/9;
        printf("temprature in centigrade %.2f°C\n", convert_temp);
    }
    else if(choice==2){
        printf("enter temp in centigrade:");
        scanf("%f",&temperature);
        
        convert_temp=(temperature *9/5)+32;
        printf("temprature in fahrenheit %.2f°F\n", convert_temp);
    }
    else{
        printf("invalid Choice! please enter 1 or 2 ");
    }
    return 0;
}

(relational opretors)
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two integer");
    scanf("%d %d",&a,&b);
    
    printf("%d==%d:%d(Equal to)\n",a,b,a==b);
    printf("%d!=%d:%d(Not equal to)\n",a,b,a!=b);
    printf("%d > %d:%d(Greater than)\n",a,b,a>b);
    printf("%d < %d:%d(less then)\n",a,b,a<b);
    printf("%d >=%d:%d(Greater equal\n)",a,b,a>=b);
    printf("%d <=%d:%d(less equal)",a,b,a<=b);

    return 0;
}

(student result)

#include <stdio.h>

int main() {
    int marks[6];
    int pass=1;
    printf("enter marks of six student\n");
    for(int i=0;i<6;i++){
        printf("subject %d:",i+1);
        scanf("%d",&marks[i]);
        
    if(marks[i]<33){
        pass=0;
        } 
           }
     
    if(pass){
        printf("Result:pass\n");
    }
    else{
        printf("Results:fail\n");
    }
    return 0;
}