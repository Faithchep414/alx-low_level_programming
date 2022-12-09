#include <stdio.h>
/**
 * main  -Entry point
 *
 * Description: Print lowercase alphabet excluding e and q
 *
 * Return: 0
 * */
int main(void)
{
	 char c;
	  c = 'a';

	  while (c <= 'z')
	  {
		  if (c != 'q' && c != 'e')
                  {
			  putchar(c);
		  }
		    c++;
	  }
	  putchar('\n');
	    return (0);
}
