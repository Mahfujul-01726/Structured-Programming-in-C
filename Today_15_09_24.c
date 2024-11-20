#include <stdio.h>
#include <conio.h>

int main()
{
    float basic, hr, ma, ta, tax, monthly_salary, annual_salary;

    printf("Enter Basic Salary\n");
    scanf("%f", &basic);
    hr = basic * .45;
    ma = basic * .10;
    ta = basic * .05;
    tax = basic * .05;
    monthly_salary = (basic + hr + ma + ta) - tax;
    annual_salary = monthly_salary * 12;

    printf("Monthly Salary is= %f", monthly_salary);
    printf("\nAnnual Salary is= %f", annual_salary);

    return 0;
}
