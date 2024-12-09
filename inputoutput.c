
#include <stdio.h>
#include <string.h>
int main()
{

    char name[50];
    int age;
    printf("Your Name: ");
    scanf("%s", &name);
    printf("Your Age: ");
    scanf("%d", &age);
    printf("You are %s and your age is %d\n", name, age);


}