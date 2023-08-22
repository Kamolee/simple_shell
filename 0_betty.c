#include <unistd.h>
#include <stdio.h>

/**
 * calcsum - calculate the sum of two numbers.
 * @num1: number entered.
 * @num2: number entered.
 *
 * Description - calutate sum of two numbers
 * Return: 0 if correct
 */

int calcsum(int num1, int num2)
{
int sum = 0;
sum = num1 + num2;
printf("the sum is:%d", sum);
return (0);
}
