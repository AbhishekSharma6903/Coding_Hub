#include <stdio.h>

int main() {
    float distanceKm, distanceMeters, distanceFeet, distanceInches, distanceCm;
    scanf("%f", &distanceKm);
    distanceMeters = distanceKm * 1000; // 1 kilometer = 1000 meters
    distanceCm = distanceKm * 100000;   // 1 kilometer = 100000 centimeters
    distanceFeet = distanceKm * 3280.84; // 1 kilometer = 3280.84 feet
    distanceInches = distanceKm * 39370.1; // 1 kilometer = 39370.1 inches
    printf("Distance in meters: %.2f\n", distanceMeters);
    printf("Distance in feet: %.2f\n", distanceFeet);
    printf("Distance in inches: %.2f\n", distanceInches);
    printf("Distance in centimeters: %.2f\n", distanceCm);

    return 0;
}
