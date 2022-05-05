#include <stdio.h>
int factorial(int number)
{
    int factorial = 1;
    for (int i = number; i > 1; i--) // 5! = 5 * 4 * 3 * 2 * 1
    {
        factorial = factorial * i;
    }
    return factorial;
    // void outputfactorial(int input)
    // {
    //     printf("the factorial of %d is %d\n",input,factorial(input));
    // }
}
int main()
{
    int number = 5;
    int fact = factorial(number);
    printf("factorial of %d is %d\n", number, fact);
    printf("factorial of 3 is %d\n", factorial(3));
    printf("the factorial of 3(3)is %d",factorial(factorial(3)));
    return 0;
}