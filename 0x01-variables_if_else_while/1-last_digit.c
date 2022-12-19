#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - This program will assign a random number
 * to the variable n each time it is executed.
 * stored in the variable n.
 * Return: Always 0
 */
int main(void)
{
	int n;



	srand(time(0));
	
	n = rand() - RAND_MAX / 2;

	/* YOUR CODE HERE */
	int last_digit = n % 10;

	 printf("Last digit of %d is %d", n, last_digit);

	 if (last_digit > 5)
		  printf(" and is greater than 5\n");
	 else if (last_digit == 0)
		 printf(" and is 0\n");
	 else
		 printf(" and is less than 6 and not 0\n");


	 return (0);
}
