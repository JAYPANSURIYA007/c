#include <stdio.h>
int main()
{

    int unit;
    float amount ,final,charge;

    printf("enter the unit : ");
    scanf("%d", &unit);

    if (0 < unit <= 100)
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
        amount = 230 + ((unit - 300)*1.00);

    }
    charge=amount*0.18;
    final=charge+amount;
    printf("your bill is %f:", final);
 
}