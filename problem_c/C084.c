#include <stdio.h>

int main() {
    int i = 0;
    int count = 0;
    char s[100];
    char r[3][102];

    scanf("%s", s);

    while(s[i] != '\0') {
        count++;
        i++;
    }

    for(int j = 0; j < count + 2; j++) {
        if(j == 0 || j == count + 1) {
            r[0][j] = r[1][j] = r[2][j] = '+';
        } else {
            r[0][j] = r[2][j] = '+';
            r[1][j] = s[j - 1];
        }
    }
    
    for(int j = 0; j < count + 2; j++) {
        printf("%c", r[0][j]);
    }

    printf("\n");

    for(int j = 0; j < count + 2; j++) {
        printf("%c", r[1][j]);
    }

    printf("\n");

    for(int j = 0; j < count + 2; j++) {
        printf("%c", r[2][j]);
    }

    printf("\n");

    return 0;
 }