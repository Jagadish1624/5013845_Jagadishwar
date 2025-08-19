#include <stdio.h>
#include <stdlib.h>

int compare(const void * a,const void* b){
    return (*(int*)a - *(int*)b);
}
void zigzag(int arr[],int n){
   qsort(arr, n, sizeof(int),compare);
    int mid = (n-1)/2;
    int temp = arr[mid];
    arr[mid] = arr[n-1];
    arr[n-1] = temp;
    
    int left = mid+1;
    int right = n-2;
    while(left<=right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        if(i>0) printf(" ");
        printf("%d",arr[i]);
    }
}
int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        }
    zigzag(arr,n);
    }
    return 0;   
}
