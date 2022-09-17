#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "rand.h"
#include "fact.h"
#include "fib.h"

char buffer[30];
unsigned int  RetVal = 0;

int main()
{
    for(;;)
    {
        write(1, "Femto_Shell> ", 13);
        RetVal = read(0, buffer, 30);
	
	if(memcmp("rand", buffer, 4) == 0)
	{
	    RetVal = my_rand();
	    printf("%i\n",RetVal);
	    //write(1, &RetVal, 4);
	}
	else if(memcmp("fact", buffer, 4) == 0)
        {
	    write(1, "Enter a Number : ", 17);
	    //read(0, &RetVal, 4);
	    fflush(stdin);
	    RetVal = 0;
	    scanf("%i",&RetVal);
	    RetVal = my_fact(RetVal);
	    printf("The Factorial is : %i\n", RetVal);
	    //write(1, &RetVal, 4);
	}
	else if(memcmp("fib", buffer, 3) == 0)
	{
	    write(1, "Enter a Number : ", 17);
            //read(0, &RetVal, 4);
	    fflush(stdin);
            RetVal = 0;
	    scanf("%i", &RetVal);
            my_fib(RetVal);
	}
	else if(memcmp("exit", buffer, 4) == 0)
	{
	    write(1, "GoodBye :)\n", 11);
	    break;
	}
	else
	{
	    write(1, "You Said: ", 10);
	    write(1, buffer, RetVal);
	}
    }

    return 0;
}
