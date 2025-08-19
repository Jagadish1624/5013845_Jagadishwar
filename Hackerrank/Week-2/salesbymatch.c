#include<stdio.h>
int sales(int n,int arr[]){
    int freq[101]={0};
    int pairs = 0;
    for (int i=0;i<n; i++) {
        freq[arr[i]]++;
    if(freq[arr[i]]%2==0){
        pairs++;
    }
}
    return pairs;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",sales(n,arr));
    return 0;
    
}