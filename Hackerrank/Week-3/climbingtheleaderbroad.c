#include<stdio.h>

int removeduplicates(int arr[],int n){
    int i,j=0;
    for(i=0;i<n;i++){
        if(i==0|| arr[i]!=arr[i-1]){
            arr[j++]=arr[i];
        }
    }
    return j;
}
int main(){
    int n,m;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    int newsize=removeduplicates(score,n);
    scanf("%d",&m);
    int player[m];
    for(int i=0;i<m;i++){
        scanf("%d",&player[i]);
    }
    int index=newsize-1;
    for(int i=0;i<m;i++){
        int playerscore =player[i];
        while (index>=0 && playerscore>=score[index]) {
            index--;
        
        }
        printf("%d\n",index + 2);
    }
    return 0;
}