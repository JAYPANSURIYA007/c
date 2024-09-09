#include <stdio.h>

int main()
{
    int unit;
    float amount;

    printf("Enter the unit: ");
    scanf("%d", &unit);

    if (0 < unit && unit <= 100)
    {
        amount = unit * 0.60;
    }
    else if (unit <= 200)
    {
        amount = 60 + ((unit - 100) * 0.80);
    }
    else if (unit <= 300)
    {
        amount = 140 + ((unit - 200) * 0.90);
    }
    else
    {
        amount = 230 + ((unit - 300) * 1.00);
    }

    printf("Your bill is %.2f\n", amount);
    return 0;
}