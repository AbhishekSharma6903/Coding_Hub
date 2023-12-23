#include <stdio.h>

int main() {
    int width = 1189; // Width of A0
    int height = 841;  // Height of A0

    printf("A0: %d mm x %d mm\n", width, height); // Print A0

    for (int i = 1; i <= 8; ++i) {
        int newWidth, newHeight;
        
        // Calculate dimensions for An from An-1
        if (width > height) {
            newWidth = width;
            newHeight = width * 594 / 841; // Calculate the new height for A(n) using the ratio 841:594
        } else {
            newWidth = height * 841 / 594; // Calculate the new width for A(n) using the ratio 841:594
            newHeight = height;
        }

        // Print dimensions for An
        printf("A%d: %d mm x %d mm\n", i, newWidth, newHeight);

        // Update dimensions for the next iteration
        width = newWidth;
        height = newHeight;
    }

    return 0;
}
