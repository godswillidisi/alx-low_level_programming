#include <stdio.h>

/*
 * main - Entry point
 * Description: sizes of different types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;
printf("Size of a char is %lu byte(s)\n", sizeof(acharacter));
printf("Size of an int is %lu byte(s)\n", sizeof(ainteger));
printf("Size of a long int is %lu byte(s)\n", sizeof(along));
printf("Size of a long long int is %lu byte(s)\n", sizeof(alonglong));
printf("Size of a float is %lu byte(s)\n", sizeof(afloat));

return (0);
}
