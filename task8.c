#include <stdio.h>
#include <math.h>

int main() {
    int choice, age;
    float weight, height, result;
    int gender;

    printf("Health Calculator Menu:\n");
    printf("1. BMI Calculation\n");
    printf("2. BMR Calculation\n");
    printf("3. Ideal Weight (Devine Formula)\n");
    printf("4. Heart Rate Zone\n");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (meters): ");
            scanf("%f", &height);

            if (weight > 0 && height > 0) {
                result = weight / pow(height, 2);
                printf("BMI = %.2f\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 2:
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age: ");
            scanf("%d", &age);
            printf("Enter gender (1 = Male, 2 = Female): ");
            scanf("%d", &gender);

            if (weight > 0 && height > 0 && age > 0) {
                if (gender == 1) {
                    result = 88.36 + (13.4 * weight) + (4.8 * height) - (5.7 * age);
                } else if (gender == 2) {
                    result = 447.6 + (9.2 * weight) + (3.1 * height) - (4.3 * age);
                } else {
                    printf("Invalid gender\n");
                    break;
                }
                printf("BMR = %.2f\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 3:
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter gender (1 = Male, 2 = Female): ");
            scanf("%d", &gender);

            if (height > 0) {
                if (gender == 1) {
                    result = 50 + 0.9 * fabs(height - 152);
                } else if (gender == 2) {
                    result = 45.5 + 0.9 * fabs(height - 152);
                } else {
                    printf("Invalid gender\n");
                    break;
                }
                printf("Ideal Weight = %.2f kg\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        case 4:
            printf("Enter age: ");
            scanf("%d", &age);

            if (age > 0) {
                result = 0.7 * (220 - age);
                printf("Heart Rate Zone = %.2f bpm\n", result);
            } else {
                printf("Invalid input\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}