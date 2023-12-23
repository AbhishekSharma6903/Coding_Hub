#include <stdio.h>
#include <math.h>

int main() {
    float s1, s2, s3, semiperimeter, area;
    printf("Enter length of side 1: ");
    scanf("%f", &s1);
    printf("Enter length of side 2: ");
    scanf("%f", &s2);
    printf("Enter length of side 3: ");
    scanf("%f", &s3);
    semiperimeter = (s1 + s2 + s3) / 2;
    area = sqrt(semiperimeter * (semiperimeter - s1) * (semiperimeter - s2) * (semiperimeter - s3));
    printf("Area of the triangle: %.2f\n", area);

    return 0;
}
