#include<stdio.h>
int main(){
    int position;
    scanf("%d",&position);
    do{
        printf("%d ",position);
        position++;
    }
    while (position <=100);
    return 0;
}