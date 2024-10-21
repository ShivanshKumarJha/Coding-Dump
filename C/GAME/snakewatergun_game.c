#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWatergun(char you,char comp){
    if(you==comp){
        return 0;
    } 
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }
}
int main(){
    char you,com;
    int number;
    printf("Enter 's' for snake,'w' for water,'g' for gun\n");
    scanf("%c",&you);
    srand(time(0));
    number=rand()%100+1;
    if(number<33){
        com='s';
    }
    else if(number>=33 && number<66){
        com='w';
    }
    else{
        com='g';
    }
    printf("You chose %c and computer chose %c\n",you,com);
    int result=snakeWatergun(you,com);
    if(result==0){
        printf("Game Draw!\n");
    }
    else if(result==1){
        printf("You Win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    return 0;
}