/*
 * odev4.5.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 */

#include <stdio.h>
#define SIZE 13

int main()
{
	
	int arr[ SIZE ] = { 3, 6, 9, 12, 3, 6, 9, 1, 2, 6, 9, 3, 12 };
	int freq[ SIZE ];
	int i, j , count;
	
	
	for( i = 0; i < SIZE; i++ )
	     freq[ i ] = -1;
	
	
	
	for ( i = 0; i < SIZE; i++ ){
		
		count = 1;
		
		for ( j = i+1; j < SIZE; j++ ){
			
			if ( arr[ i ] == arr [ j ] ){
				
				count++;	
				freq[ j ] = 0;
	
				}
		
		if( freq[ i ] != 0 )	
			freq[ i ] = count; 		
			}
		}
		
	printf("Frequency of all elements of array:\n");
	
	for( i = 0; i < SIZE; i++ ){	
		 if( freq [ i ] != 0 )
		 printf("%5d is repeated %5d times\n", arr[ i ], freq[ i ] );
		                       }
	
	
	return 0;
}

