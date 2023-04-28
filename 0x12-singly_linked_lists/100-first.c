#include <stdio.h>
/**
 * before_main - function that prints a
 * message before the main function is executed
 *
 * Description: This function is marked with
 * the __attribute__ ((constructor)) specifier,
 * which causes it to be called automatically
 * before the main function is executed. The
 * function prints a message to the console
 * to indicate that it is being called.
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
