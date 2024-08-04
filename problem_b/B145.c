#include <stdio.h>

#define N 21

int main() {
    int m, n, tmp;
    int count = 0;
    int card[21][21];
    int flag[21][21];

    scanf("%d%d", &n, &m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &card[i][j]);
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            flag[i][j] = 0;
        }
    }

    flag[(n / 2)][(n / 2)] = 1;

    for(int i = 0; i < m; i++) {
        scanf("%d", &tmp);

        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(card[j][k] == tmp) {
                    flag[j][k] = 1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 && j == 0) {
                for(int k = 0; k < n; k++) {
                    if(flag[i][k] != 1) {
                        break;
                    }

                    if(k == n - 1) {
                        count++;
                    }
                }

                for(int k = 0; k < n; k++) {
                    if(flag[k][j] != 1) {
                        break;
                    }

                    if(k == n - 1) {
                        count++;
                    }
                }

                for(int k = 0; k < n; k++) {
                    if(flag[k][k] != 1) {
                        break;
                    }

                    if(k == n - 1) {
                        count++;
                    }
                }
            } if(i != 0 && j == 0) {
                for(int k = 0; k < n; k++) {
                    if(flag[i][k] != 1) {
                        break;
                    }

                    if(k == n - 1) {
                        count++;
                    }
                }
            } if(j != 0 && i == 0) {
                for(int k = 0; k < n; k++) {
                    if(flag[k][j] != 1) {
                        break;
                    }

                    if(k == n - 1) {
                        count++;
                    }
                }
            } if(i == n - 1 && j == 0) {
                for(int k = 0; k < n; k++) {
                    if(flag[i - k][k] != 1) {
                        break;
                    }

                    if(k == n - 1) {
                        count++;
                    }
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}