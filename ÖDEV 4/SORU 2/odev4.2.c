/*
 * odev4.2.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 */


#include <stdio.h>
#define SIZE 15


int main()
{
	
	int arr [ SIZE ] = { 2, 6, 25, 456, 211, 965, 121, 22, 14, 65, 78, 12, 36, 47, 64 };
	int oddn[15],evenn[15];
	int co = 0, cn = 0;
	
	for ( int i = 0; i <= SIZE-1; i++ ){
		
		if( arr[ i ] % 2 == 0 ){
			evenn [ cn ] = arr [ i ];
			cn++;			
			
			}
	  
	  else {
		  
		    oddn [ co ] = arr [ i ];
		    co++;  		  
		  
		   }  
		
		}
	
	printf("Even numbers are:\n");
	
	
	for ( int k = 0; k < cn; k++ )
	     printf("%d ", evenn[ k ] );
	
	printf("\n\n\n");
	printf("Odd numbers are:\n");
	
	for ( int j = 0; j < co; j++ )
	     printf("%d ", oddn[ j ] );
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

