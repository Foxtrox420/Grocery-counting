#include <stdio.h>

int main(){

int eggprice = 2;
int meatprice = 10;
int milkprice = 4; 
int biscuitprice = 5;
int eggamount, meatamount, milkamount, biscuitamount; 

printf("Insert the amount of groceries you want to buy in the order of egg,meat,milk,biscuit");
scanf("%d,%d,%d,%d", &eggamount, &meatamount, &milkamount, &biscuitamount);
printf("Your price is :");
printf("%d\n", eggamount*eggprice+meatamount*meatprice+milkamount*milkprice+biscuitamount*biscuitprice);

}