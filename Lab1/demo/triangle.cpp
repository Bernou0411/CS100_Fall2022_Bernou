#include "../demo/triangle.hpp"

void Triangle::set_base(int b) {
    this->base = b;
}

int Triangle::area() {
    return (this->base * this->base) * 0.866;
}
