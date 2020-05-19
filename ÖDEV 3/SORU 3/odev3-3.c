/*
* Bu program Kullanicidan kenar uzunluklarini alarak ucgen olup olmadigini  
* eger ucgen ise hangi tur ucgen oldugunu soyler
*
* Mustafa Hatipoğlu
* 
* */

#include <stdio.h>

int main()
{
	
	int a,b,c;   //ucgenin kenarları icin degisken belirliyoruz
	
	printf("Lutfen ucgenin kenarlarini giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	
	    if( (a+b>c) && (a+c>b) && (c+b>a) && (a-b<c) && (a-c<b) && (b-c<a) && a>0 && b>0 && c>0){ //ucgen olma sartları
			
			if( (a==b) && (a==c) && (b==c)   )
			   printf("\nEskenar Ucgen");
       
       else if( (a==b) || (a==c) || (b==c)) 	    
			   printf("\nIkizkenar Ucgen");
	   
	  
	   else	   printf("\nCesitkenar Ucgen");
	   
		
			}
          
            	
	else printf("\nBoyle bir ucgen yoktur !!!");
	
	
	
	return 0;
}
