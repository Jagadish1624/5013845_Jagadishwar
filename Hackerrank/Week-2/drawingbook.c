#include <stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    int fromfront = p/2;
    int fromback = (n/2) - (p/2);
    if(fromfront<fromback){
        printf("From front: %d",fromfront);
    }
    else{
        printf("From back: %d",fromback);
    }
    return 0;
}