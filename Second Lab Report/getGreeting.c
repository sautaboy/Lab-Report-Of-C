// Enter integer hour value and Display the Greeting:
// hour Format is 24
#include <stdio.h>
int main()
{
    int hourValue;
    printf("Enter a Hour Value\n");
    scanf("%d", &hourValue);
    if (hourValue<12)
    {
        printf("Good Morning");
    }
    else
    {
        if (hourValue >= 12 && hourValue <= 16)
        {
            printf("Good Afternoon");
        }
        else
        {
            if (hourValue > 16 && hourValue <= 20)
            {
                printf("Good Evening");
            }
            else
            {
                if (hourValue > 20 && hourValue < 24)
                {
                    printf("Good Night");
                }
                else
                {
                    if (hourValue == 24)
                    {
                        printf("Good Morning");
                    }
                    else
                    {
                        printf("Out Of Gmt Time");
                    }
                }
            }
        }
    }
    return 0;
}
