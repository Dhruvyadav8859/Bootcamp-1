// WAP to perform unit conversion (e.g., cm to m, kg to g).

#include <stdio.h>

int main() {
    int choice;
    float value, converted;

    printf("Unit Conversion Menu:\n");
    printf("1. cm to m\n");
    printf("2. m to cm\n");
    printf("3. kg to g\n");
    printf("4. g to kg\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1: converted = value / 100; printf("Converted: %.2f m\n", converted); break;
        case 2: converted = value * 100; printf("Converted: %.2f cm\n", converted); break;
        case 3: converted = value * 1000; printf("Converted: %.2f g\n", converted); break;
        case 4: converted = value / 1000; printf("Converted: %.2f kg\n", converted); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
