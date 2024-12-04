#include <stdio.h>

int main()
{

/* Set up the variables, as well as define a few*/
char firstname, lastname;
int number_of_pencils, number_of_notebooks;
float pencils = 2.99;
float notebooks = 3.59;
float lunchbox = 7.99;

/*The information for the first child*/
firstname = 'R';
lastname = 'E';

/*Number of pencils and notebooks*/
number_of_pencils = 7;
number_of_notebooks = 15;


printf("%c\t%c needs %d  pencils, %d notebooks, and 1 lunchbox\n", firstname, lastname, number_of_pencils,
number_of_notebooks);

printf("The total cost is $%.2f\n\n", number_of_pencils*pencils
+ number_of_notebooks*notebooks + lunchbox);

firstname = 'J';
lastname = 'E';

/*Number of pencils and notebooks*/
number_of_pencils = 5;
number_of_notebooks = 7;


printf("%c\t%c needs %d  pencils, %d notebooks, and 1 lunchbox\n", firstname, lastname, number_of_pencils,
number_of_notebooks);

printf("The total cost is $%.2f\n\n", number_of_pencils*pencils
+ number_of_notebooks*notebooks + lunchbox);


}