#include "func.h"

int main() {
    struct comp_num a, b, c;
    printf("Enter a:\n");
    scanf("%d%d", &a.real, &a.image);
    printf("Enter b:\n");
    scanf("%d%d", &b.real, &b.image);

    c = Add(a, b);
    printf("\na + b: %d %d\n", c.real, c.image);
    c = Sub(a, b);
    printf("a - b: %d %d\n", c.real, c.image);
    c = Mul(a, b);
    printf("a * b: %d %d\n", c.real, c.image);
    c = Div(a, b);
    printf("a / b: %d %d\n", c.real, c.image);
    return 0;
}
