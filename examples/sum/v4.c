#include<stdio.h>

static int getfour();

int main() {
    int four = getfour();
    printf("%d\n", four);
    return 0;
}

static inline int getfour() {
    int k = 1 + 1 + 1 + 1;
    return k;
}
