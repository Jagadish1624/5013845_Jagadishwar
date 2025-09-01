#include <stdio.h>
#include <string.h>

int fre[26];

int main() {
    char S[100001];
    scanf("%s", S);

    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        fre[S[i] - 'a']++;
    }

    int freq[26], size = 0;
    for (int i = 0; i < 26; i++) {
        if (fre[i] > 0) {
            freq[size++] = fre[i];
        }
    }

    int min = freq[0], max = freq[0];
    for (int i = 1; i < size; i++) {
        if (freq[i] < min) min = freq[i];
        if (freq[i] > max) max = freq[i];
    }

    int minCount = 0, maxCount = 0;
    for (int i = 0; i < size; i++) {
        if (freq[i] == min) minCount++;
        else if (freq[i] == max) maxCount++;
    }

    if (min == max) {
        printf("YES\n");
    } else if (min == 1 && minCount == 1 && maxCount + minCount == size) {
        printf("YES\n");  
    } else if (max - min == 1 && maxCount == 1) {
        printf("YES\n");  
    } else {
        printf("NO\n");
    }

    return 0;
}
