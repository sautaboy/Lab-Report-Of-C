// Find Your Divison By Entering Your Percentage Value
#include <stdio.h>
int main()
{
    int yourPercentageValue;
    printf("Enter Your Percentage Value\n");
    scanf("%d", &yourPercentageValue);
    if (yourPercentageValue >= 80)
    {
        printf("You Got Distinction Position");
    }
    else
    {
        if (yourPercentageValue >= 60 && yourPercentageValue < 80)
        {
            printf("You Got First Division");
        }
        else
        {
            if (yourPercentageValue >= 45 && yourPercentageValue < 60)
            {
                printf("You Got Second Divison");
            }
            else
            {
                if (yourPercentageValue >= 32 && yourPercentageValue < 45)
                {
                    printf("You Got Third Divison");
                }
                else
                {
                    printf("Failed!");
                }
            }
        }
    }
    return 0;
}