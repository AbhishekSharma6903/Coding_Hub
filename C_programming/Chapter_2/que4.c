#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, phi;
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    r = sqrt(x * x + y * y); // r = sqrt(x^2 + y^2)
    int a;
    if (x == 0) {
        if (y > 0) {
            phi = a / 2; // 90 degrees or Pi/2 radians
        } else if (y < 0) {
            phi = -a / 2; // -90 degrees or -Pi/2 radians
        } else {
            phi = 0; // Undefined angle when both x and y are zero
        }
    } else {
        phi = atan(y / x); // phi = arctan(y / x)
    }

    phi = phi * 180 / a;

    printf("Polar coordinates (r, phi) in degrees: (%.2f, %.2f degrees)\n", r, phi);

    return 0;
}
