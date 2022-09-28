#include <stdio.h>

int main(){
	
	int eggprice = 2; 
	int meatprice = 10;
	int milkprice = 4; 
	int biscuitprice = 5;
	int eggamount, meatamount, milkamount, biscuitamount;
	
	printf("Insert the amount of eggs you want : ");
	scanf("%d", &eggamount );
	printf("Insert the amount of meat you want : ");
	scanf("%d", &meatamount);
	printf("Insert the amount of milk you want : ");
	scanf("%d", &milkamount);
	printf("Insert the amount of biscuit you want: ");
	scanf("%d", &biscuitamount);
	printf("The price will be a grand total of : ");
	printf("%d\n", eggamount*eggprice+meatamount*meatprice+milkamount*milkprice+biscuitamount*biscuitprice);
}
