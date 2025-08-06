#include <stdio.h>
#include <ctype.h>
#include <string.h>

int pangrams(char *s){
    int aplha[26]={0};
    for(int i=0;s[i] != '\0';i++){
        if(isalpha(s[i])){
            int index = tolower(s[i]) -'a';
            aplha[index]++;
        }      
    }
    for(int i=0;i<26;i++){
        if(aplha[i]==0){
            return 0;
        }  
    }
     return 1;
}
int main(){
    char s[1000];
    fgets(s, sizeof(s), stdin);
    if (pangrams(s))
    printf("pangram");
    else
        printf("not pangram");
    
    return 0;
}
/*input:
We promptly judged antique ivory buckles for the next prize
output:
pangram*/