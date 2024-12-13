#include <stdio.h>


int main()
{
int money ;
char name[50];
float price = 10.5;
int quantity;


printf("Enter your name: ");
scanf("%s", &name);
printf("Enter your money: ");
scanf("%d", &money);
printf("Hello %s, you have %d money\n", name, money);
printf("The price of the food is %.2f\n", price);
printf("Enter the quantity of the food: ");
scanf("%d", &quantity);
printf("You have %d quantity\n", quantity);

printf("The total price is %.2f\n", price * quantity);

return 0;
}
