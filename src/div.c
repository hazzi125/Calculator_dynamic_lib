#include "func.h"

struct comp_num Div(struct comp_num a, struct comp_num b) {
    struct comp_num c;
    c.real = (a.real * b.real + a.image * b.image) / (b.real * b.real + b.image * b.image);
    c.image = (a.image * b.real - a.real * b.image) / (b.real * b.real + b.image * b.image);
    return c;
}
