/*
 * odev4.3.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 */



#include <stdio.h>
#define SIZE 5


int main()
{
    
    int array [ SIZE ] = { 5, 96, 35, 951, 666 };
    int arr[ SIZE ];
    
    for ( int i = 0; i <= SIZE-1; i++ )
         arr[ i ] = array [ SIZE-1-i ];
        
    for( int i = 0; i <= SIZE-1; i++)	
         printf("%d ", arr [ i ]) ;
        
        
    
    
    return 0;
}

