#include <stdio.h>
void lonelyinteger(int arr[],int n){
    int count[101] ={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<101;i++){
        if(count[i]==1)
        printf("%d ",i);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    lonelyinteger(arr,n);
   return 0;
   
}
/* input:
2 5 67 68 69 68 67 5 2
output:
69
*/