#include<stdio.h>
    void plusminus(int arr[],int n){
        int positive =0;
        int negative =0;
        int zero = 0;
        for(int i=0;i<n;i++){
            if(arr[i] > 0) positive++;
            else if(arr[i]<0) negative++;
            else zero++;
        }
            printf("%.6f\n",(float)positive/n);
            printf("%.6f\n",(float)negative/n);
            printf("%.6f\n",(float)zero/n);   
        
    }
        int main(){
            int n;
            scanf("%d",&n);
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
        plusminus( arr, n);
        return 0;
    }
/*input 
6
-4 3 -9 0 4 1

Output:
0.500000
0.333333
0.166667
*/