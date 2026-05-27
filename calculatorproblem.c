# Calculator-problem
In this problem several operations which are generally performed by a scientific calculator are list and on executing the program the mathematical operations would be performed. 
#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n--- Scientific Calculator ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Square Root\n");
    printf("7. Sine\n");
    printf("8. Cosine\n");
    printf("9. Tangent\n");
    printf("10. Logarithm (base e)\n");
    printf("11. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    double a, b, result;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    result = a / b;
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                printf("Result: %.2lf\n", result);
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    result = sqrt(a);
                else {
                    printf("Error: Negative input for square root!\n");
                    continue;
                }
                printf("Result: %.2lf\n", result);
                break;
            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                result = sin(a * M_PI / 180);
                printf("Result: %.4lf\n", result);
                break;
            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                result = cos(a * M_PI / 180);
                printf("Result: %.4lf\n", result);
                break;
            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                result = tan(a * M_PI / 180);
                printf("Result: %.4lf\n", result);
                break;
            case 10:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    result = log(a);
                else {
                    printf("Error: Logarithm undefined for non-positive numbers!\n");
                    continue;
                }
                printf("Result: %.4lf\n", result);
                break;
            case 11:
                printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 11);

    return 0;
}
