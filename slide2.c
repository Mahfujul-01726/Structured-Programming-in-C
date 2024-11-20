#include <stdio.h>

int main()
{
    float avg, a, b; // Declare variables as float

    a = 1.0; // Assign float values
    b = 16.0;

    // This is the average of two floating numbers
    avg = (a + b) / 2.0;

    printf("Average = %f\n", avg); // Correct the quotation marks and add a newline

    return 0;
}

#include <stdio.h>

#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;

    // Prompt user to enter two numbers
    printf("Enter Numbers\n");

    // Read two integer values from the user
    scanf("%d%d", &num1, &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Output the sum
    printf("Sum = %d\n", sum); // Corrected the quotation marks

    return 0;
}

#include <stdio.h>

int main()
{
    int p1 = 30, p2 = 40;

    // Compare p1 and p2
    if (p1 > p2)
    {
        printf("Person 1 is greater than Person 2\n"); // Corrected the quotes
    }
    else if (p1 < p2)
    {
        printf("Person 2 is greater than Person 1\n"); // Corrected the quotes
    }

    return 0;
}
