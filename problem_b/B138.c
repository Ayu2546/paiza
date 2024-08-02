#include <stdio.h>

int main() {
    int h, w;
    int count = 0;
    char s[100][100];

    scanf("%d%d", &h, &w);

    for(int i = 0; i < h; i++) {
        scanf("%s", s[i]);
    }

    for(int i = 0; i < h; i++) {
        if(i == i - 2) {
            break;
        }

        for(int j = 0; j < w; j++) {
            if(j == w - 2) {
                break;
            }

            if(s[i][j] == '#') {
                if(s[i][j + 1] == '#' && s[i][j + 2] == '#' 
                   && s[i + 1][j] == '#' && s[i + 1][j + 1] == '.' && s[i + 1][j + 2] == '#'
                   && s[i + 2][j] == '#' && s[i + 2][j + 1] == '#' && s[i + 2][j + 2] == '#') {
                    count++;
                }
            }
        }  
    }

    printf("%d\n", count);

    return 0;
} 