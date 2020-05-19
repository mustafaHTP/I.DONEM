/*
 * odev4.4.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 */



#include <stdio.h>
#include <string.h>
#define SIZE 15

int main()
{
	char word[ SIZE ] = "KULLUK";
	int size = strlen(word);
	int palindrome = 0;
	
	
	
	for( int i = 0; i <= size-1; i++){
		
		
		
		if ( word [ i ] == word [ size-1-i ] )
		     palindrome++;                       
		                           
		else {
			 printf("The word is not palindrome");
			 break;
			
			}
		 
		if ( palindrome == size/2 ){	
		    printf("The word is palindrome");
		    break;        
		                           }
	
	
                              }
	
	
	
	
	
	
	
	
	return 0;
}

