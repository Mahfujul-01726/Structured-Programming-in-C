#include <stdio.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("The number is positive.\n");
    }
    else if (num < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 4 == 0)
    {
        printf("%d is an leap year.\n", num);
    }
    else
    {
        printf("%d is an not leap year.\n", num);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int x, y, z, m;

    printf("Enter three scores: ");
    scanf("%d %d %d", &x, &y, &z);

    m = x + y + z;
    if (m > 150)
    {
        printf("The student is passed.\n");
    }
    else
    {
        printf("The student is failed.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int x, y, z, m;

    printf("Enter three scores (minimum 40 each): ");
    scanf("%d %d %d", &x, &y, &z);

    if (x < 40 || y < 40 || z < 40)
    {
        printf("Each score must be at least 40. Please enter valid scores.\n");
    }
    else
    {
        m = x + y + z;

        if (m > 150)
        {
            printf("The student is passed.\n");
        }
        else
        {
            printf("The student is failed.\n");
        }
    }

    return 0;
}
