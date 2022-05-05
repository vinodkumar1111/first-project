#include <stdio.h>
int checkarmstrong(int n1)
{
    int ld, sum = 0, num;
    num = n1;
    while (num != 0)
    {
        ld = num % 10;            // finds the last digit number
        sum = sum + ld * ld * ld; // calulate the cube of last digit and add it to sum
        num = num / 10;
    }
    return (n1 == sum);
}

int main()
{
    int n1 = 120;
    if (checkarmstrong(n1))
        printf("%d is a armstrong number", n1);
    else
        printf("%d is not a armstrong number", n1);
    return 0;
}
