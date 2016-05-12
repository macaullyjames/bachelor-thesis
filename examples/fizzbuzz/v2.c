#include<stdio.h>

void fizzbuzz(int, int);

int main()
{
    fizzbuzz(1, 100);
    return 0;
}

void fizzbuzz(int from, int to) {
    if (from > to) return;

    if (from % 3 == 0) printf("Fizz");
    if (from % 5 == 0) printf("Buzz");
    if (from % 3 != 0 && from % 5 != 0) printf("%d", from);
    printf("\n");

    fizzbuzz(from + 1, to);
}
