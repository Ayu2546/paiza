#include <stdio.h>

int fighting(int, int);

int main() {
    int n, l;
    int enemies[100000];

    scanf("%d%d", &n, &l);

    for(int i = 0; i < n; i++) {
        scanf("%d", &enemies[i]);
    }

    for(int i = 0; i < n; i++) {
        l = fighting(l, enemies[i]);
    }

    printf("%d\n", l);

    return 0;
}

int fighting(int l, int e) {
    if(l < e) {
        return l / 2;
    } else if(l > e) {
        return l + (e / 2);
    } else {
        return l;
    }

    return 0;
}