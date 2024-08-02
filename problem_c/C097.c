#include <stdio.h>

int judge(int, int, int);

int main() {
    int n, a, b, r;
    char s[1000][2];

    scanf("%d%d%d", &n, &a, &b);

    for(int i = 1; i <= n; i++) {
        r = judge(i, a, b);
        if(r == 0) {
            s[i][0] = 'N';
        } else if(r == 1) {
            s[i][0] = 'A';
        } else if(r == 2) {
            s[i][0] = 'B';
        } else if(r == 3) {
            s[i][0] = 'A';
            s[i][1] = 'B';
        }
    }
    
    for(int i = 1; i <= n; i++) {
        printf("%c", s[i][0]);
        
        if(s[i][1] == 'B') {
            printf("%c", s[i][1]);
        }

        printf("\n");
    }
    
    return 0;
}

int judge(int i, int a, int b) {
    if(i % a == 0 && i % b == 0) {
        return 3;
    } else if(i % a == 0) {
        return 1;
    } else if(i % b == 0) {
        return 2;
    } else {
        return 0;
    }
}