#include <stdio.h>

#include <stdlib.h>

#include <time.h>



int main()

{

	    int n;



	        /* initialize random seed: */

	        srand (time(NULL));



		    /* generate secret number between 0 and RAND_MAX: */

		    n = rand() % RAND_MAX;



		        printf("The number is %d ", n);



			    if (n > 0) {

				            printf("is positive\n");

					        } else if (n == 0) {

							        printf("is zero\n");

								    } else {

									            printf("is negative\n");

										        }



			        return 0;

}
