#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>



/**
 *
 *  * main - Program entry point
 *
 *   *
 *
 *    * Return: EXIT_SUCCESS or EXIT_FAILURE
 *
 *     */

int main(void)

{

		char *ptr;



			printf("Starting break is %p\n", sbrk(0));

				ptr = sbrk(1);

					printf("Break after extension is %p\n", sbrk(0));

						*ptr = 'H';

							printf("Address of our char is %p\n", ptr);

								printf("Value at this address is '%c'\n", *ptr);



									return (EXIT_SUCCESS);

}
