
unsigned int my_fact(unsigned int number)
{
    

    if(0 == number)   
	return 1;
   
    return (number * (my_fact(number - 1)));
}
