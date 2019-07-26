#include <stdio.h>

int main()
{
	const int AMOUNT;
	//AMOUNT = 50;
	printf("%d", AMOUNT);
	int price = 0;
	printf("Please input price: ");
	scanf("%d", &price);	/* the 'f' in printf and scanf means format*/
	
	int change = 100 - price;
	printf("Give you back: %d", change); 
	
}
