#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001], result[1001];
    int i;

    scanf("%1000s", s);
    scanf("%1000s", t);

    for (i = 0; s[i] != '\0'; i++) {
        result[i] = (s[i] == t[i]) ? '0' : '1';
    }

    result[i] = '\0';

    printf("%s", result);

    return 0;
}
