/******************************************************************
Modify Programming Project 6 from Chapter 3 so that the user may
add, subtract, multiply, or divide two fractions (by entering
either +, -, *, or / between the fractions).
*******************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, denom1, denom2, result_num, result_denom;
    char sign;
    int m, n, remainder;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

    switch(sign)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;

    }
    printf("The result is %d/%d\n", result_num, result_denom);

    /*I added a reduction in lowest terms of the fraction, which wasn't included in the instructions for the exercise, just for fun*/

    m = result_num;
    n = result_denom;

    while(n > 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", result_num / m, result_denom / m);

    return 0;
}






