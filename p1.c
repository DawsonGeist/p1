#include <stdio.h>

main ()
{
	static char base_digits[16] = 
	  {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
  //r,index,carry
	int base,index,next_digit = 0;
  //out
	int converted_number[64];
	
  //d
	int number_to_convert;

	/*
	*Prompting the user for input through standard command data streams
	*/

	printf("Please enter values for d and r respectively\n");fflush(stdout);
	
	//d
	printf("d:");fflush(stdout);
	scanf("%d",&number_to_convert);
	//r
	printf("r:");fflush(stdout);
	scanf("%d",&base);
	

	//convert
	do
	  {

	    converted_number[index]= number_to_convert % base;
	    ++index;
	    number_to_convert = number_to_convert / base;

	  }while(number_to_convert != 0);

	//displaying results in reverse order

	printf("Converted number = ");

	for(--index; index >=0; --index)
	  {
	    next_digit = converted_number[index];
	    printf("%c", base_digits[next_digit]);fflush(stdout);
	  }
	
	printf("\n");fflush(stdout);
				
}
