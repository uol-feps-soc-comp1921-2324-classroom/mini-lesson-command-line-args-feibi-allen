#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char num1 = atoi(argv[1]), num2 = atoi(argv[2]);

    // Prompt the user for input
    //printf("Enter the first number: ");
    //scanf("%d", &num1);

    //printf("Enter the second number: ");
    //scanf("%d", &num2);

    // Verify Input
    if (argc != 3 || (num1==0 && !isdigit(*argv[1])) || (num2 == 0 && !isdigit(*argv[2])))
        {
            printf("Usage: %s <int1> <int2>\n", argv[0]);
            return 0;
        }
    

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
