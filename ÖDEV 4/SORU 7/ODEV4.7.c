/*
 * odev4.7.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 *
 *The program finds frequency of each letter 
 * 
 * 
 * 
 */


#include <stdio.h>
#define SIZE 9


int main()
{
	
	char arr[] = "MEDENIYET";
	int freq[ SIZE ];
	int i, j, count;
	
	for ( int k=0; k<SIZE; k++ )
	     freq[k] = -1;
	
	
	printf("Frequency of each letter in array is:\n\n");
	
	for ( i = 0; i < SIZE; i++ ){
		
		count = 1;
		
		for( j = i+1; j < SIZE; j++ ){
			
			if( arr[ i ] == arr[ j ] ){
				
				count++;
				freq[ j ] = 0;
				
				}			
			}
		
		if( freq [ i ] != 0 ){
			
			freq [ i ] = count;
			}
		
		
		}
	
	
	
	for ( i = 0; i < SIZE; i++ ){
	    
	    if ( freq [ i ] !=0  ){
	     printf("%5c 's frequency: %5d\n", arr[ i ], freq[ i ] );
						      }  
	                            
	                              }
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

