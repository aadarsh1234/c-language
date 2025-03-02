
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