/*
 * odev4.1.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 */


#include <stdio.h>
#define SIZE 10

int main()
{
	
	int arr[ SIZE ] = { 2, 30, 45, 8, 13, 91, 23, 25, 100, 11 };
	
	
	//It can be assigned also INT MIN to max1 
	int max1 = arr [ 0 ];
	int max2;
	
	for ( int i = 1; i <= SIZE-1; i++ ){
		
		if( arr [ i ] > max1 ){
		   
		   max2 = max1;
		   max1 = arr [ i ];
                               }
      
      
   else if( arr [ i ] > max2 && arr [ i ] < max1 ) 
		   max2 = arr [ i ];    
		
		}
	
	
	printf("The max value in the array is: %d\n", max1);
	printf("The second biggest value in the array is: %d\n", max2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

