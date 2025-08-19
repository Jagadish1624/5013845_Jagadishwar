#include<stdio.h>
int main(){
    int position;
    scanf("%d",&position);
    switch(position){
        case 1:
        printf("Won the gold");
        break;
        case 2:
        printf("Won the silver");
        break;
        default:
        printf("Won nothing ,better luck next time");
    }
    return 0;
}