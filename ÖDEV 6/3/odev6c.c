/*Odev6 soru3
 * Mustafa Hatipoğlu
 * 
 */


#include <stdio.h>


void swap( char *px, char *py) {


char temp = *px;
*px = *py;
*py = temp;



}


	

int main (){

 
  char a[] = "medeniyet";
  
        
        swap(&a[0], &a[8]);
        printf("%s",a);
	
	
	
	return 0;
}

