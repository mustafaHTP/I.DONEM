/*odev6 soru 4
 * 
 *Mustafa Hatipoğlu
 * 
 */


#include <stdio.h>

void swapWithMin(int *px, int *py) {
    if(*px > *py){
    
    int temp = *px;
   
     *px = *py;
     *py = temp;
               }

}





int main (){
					
					
  int a[] = {51,81,34,66,51,72,12,30,83,39,71,89,100,75,100,80,3,92,19,25,100,17,34,18};
				
  int boyut = sizeof(a)/sizeof(int);

 

  for (int i=0;i<boyut-1;i++){
	  
	   for (int k=0;k<boyut-1;k++)
	   swapWithMin(&a[k],&a[k+1]);
	  
	 
	  
	  
	  }
  
  
  
  for(int l=0;l<boyut;l++)
        printf("%d ",a[l]);









return 0;
}


















