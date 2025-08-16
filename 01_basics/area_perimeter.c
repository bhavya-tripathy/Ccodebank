#include<stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
// Area and Perimeter Calculator in C
int main() {
    int choice;

    while(1) {
printf("\n=== Area & Perimeter Calculator ===\n");
        printf("1. Rectangle\n");
        printf("2. Square\n");
        printf("3. Circle\n");
        printf("4. Triangle\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }
        else if (choice == 1) {
            float length, width;
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            printf("Area = %.2f\n", length * width);
            printf("Perimeter = %.2f\n", 2 * (length + width));
        }
        else if (choice == 2) {
            float side;
            printf("Enter side of square: ");
            scanf("%f", &side);
            printf("Area = %.2f\n", side * side);
            printf("Perimeter = %.2f\n", 4 * side);
        }
        else if (choice == 3) {
            float radius;
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            printf("Area = %.2f\n", M_PI * radius * radius);
            printf("Perimeter (Circumference) = %.2f\n", 2 * M_PI * radius);
        }
        else if (choice == 4) {
            float a, b, c, s;
            printf("Enter the three sides of triangle: ");
            scanf("%f %f %f", &a, &b, &c);
            s = (a + b + c) / 2; // semi-perimeter
            printf("Area = %.2f\n", sqrt(s * (s - a) * (s - b) * (s - c))); // Heron's formula
            printf("Perimeter = %.2f\n", a + b + c);
        }
        else {
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }
    return 0;
}