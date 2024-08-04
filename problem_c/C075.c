#include <stdio.h>

int main() {
    int n, m;
    int point = 0;
    int fee[100];

    scanf("%d%d", &n, &m);

    for(int i = 0; i < m; i++) {
        scanf("%d", &fee[i]);
    }

    for(int i = 0; i < m; i++) {
        if(point > fee[i]) {
            point -= fee[i];
        } else {
            n -= fee[i];
            point += fee[i] / 10;
        }

        printf("%d %d\n", n, point);
    }

    return 0;
}