#include <stdio.h>

int main()
{
    float basic, hr, ma, ta, tax, monthly_salary, annual_salary;

    printf("Enter Basic Salary:\n");
    scanf("%f", &basic);

    hr = basic * 0.45;
    ma = basic * 0.10;
    ta = basic * 0.05;
    tax = basic * 0.05;

    monthly_salary = basic + hr + ma + ta - tax;
    annual_salary = 12 * monthly_salary;

    printf("Monthly Salary is = %.2f\n", monthly_salary);
    printf("Annual Salary is = %.2f\n", annual_salary);

    return 0;
}

#include <stdio.h>

int main()
{
    float a, b, c, x, y, z;
    a = 9;
    b = 12;
    c = 3;

    // Correct mathematical operations
    x = a - b / 3 + c * 2 - 1;
    y = a - b / (3 + c) * (2 - 1);
    z = a - (b / (3 + c) * 2) - 1;

    // Corrected printf statements with proper quotes
    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);

    return 0;
}
