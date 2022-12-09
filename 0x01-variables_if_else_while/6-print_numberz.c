#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: Print numbers 0 to 9 on one line
 * Return: 0
 */
int main(void)
{
	 int number;

	  number = 0;
	  while (number <= 9)
	  {
		  putchar('0' + number);
		   number++;
	  }
	   putchar('\n');
	    return (0);
}
