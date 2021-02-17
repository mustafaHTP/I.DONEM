/* Adam asmaca
 * 
 * Mustafa Hatipo�lu
 * 
 * 
 * BITMEDI
 * :(
 * 
 * */

#include <stdio.h>
#include <locale.h>



int main()
{
    
    setlocale(LC_ALL,"Turkish");
    
    char guess1,guess2;
    
    int secim,b=3;
    
    // 1=MASA
    
    again: printf("\nLutfen 1 ve 5 aras�nda bir say� giriniz: ");
           scanf("%d",&secim);	
    
          if( (secim<1) || (secim>5)) {
             printf("!!! 1-5 arasi bir say� girmedi�iniz i�in oyun ba�lamad�!!!\n\n");
             goto again;
                                     }
    
    printf("\n�u anda adam asmaca oyunu d�rt karakterli kelime ile ba�lam��t�r...\n");
    
    switch (secim){
       case 1 : printf("\n_ _ _ _\nLutfen ilk hakk�n�z� giriniz: ");
                scanf(" %c",&guess1);
                 
                 int k=0;
                 
                 while(k<4) {
                     
                     if (guess1=='M'){
                    printf("\nM _ _ _\nLutfen ikinci hakk�n�z� giriniz: ");
                    goto secondm1;
                                     }
               else if (guess1=='A'){        
                    printf("\n_ A _ A\nLutfen ikinci hakk�n�z� giriniz: ");
                    goto seconda1;
                                    }
               
               else if (guess1=='S'){
                    printf("\n_ _ S _\nLutfen ikinci hakk�n�z� giriniz:");
                    goto seconds1;
                                    }
              
               else {   
                    k++;
                   
                         switch(k){
                           
                case 1 : printf("Harf YOKTUR ...\nTEKRAR DENEY�N�Z...."); 
                         printf("\nL�tfen ikinci hakk�n�z� giriniz: ");  
                         scanf(" %c",&guess1);
            break;	         
                case 2 : printf("Harf YOKTUR ...\nTEKRAR DENEY�N�Z...."); 
                         printf("\nL�tfen ���nc� hakk�n�z� giriniz: ");   
                         scanf(" %c",&guess1);
            break;	         
                case 3 : printf("Harf YOKTUR ...\nTEKRAR DENEY�N�Z...."); 
                         printf("\nL�tfen d�rd�nc� hakk�n�z� giriniz: ");   
                         scanf(" %c",&guess1);
            break;
                               }
                 
                   }
                   
                           }
             
             if(k==4) {
               printf("Ba�ar�s�z Oldunuz :(\nTekrar Deneyiniz");        
               goto again;	
                      } 
                      
                  
                  
                  // 2.A�AMA
                          
     
                scanf(" %c",&guess2);
                 
               //b=0

                 while (b<3){
                 
        
                 if(guess2='A')
                     printf("\nM A _ A\nL�tfen ���nc� hakk�n�z� giriniz: ");
             else if(guess2='S')
                     printf("M _ S _\nL�tfen ���nc� hakk�n�z� giriniz: ");
               
         if(guess2='M')
                     printf("\nM A _ A\nL�tfen ���nc� hakk�n�z� giriniz: ");
            else if(guess2='S')
                     printf("_ A S A\nL�tfen ���nc� hakk�n�z� giriniz: ");  
                     
         if(guess2='M')
                     printf("\nM _ S _\nL�tfen ���nc� hakk�n�z� giriniz: ");
             else if(guess2='A')
                     printf("_ A S A\nL�tfen ���nc� hakk�n�z� giriniz: ");                   
                 
                 else {   
                     
                     b++;
                   
                         switch(b) {
                           
                case 1 : printf("Harf YOKTUR ...\nTEKRAR DENEY�N�Z...."); 
                         printf("\nL�tfen ���nc� hakk�n�z� giriniz: ");  
                         scanf(" %c",&guess1);
            break;	         
                case 2 : printf("Harf YOKTUR ...\nTEKRAR DENEY�N�Z...."); 
                         printf("\nL�tfen ���nc� hakk�n�z� giriniz: ");   
                         scanf(" %c",&guess1);
            break;	         
                /*case 3 : printf("Harf YOKTUR ...\nTEKRAR DENEY�N�Z...."); 
                         printf("\nL�tfen d�rd�nc� hakk�n�z� giriniz: ");   
                         scanf(" %c",&guess1);
            break;
                               }*/
                 
                   }
               
                                   
                           
                           
                            } 
                
                 } //switch1 bracket
    
    
    
    return 0;
    
}

