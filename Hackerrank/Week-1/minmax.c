#include<stdio.h>
void minmax(int arr[5]){
    long long total = 0;
    int min = arr[0];
    int max = arr[0];
    for(int i=0;i<5;i++){
        total+=arr[i];
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("%lld %lld\n", total - max, total - min);
}
    int main(){
        int arr[5];
        for(int i=0;i<5;i++){
            scanf("%d",&arr[i]);
        }
        minmax(arr);
        return 0;
    }
/*input: 1 2 3 4 5
output:
10 14*/
//here max value in array is subtracted from total sum of array to get minimum sum value
//here min value in array is subtracted from total sum of array to get max sum value