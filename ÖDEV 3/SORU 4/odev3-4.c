/*
 * Bu program kullanicidan alinan degere gore ucgen bastirir
 * 
 * Mustafa hatipoğlu
 * */



#include <stdio.h>

int main()
{
	
	int sayi,b,c;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(b=sayi;b>=1;b--){
					   
		   for(c=1;c<=b;c++)			   
			   printf("%d",b);
		       	   
		
		      printf("\n");
		
		
		              }
	
	
	return 0;
}
