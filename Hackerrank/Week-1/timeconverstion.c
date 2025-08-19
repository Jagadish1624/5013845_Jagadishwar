#include <stdio.h>
#include <string.h>

void timeconverstion(char *s){
    int hour = (s[0] -'0')*10 +(s[1] - '0');
    char meridian[3] = {s[8],s[9],'\0'};
    if(strcmp(meridian, "AM")==0){
        if(hour ==12) hour=0;
    }else{
        if(hour!=12) hour+=12;
    }
    printf("%02d",hour);
    for(int i=2;i<8;i++)
        putchar(s[i]);
        printf("\n");
    
}
    int main(){
        char s[11];
        scanf("%s",s);
        timeconverstion(s);
        return 0;
        
    }
    
/*input:
07:05:45PM

output:
19:05:45
*/