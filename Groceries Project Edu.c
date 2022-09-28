//We start the statement using the classic #include <stdio.h> and int main(){} and such
#include <stdio.h>

int main(){
	
	//This portion of the code has a function where all of the variables are noted down. Variables with determined set values are marked with = (number)
	//The integers that have yet to be set an amount would be placed in line 12 in this case. 
	int eggprice = 2; 
	int meatprice = 10;
	int milkprice = 4; 
	int biscuitprice = 5;
	int eggamount, meatamount, milkamount, biscuitamount;
	
	//This section of the code is the part where it displays the options and the user inputs their values. 
	printf("Insert the amount of eggs you want : "); 
	scanf("%d", &eggamount ); //The & sign here is very important as it becomes a pointer for the variable eggamount and acts as a direction to the command. 
	printf("Insert the amount of meat you want : ");
	scanf("%d", &meatamount);
	printf("Insert the amount of milk you want : ");
	scanf("%d", &milkamount);
	printf("Insert the amount of biscuit you want: ");
	scanf("%d", &biscuitamount);
	printf("The price will be a grand total of : ");
	printf("%d\n", eggamount*eggprice+meatamount*meatprice+milkamount*milkprice+biscuitamount*biscuitprice); // The \n is used for the equation so that it could count it
}

//You have reached to the end of my simple code, hopefully this is insightful and interesting enough
// I know this is very simple and is not too impressive, but I keep this as my milestone as it is
// my frist program that I wrote and test run. 