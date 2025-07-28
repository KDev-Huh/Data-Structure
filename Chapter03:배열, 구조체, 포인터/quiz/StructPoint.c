#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double get_distance(Point p1, Point p2) {
    double xValue = pow(p1.x - p2.x, 2);
    double yValue = pow(p1.y - p2.y, 2);

    return sqrt(xValue + yValue);
}

int main() {
    Point p1 = {1, 2};
    Point p2 = {9, 8};

    printf("%f", get_distance(p1, p2));

    return 0;
}