/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int x1 =10;
    char x2;

    int *ptr;
    ptr = (int *) 10;
    printf("%d\n",ptr);
    printf("%d\n",x1);



    return 0;
}*/
#include <stdio.h>

int main() {
    int arr[3] = {100, 200, 300};
    int *ptr = arr;

    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);  // arr[0]
    ptr++;
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);  // arr[1]
    ptr++;
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);  // arr[2]

    return 0;
}
