#include <stdio.h>

void rgb_to_cmyk(int red, int green, int blue, float *c, float *m, float *y, float *k) {
    // Step 1: Calculate White
    float white = (float) (red > green ? (red > blue ? red : blue) : (green > blue ? green : blue)) / 255.0;

    // Step 2: Calculate CMY
    if (white != 1) {
        *c = (white - (float)red / 255.0) / white;
        *m = (white - (float)green / 255.0) / white;
        *y = (white - (float)blue / 255.0) / white;
    } else {
        *c = *m = *y = 0;
    }

    // Step 3: Calculate Black
    *k = 1 - white;
}

int main() {
    int red, green, blue;
    float cyan, magenta, yellow, black;

    // Input RGB values
    printf("Enter the RGB values (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);

    // Convert RGB to CMYK
    rgb_to_cmyk(red, green, blue, &cyan, &magenta, &yellow, &black);

    // Output CMYK values
    printf("CMYK: Cyan=%.2f, Magenta=%.2f, Yellow=%.2f, Black=%.2f\n", cyan, magenta, yellow, black);

    return 0;
}

