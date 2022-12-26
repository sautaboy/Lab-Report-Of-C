// Enter integer hour value and Display the Greeting:
// hour Format is 24
#include <stdio.h>
int main()
{
    int hourValue;
    printf("Enter a Hour Value\n");
    scanf("%d", &hourValue);
    if (hourValue < 12)
    {
        printf("Hello, Goodd Morning!");
    }
    else
    {
        if (hourValue >= 12 && hourValue < 16)
        {
            printf("Hello, Good Afternoon!");
        }
        else
        {
            if (hourValue >= 16 && hourValue < 22)
            {
                printf("Hello, Good Evening!");
            }
            else
            {
                if (hourValue > 22 && hourValue <= 4)
                {
                    printf("Good Night!");
                }
                else
                {
                    printf("Out Of Universe Time");
                }
            }
        }
    }
    return 0;
}