/*	HelloWorld.c	*/

/*	C   : It is advisable to include "stdio.h" when using printf, etc.
			% gcc HelloWorld.c
	C++ : Include file "stdio.h" is needed, since printf is not defined in C++
		Otherwise: 
			% g++ HelloWorld.c
			==>  implicit declaration of function `int printf(...)'
		Info which Header file is needed:
			% man 3 printf
			% man stdio
*/

#include "stdio.h"

main()
{
 printf(„Hello world \n");
/*	"\n" - new line		*/
}
