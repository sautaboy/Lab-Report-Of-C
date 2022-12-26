// Write two number at once and check 1St number is even or Odd and Check If 2nd Number is Divisible By 10n or Not
#include <stdio.h>
int main()
{
    int firstNumber, secondNumber;
    printf("Enter a First Number And Second Number \n");
    scanf("%d %d", &firstNumber, &secondNumber);
    if (firstNumber % 2 == 0)
    {
        printf(" First Number is Even\n");
    }
    else
    {
        printf(" First Number is Odd\n");
    }
    if (secondNumber % 10 == 0)
    {
        printf("Second Number is Divisible By 10\n");
    }
    else
    {
        printf("Second Number Cannot Be Divisible by 10\n");
    }
    return 0;
}
