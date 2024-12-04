#include  <stdio.h> /*input output incluadition program*/


int main() /*Main Fuction*/
{

float num1, num2, num3;

do
{
    printf("Enter a number: ");
    
}while(scanf("%f\n", &num1) !=1);

do
{
    printf("Enter a number: ");
   
}while(scanf("%f\n", &num2) !=1);

do
{
    printf("Enter a number: ");
 
}while(scanf("%f\n", &num3) !=1);


  float total = num1 + num2 + num3;
    printf("Total:\t%f\n\a", total);


}



