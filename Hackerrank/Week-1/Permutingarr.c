#include<stdio.h>
void sortdesc(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                            }
        }
    }
}
void sortasec(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[1000],b[1000];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        sortasec(b,n);
        sortdesc(a,n);
        int possible =1;
        for(int i=0;i<n;i++){
            if(a[i]+b[i]<k){ possible=0;
            break;
            }
        }
        if(possible==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}