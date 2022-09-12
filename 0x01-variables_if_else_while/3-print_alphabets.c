#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main - Coding is an art 
  * Description : this program prints alphabet in lowercase
  * and then in uppercase
  * followed by a new line
  * Return: Always 0 (Success)
  */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
