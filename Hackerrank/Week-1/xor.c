#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s1[1000],s2[1000],result[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlen(s1)!=strlen(s2)){
        printf("two strings are not equal");
        return 1;
    }
    for(int i=0;s1[i] != '\0';i++){
        result[i]=(s1[i]==s2[i])? '0':'1';
        
        
    }
    result[strlen(s1)] ='\0';
    printf("%s",result);
    return 0;
}