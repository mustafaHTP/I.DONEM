/*
 * odev4.6.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 19.01.2020
 *
 * The program calculates whether sum of 4 number in the array are equal to given number or not
 * 
 * ARRAY VERSION
 * 
 * FINISHED 
 */

/*   CLUE
 * 
 *
   Input [4,5,6,3,7,8,5,14,4,2,3,4,1]
   4 sayının toplamı olacak bir k değeri giriniz: 12
   Dizide toplamı 12 olan 4 sayı:
   4 5 2 1
   6,3,2,1
   4,3,4,1
   ….
  */

#include <stdio.h>
#define SIZE 13
#define SIZE2 4

int main()
{
	
	int arr [ SIZE ] = { 4, 5, 6, 3, 7, 8, 5, 14, 4, 2, 3, 4, 1 };
	int control[ SIZE2 ];
	int i, j, z = 1, target, sum = 0, count;
	
	printf("enter the number: ");
	scanf("%d", &target);
	
	for ( i = 0; i < SIZE - 3 ; i++ ){
		
		count = 0; // istenilen sartlarda sayi bulundugunu gosteren sayac
		control[ count ] = arr [ i ];
		sum = arr[ i ]; // ilk elemani ctrl dizisine ata
		   
		    for ( j = i + z; j < SIZE; j++ ){
		    	
		    	sum += arr[ j ]; 
 		    	
		    	if( sum < target ){
		    		
		    		count++;
		    		control [ count ] = arr[ j ];
		    							
		    		}
		    	
		    	else if ( sum == target && count < 2 ){  // eger toplam hedefe esit ve sayilar 3 adet ise buraya girecek         
					                                     //cunku toplamları esit 4 adet sayi isteniyor
		    		sum -= arr[ j ];
		    		
		    		}	
		    	else if ( sum == target && count == 2 ){
		    		
		    		count++;
		    		control [ count ] = arr[ j ];
		    		
		    		}
		    	
		    	else{
		    		
		    		sum -= arr[ j ];
		    		
		    		}
		    	
		    	if( sum == target && count == 3 ){ // esitlik saglandiginda donguden cikacak
		    		break;
		    		}
		    	
		        if ( j == SIZE - 1 ){

		    		j = i + z;		    		
		    		count = 0;
		    		sum = arr[ i ];
		    		z++;			    		   		
		    		
		    		}
		        }  // for loop
		   
		    z = 1;
		   
	 
	 
	 if( sum == target && count == 3 ){ // eger 4 sayini toplami 12 ise bu sayilari bastiracak
		 
	   for( int k = 0; k < SIZE2; k++ )
		  printf("%d ", control[ k ]);
	   
	   printf("\n");	 
		 
		 }
	 
	
                   }  //external for loop
	
	
	
	return 0;
}

