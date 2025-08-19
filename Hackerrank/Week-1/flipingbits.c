#include<stdio.h>
unsigned int flipping(unsigned int n){
    return ~n;//4294967295U -n;//return n ^ 0xFFFFFFFF;
}
int main(){
int t;
scanf("%d",&t);
while (t--) {
    unsigned int n;
    scanf("%d",&n);
    printf("%u\n",flipping(n));

}    
return 0;
}
/*input :
4
3
2
1
0

ouput:
4294967292
4294967293
4294967294
4294967295
*/