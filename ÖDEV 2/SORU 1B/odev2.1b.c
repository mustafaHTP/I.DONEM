/* Bu program kullanicidan 2 boyutlu Kartezyen koordinat sistemine gore 
 * bir noktanin X ve Y degerlerini alip, 
 * noktanin hangi ceyrekte oldugunu kullaniciya gosterir 
 

 Mustafa Hatipoğlu
 
  */

#include <stdio.h>

int main()
{
	
	
	float x,y; ////fonksiyonda kullanilacak degişkenler icin hafizada yer ayiriyoruz
	int q; //switch case fonksiyonunda kullanmak uzere bir tam sayi degiskeni icin hafizada yer ayiriyoruz
	
	
	printf("Lutfen X koordinat degerini giriniz:  ");
	scanf("%f",&x);
	printf("\n\nLutfen Y koordinat degerini giriniz:  ");
	scanf("%f",&y);
	
          if((x>0) && (y>0))
             q=1;
    
    else if ((x<0) && (y>0))
             q=2;
    
    else if ((x<0) && (y<0))
             q=3;
   
    else if ((x>0) && (y<0))
             q=4;

    else if ((x==0) && (y!=0))
             q=5;
   
    else if ((x!=0) && (y==0))          
	         q=6;
	
	else if ((x==0) && (y==0))            
	         q=7;
	




	switch (q) {     //if fonksiyonundaki atamalara göre switch case fonksiyonu cikti output verecek
	
	  case 1 : printf("\n(%.1f,%.1f) noktasi 1.ceyrektedir ",x,y);
	  break;
	 
	  case 2 : printf("\n(%.1f,%.1f) noktasi 2.ceyrektedir ",x,y);       
	  break;	        
     
      case 3 : printf("\n(%.1f,%.1f) noktasi 3.ceyrektedir ",x,y);  
	  break;        
	 
	  case 4 : printf("\n(%.1f,%.1f) noktasi 4.ceyrektedir ",x,y); 
	  break;        
		        
	  case 5 : printf("\n(%.1f,%.1f) noktasi x ekseni uzerindedir ",x,y);        
	  break;        
		
	  case 6 : printf("\n(%.1f,%.1f) noktasi y ekseni uzerindedir ",x,y); 	         
	  break;       
		       
	  case 7 : printf("\n(%.1f,%.1f) noktasi orjindedir",x,y);        
	  break;       
		       
		      		       		       
		       
		        }
	         
	

	
	return 0;

}
