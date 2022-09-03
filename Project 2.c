/*
//SNAKE, WATER, GUN  project


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you, char computer)
{ //return 1 if you win, -1 if you lose and 0 if draw

    //condition for draw
    if(you == computer)
    {
        return 0;
    }

    //Non-draw condition
    //cases convered
    //sg
    //gs
    //ws
    //sw
    //gw
    //wg
    if(you=='s'&&computer=='w')
    {
        return 1;
    }
    else if(you=='w'&& computer=='s')
    {
        return -1;
    }
    if(you=='s'&&computer=='g')
    {
        return -1;
    }
    else if(you=='g'&&computer=='s')
    {
        return 1;
    }
    if(you=='g'&&computer=='w')
    {
        return -1;
    }
    else if(you=='w'&&computer=='g')
    {
        return 1;
    }
}
int main()
{
    char you , computer;
    srand(time(0));
    int n = rand()%100 + 1;
    if(n<33){
    computer = 's';
    }
    else if(n>33 && n<66){
        computer = 'w';
    }
    else
    {
        computer ='g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result = snakeWaterGun(you,computer);
    printf("You choose %c and computer choose %c .\n",you,computer);
    if(result==0){
        printf("Game Draw\nBetter luck next time\n");
    }
    else if(result==1){
        printf("you Win\n You are best player\n");
    }
    else{
        printf("You Lose\n Try Again\n");
    }
    return 0;
}





//rock, paper,scissor project
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

Non draw condition
rp
//pr
rs
//sr
ps
//sp

int RPS(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='r' && comp=='p')
    {
        return -1;
    }
    else if(you=='p'&& comp=='r')
    {
        return 1;
    }
    if(you=='r' && comp=='s')
    {
        return 1;
    }
    else if(you =='s' && comp =='r')
    {
        return -1;
    }
    if(you=='p' && comp=='s')
    {
        return -1;
    }
    else if(you=='s' && comp=='p')
    {
        return 1;
    }

}
int main()
{
    char you,comp;
    srand(time(0));
    int n=rand()%100 +1;
    if(n<33)
    {
        comp = 'r';//Rock
    }
    else if(n>33 && n<66)
    {
        comp = 'p'; //Paper
    }
    else
    {
        comp = 's'; //Scissor
    }
    printf("Enter 'r' for rock, 'p'for Paper & 's' for Scissor \n");
    scanf("%c",&you);
    int result = RPS(you,comp);
    printf("You Choose %c & Computer Choose %c.\n",you,comp);
    if(result==0)
    {
        printf("Game Draw ! \n May be Try Again.");
    }
    else if(result==1)
    {
        printf("You Win !\n Your Luck is With you.");
    }
    else
    {
        printf("You Lose!\n Better Luck Next Time.");
    }
    return 0;
}

