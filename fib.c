
#include <stdio.h>


void my_fib(unsigned int number)
{
        
    unsigned int last_result    = 0;
    unsigned int current_result = 1;
    
    printf("The Sequence is :  0");
    printf(",  %i", current_result);

    while(number>1)
    {
        current_result += last_result;
	last_result     = current_result - last_result;

        printf(",  %i", current_result);
	number--;
    }
    printf("\n");
}
