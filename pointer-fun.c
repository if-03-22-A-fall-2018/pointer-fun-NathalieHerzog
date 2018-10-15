/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			pointer-fun
 * Author:		    Herzog Nathalie
 * ----------------------------------------------------------
 * Description:
 * getting more familiar with pointers
 * ----------------------------------------------------------
*/

#include <stdio.h>

void print_integers(int int_value, int* int_pointer)
{
  printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer);
}

void change_integers(int int_value, int* int_pointer)
{
	//initialization to of the variables to change the initial ones
  *int_pointer = 44;
  int_value = 33;
}

int main(int argc, char const *argv[]) {
	//first initialization of the variables
  int int_value = 11;
  //the pointer is initialized with the variable it's supposed to be pointing to
  int* int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);
  //nothing will change -> it's called by value
  //to change the value -> call by reference
  return 0;
}