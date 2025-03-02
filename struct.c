
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