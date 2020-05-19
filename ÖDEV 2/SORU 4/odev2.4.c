/* Adam asmaca
 * 
 * Mustafa Hatipoðlu*/

#include <stdio.h>
#include <locale.h>



int main()
{
	
	setlocale(LC_ALL,"Turkish");
	
	char guess1,guess2;
	
	int secim,b=3;
	
	// 1=MASA
	
	again: printf("\nLutfen 1 ve 5 arasýnda bir sayý giriniz: ");
	       scanf("%d",&secim);	
	
	      if( (secim<1) || (secim>5)) {
	         printf("!!! 1-5 arasi bir sayý girmediðiniz için oyun baþlamadý!!!\n\n");
	         goto again;
								     }
	
	printf("\nÞu anda adam asmaca oyunu dört karakterli kelime ile baþlamýþtýr...\n");
	
	switch (secim){
	   case 1 : printf("\n_ _ _ _\nLutfen ilk hakkýnýzý giriniz: ");
	            scanf(" %c",&guess1);
	             
	             int k=0;
	             
	             while(k<4) {
	                 
	                 if (guess1=='M'){
	                printf("\nM _ _ _\nLutfen ikinci hakkýnýzý giriniz: ");
		            goto secondm1;
		                             }
		       else if (guess1=='A'){        
		            printf("\n_ A _ A\nLutfen ikinci hakkýnýzý giriniz: ");
		            goto seconda1;
								    }
		       
		       else if (guess1=='S'){
		            printf("\n_ _ S _\nLutfen ikinci hakkýnýzý giriniz:");
		            goto seconds1;
		                            }
		      
		       else {   
		            k++;
		           
		      	       switch(k){
						   
	            case 1 : printf("Harf YOKTUR ...\nTEKRAR DENEYÝNÝZ...."); 
				         printf("\nLütfen ikinci hakkýnýzý giriniz: ");  
			             scanf(" %c",&guess1);
			break;	         
				case 2 : printf("Harf YOKTUR ...\nTEKRAR DENEYÝNÝZ...."); 
				         printf("\nLütfen üçüncü hakkýnýzý giriniz: ");   
			             scanf(" %c",&guess1);
			break;	         
				case 3 : printf("Harf YOKTUR ...\nTEKRAR DENEYÝNÝZ...."); 
				         printf("\nLütfen dördüncü hakkýnýzý giriniz: ");   
	                     scanf(" %c",&guess1);
	        break;
			                   }
				 
				   }
				   
				           }
	         
	         if(k==4) {
	           printf("Baþarýsýz Oldunuz :(\nTekrar Deneyiniz");        
			   goto again;	
				      } 
				      
				  
				  
				  // 2.AÞAMA
				          
	 
	            scanf(" %c",&guess2);
	             
               //b=0

	             while (b<3){
	             
	    
	             if(guess2='A')
	                 printf("\nM A _ A\nLütfen üçüncü hakkýnýzý giriniz: ");
	         else if(guess2='S')
	                 printf("M _ S _\nLütfen üçüncü hakkýnýzý giriniz: ");
	           
	     if(guess2='M')
	                 printf("\nM A _ A\nLütfen üçüncü hakkýnýzý giriniz: ");
	        else if(guess2='S')
	                 printf("_ A S A\nLütfen üçüncü hakkýnýzý giriniz: ");  
	                 
	     if(guess2='M')
	                 printf("\nM _ S _\nLütfen üçüncü hakkýnýzý giriniz: ");
	         else if(guess2='A')
	                 printf("_ A S A\nLütfen üçüncü hakkýnýzý giriniz: ");                   
	             
	             else {   
		             
		             b++;
		           
		      	       switch(b) {
						   
	            case 1 : printf("Harf YOKTUR ...\nTEKRAR DENEYÝNÝZ...."); 
				         printf("\nLütfen üçüncü hakkýnýzý giriniz: ");  
			             scanf(" %c",&guess1);
			break;	         
				case 2 : printf("Harf YOKTUR ...\nTEKRAR DENEYÝNÝZ...."); 
				         printf("\nLütfen üçüncü hakkýnýzý giriniz: ");   
			             scanf(" %c",&guess1);
			break;	         
				/*case 3 : printf("Harf YOKTUR ...\nTEKRAR DENEYÝNÝZ...."); 
				         printf("\nLütfen dördüncü hakkýnýzý giriniz: ");   
	                     scanf(" %c",&guess1);
	        break;
			                   }*/
				 
				   }
	           
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                   
		                    } 
	            
	
	
	
	
                 } //switch1 bracket
	
	
	
	return 0;
	
}

