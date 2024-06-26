#include <stdio.h>

 int amount;
void convertToCoins(int amount) {
    int first=0,second=0,fifth=0,ten=0,twenty=0;
 int total;
    twenty = amount / 20;
    amount = amount % 20;

 ten = amount / 10;
    amount = amount % 10;

   fifth = amount / 5;
    amount = amount % 5;

    second= amount/2;
    amount=amount % 2;

    first = amount / 1;
    amount =amount%1;

    total=amount;
   

    printf("twenty: %d\n", twenty);
    printf("ten: %d\n", ten);
    printf("fifth: %d\n", fifth);
    printf("second: %d\n", second);
    printf("first: %d\n", first);

}

int main() {
    

     printf("Enter an amount in am: ");
     scanf("%d", &amount);

    convertToCoins(amount);

    return 0;
}
