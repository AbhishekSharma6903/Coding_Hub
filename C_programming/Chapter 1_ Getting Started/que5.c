#include <stdio.h>

int main() {
    float length, breadth, radius, areaRectangle, perimeterRectangle, areaCircle, circumferenceCircle;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    areaRectangle = length * breadth;
    perimeterRectangle = 2 * (length + breadth);
    areaCircle = 3.14159 * radius * radius; // Pi * r^2 for area
    circumferenceCircle = 2 * 3.14159 * radius; // 2 * Pi * r for circumference
    printf("Area of the rectangle: %.2f\n", areaRectangle);
    printf("Perimeter of the rectangle: %.2f\n", perimeterRectangle);
    printf("Area of the circle: %.2f\n", areaCircle);
    printf("Circumference of the circle: %.2f\n", circumferenceCircle);

    return 0;
}
