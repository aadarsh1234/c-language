
(1) output of this

#include <stdio.h>

int main()
{
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    printf("enter attack of pikachu:");
    scanf("%d",&pikachu.attack);
   // pikachu.attack=60;
    pikachu.speed=68;
    pikachu.hp=34;
    pikachu.tier='A';
      
      
    struct pokemon chirazard;
    chirazard.attack=56;
    chirazard.speed=58;
    chirazard.hp=89;
    chirazard.tier='B';
    
    
    struct pokemon mewtwo;
    mewtwo.attack=69;
    mewtwo.hp=39;
    mewtwo.speed=79;
    mewtwo.tier=97;
     
     
     printf("%d",pikachu.attack);
    return 0;
}
(2) book detail

#include <stdio.h>
#include<string.h>

int main()
{
    struct book{
     char name[50];
     float price ;
     int nofpage;
    } math,pyh,chem;
   
    math.nofpage=67;
    math.price=78;
    strcpy(math.name,"mathmatics");
     
     pyh.nofpage=64;
    pyh.price=98;
    strcpy(pyh.name,"physics");
    
    chem.nofpage=47;
    chem.price=93;
    strcpy(chem.name,"chemistry");
    
   printf("%d\n",math.nofpage);
   printf("%f\n",math.price);
   printf("%s\n",math.name);
    
   printf("%d\n",pyh.nofpage);
   printf("%f\n",pyh.price);
   printf("%s\n",pyh.name);
   
   printf("%d\n",chem.nofpage);
   printf("%f\n",chem.price);
   printf("%s",chem.name);
 


    return 0;
}

(3) person detail

#include <stdio.h>
#include<string.h>

int main()
{
    struct person{
     char name[50];
     int salary;
     int age;
    } a,b,c;
   
    a.salary=4000;
    a.age=18;
    strcpy(a.name,"Aadarsh");
     
    b.salary=8000;
    b.age=32;
    strcpy(b.name,"vijay");

   printf("%s\n",a.name);
   printf("%d\n",b.age);

    return 0;
}

(4) typedef pointer
#include <stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=9;
    pointer a=&x,b=&y;
    printf("%p\n",&a);
    printf("%p\n",&b);

    return 0;
}

(5) array of structure 

#include <stdio.h>
#include<string.h>

int main()
{
    typedef  struct pokemon {
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;
     pokemon arr[3];
     arr[0].hp=56;
     arr[0].speed=78;
     arr[0].attack=70;
     arr[0].tier='A';
     strcpy(arr[0].name,"charizard");
     
     arr[1].hp=46;
     arr[1].speed=68;
     arr[1].attack=90;
     arr[1].tier='B';
     strcpy(arr[1].name,"pikachu");
     
     arr[2].hp=46;
     arr[2].speed=68;
     arr[2].attack=90;
     arr[2].tier='B';
     strcpy(arr[2].name,"Mewtwo");
     
     for(int i=0;i<3;i++){
         printf("%s\n",arr[i].name);
         printf("%d\n",arr[i].speed);
         printf("%d\n",arr[i].hp);
         printf("%c\n",arr[i].tier);
         printf("%d\n",arr[i].attack);
     }
    return 0;
}