#include <stdio.h>

/**
 * main -Entry
 *
 * Description: Print numbers 0 to 9 on one line
 * return: 0
 */
int main(void)
{
	int number;

	 number = 0;
	 while (number < 10)
	 {
		  putchar(number + '0');
		  number++;
	 }
	  printf("\n");
	  return (0);
}
