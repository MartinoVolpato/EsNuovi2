#include <stdio.h>

void scambia(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main(void) {
    printf("x: ");
    int x;
    scanf("%d",&x);
    printf("y: ");
    int y;
    scanf("%d",&y);
    printf("Prima dello scambio: x=%d, y=%d\n", x, y);
    scambia(&x, &y);
    printf("Dopo lo scambio: x=%d, y=%d\n", x, y);
    return 0;
}