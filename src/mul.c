#include "func.h"

struct comp_num Mul(struct comp_num a, struct comp_num b) {
    struct comp_num c;
    c.real = a.real * b.real - a.image * b.image;
    c.image = a.real * b.image + b.real * a.image;
    return c;
}
