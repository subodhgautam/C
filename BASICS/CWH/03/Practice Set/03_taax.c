// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%

#include <stdio.h>
int main()
{
    float salary;
    float taxed;
    printf("====================================================================================================================\n");
    printf("Calculate income tax paid by an employee to the government as per the slabs\n");
    printf("====================================================================================================================\n");

    printf("Enter your income:");
    scanf("%f", &salary);
    printf("Your income is:%f\n", salary);

    if (salary > 250000 && salary <= 500000)
    {
        taxed = (5 / 100.0) * salary;
        salary = salary - taxed;

        printf("Your income tax is:%f\n", taxed);
        printf("Your taxed income is:%f\n", salary);
    }


    else if (salary > 500000 && salary <= 1000000)
    {
        taxed = (20 / 100.0) * salary;
        salary = salary - taxed;

        printf("Your income tax is:%f\n", taxed);
        printf("Your taxed income is:%f\n", salary);
    }



    else if (salary > 1000000)
    {
        taxed = (30 / 100.0) * salary;
        salary = salary - taxed;

        printf("Your income tax is:%f\n", taxed);
        printf("Your taxed income is:%f\n", salary);
    }

    return 0;
}