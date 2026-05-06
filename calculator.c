#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char op;
    double a, b, result;

    printf("Simple Calculator\n");
    printf("Enter expression (e.g. 3 + 4): ");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        fprintf(stderr, "Error: invalid input format.\n");
        return EXIT_FAILURE;
    }

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
        case 'x':
        case 'X':
            result = a * b;
            break;
        case '/':
            if (b == 0.0) {
                fprintf(stderr, "Error: division by zero.\n");
                return EXIT_FAILURE;
            }
            result = a / b;
            break;
        default:
            fprintf(stderr, "Error: unknown operator '%c'.\n", op);
            return EXIT_FAILURE;
    }

    printf("%g %c %g = %g\n", a, op, b, result);
    return EXIT_SUCCESS;
}
