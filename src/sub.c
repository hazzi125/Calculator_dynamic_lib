#include "func.h"

struct comp_num Sub(struct comp_num a, struct comp_num b) {
    struct comp_num c;
    c.real = a.real - b.real;
    c.image = a.image - b.image;
    return c;
}
