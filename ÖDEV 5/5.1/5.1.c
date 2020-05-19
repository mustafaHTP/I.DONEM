/*ADAM ASMACA
 * 
 * odev5.1
 *
 *  Mustafa Hatipoðlu
 * 
 */

#include <locale.h> //Türkçe karakterleri kullanmak için bu kütüphaneyi ekliyoruz bunu kullanmak için Dokuman ==> Kodlama ayarla ==> GD & GB ASYA ==> Türkçe (Windows-1254) seçiyoruz
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand fonksiyonunu kullanmak için bu kütüphaneyi ekliyoruz
#include <string.h> //strlen fonksiyonunu kullanmak için bu kütüphaneyi ekliyoruz

char words [10][11] = {"PORTAKAL","ELMA","ARMUT","ADALET","KASA","SARAY","JAGUAR","ZEBRA","KAPLAN","BASKETBOL"}; //global iki boyutlu bir dizi atýyoruz


				//FONKSÝYONLAR


int boolvarmi (char x , int y){  //Bu fonksiyon parametre olarak kullanýcýn girdiði karakteri ve kelimenin dizide hangi satýrda olduðunu belirten bir sayý alýr
	                             //Eðer kullanýcýnýn girdiði karakter dizide varsa 1 yoksa 0 döndürür             
		for(int i=0;i<10;i++){
					
			if(x==words[y][i])
			    return 1;
			                 }		   
		   
	   return 0;
	
	
	}

void achievement (int s,int h ,int n){ //Bu fonksiyon kullanýcýnýn doðru tahmin ettiði harf sayýsýný kelimenin uzunluðuyla karþýlaþtýrýr yani kullanýcý caný ile
									   //Eðer doðru bilinen harf sayýsý kelimenin harf sayýsý kadarsa "TEBRÝKLER BAÞARDINIZ" ve tahmin edilen kelimeyi ekrana basar 
	if(s==h){
	printf("\nTEBRÝKLER BAÞARDINIZ\n");
	
	
	printf("KELÝMENÝZ: ");
	for(int j=0;j<=h-1;j++)	
	    printf("%c",words[n][j]);
	     	}
	
	}


void failure (int s,int h){ //Bu fonksiyon eðer doðru tahmin edilen harf sayýsý ile kelimenin harf sayýsý eþit deðilse "BAÞARAMADINIZ :( " bastýrýr
	
	if(s!=h)
	   printf("\nBAÞARAMADINIZ :( ");

	}


void hangman (int f ) {     //Bu fonksiyon kullanýcýn yanlýþ tahmin edilen her harf sayýsýna oranla aþama aþama adam asar
	
	
	switch (f){ //Hata sayýsýna göre adam asar
	
	
	   
	case 0:      
	printf("|-------|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;         
	
	case 1:        
	printf("|-------|\n");
	printf("|       0\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	    
	
	
	case 2:      
	printf("|-------|	\n");
	printf("|       0	\n");
	printf("|       |	\n");
	printf("|       |	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	   
	
	case 3:     
	printf("|-------|	\n");
	printf("|       0	\n");
	printf("|      /|	\n");
	printf("|       |	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;        
	
	case 4:       
	printf("|-------|	\n");
	printf("|       0	\n");
	printf("|      /|	\n");
	printf("|     / |	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	    
	
	case 5:        
	printf("|-------|	\n");
	printf("|       0	\n");
	printf("|      /|\\	\n");
	printf("|     / |	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	   
	
	
	case 6:
	printf("|-------|	\n");
	printf("|       0	\n");
	printf("|      /|\\	\n");
	printf("|     / | \\	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	    
	
	
	case 7: 
	printf("|-------|	\n");
	printf("|       0	\n");
	printf("|      /|\\	\n");
	printf("|     / | \\	\n");
	printf("|        \\	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	   
	
	case 8:        
	printf("|-------|   \n");
	printf("|       0	\n");
	printf("|      /|\\	\n");
	printf("|     / | \\	\n");
	printf("|      / \\	\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	   
	
	case 9:		
	printf("|-------|      \n");
	printf("|       0     \n");
	printf("|      /|\\    \n");
	printf("|     / | \\    \n");
	printf("|      / \\     \n");
	printf("|     /        \n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;	
	
	
	case 10:            
	printf("|-------|  \n");
	printf("|       0    \n");
	printf("|      /|\\  \n");
	printf("|     / | \\  \n");
	printf("|      / \\   \n");
	printf("|     /   \\   \n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	break;		
	
	
                       }
	
		
		
		}			
				

         //ANA FONKSÝYON



int main()
{
	
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter için ayarlama yapýyoruz 
	
	srand(time(NULL)); //Bilgisayarýn saatine göre rastgele bir sayý üretir
	
	int wordnumber = rand()%10; //Üretilen rastgele sayýyý 0-9 arasýnda sýnýrlýyoruz ve kelimenin hangi satýrda olduðunu belirleyecek deðiþkene atýyoruz
	int life = strlen(words[wordnumber]); //Satýr sayýsýna göre o satýrdaki metin uzunluðunu bulup bunu kullanýcý caný olarak atýyoruz
	char guess[11] = {'_','_','_','_','_','_','_','_','_','_','_'}; //Kullanýcýn tahminleri eðer doðru ise bu diziye atanacaktýr
	char guessletter; //Tahmin edilecek harf için deðiþken tanýmlýyoruz
	int success=0;  //Kullanýcýnýn doðru tahmin sayýsý bu deðiþkende tutulacak
	int fail=0; // Kullanýcýnýn hata sayýsý bu deðiþkende tutulacak
	int j,i;
	int failcontrol=0;	//Hata sayýsýný kontrol etmek için bir deðiþken
	

	
	
	printf("!!!Oyunda Buyuk harf kullanýnýz");
	printf("\n                     ADAM ASMACA OYUNU BAÞLAMIÞTIR...");	
	printf("\n\n\n");
	
	hangman(fail);
	for(int z=0;z<=life-1;z++)  //kelimenin harf sayýsý kadar boþluk bastýrýyoruz
        printf(" _ ");	
	
	printf("\n");
	
	
	for(i=1;i<=life;i++){  //Kullanýcýn kelimenin harf sayýsý kadar caný vardýr
	      
	      printf("\nLütfen Bir Harf Giriniz: ");
	      scanf(" %c",&guessletter);
	       
	          for(j=0;j<=life-1;j++){  //Kullanýcýdan alýnan harfi dizide arýyoruz
				  
				  if(guessletter==words[wordnumber][j]){ //Eðer harf dizide varsa tahmin dizisine doðru karakteri atýyoruz
				     guess[j] = guessletter;
				     success++;   //Tahmin edilen harf doðru ise 1 artýyoruz                               				                        						  
					 failcontrol++; 		           }  // Eðer kullanýcý doðru girdiyse bu deðiþkeni bir artýrýyoruz çünkü for dan çýktýktan sonra fail sayýsýný artýrmasýn diye
				  			                  		                     			                    
				                     }
              
                   if (failcontrol==0) 
				       fail++;              
                                         
                    system("cls"); 
                    hangman(fail);
                    printf("\n\n");
                    printf("%d",boolvarmi(guessletter,wordnumber)); //Burada kullanýcýdan alýnan deðeri fonksiyona yolluyoruz tahmin doðru ise 1 , yanlýþ ise 0 döndürür
                
                    printf("\n\n");
	                          
	                          
	                           for(int q=0;q<=life-1;q++)   //Kullanýcýn o andaki doðru tahminlerinin yerlerini görmesi için guess dizisini tahimn edilen harf sayýsý kadar bastýyoruz
                                   printf("%c",guess[q]);
				               
				               
				               printf("\n\n");
                               failcontrol=0;    //Her tahminden sonra bu deðiþkeni sýfýrlýyoruz
                                   
                                    
                                       }
                         
                      
                 
                  printf("\n\n");                  
                  failure (success,life); //Son olarak baþarý sayýlarýný fonksiyonlara gönderip doðru mu , yanlýþ mý tahmin edildiðini ekrana bastýrýyoruz
                  achievement (success,life,wordnumber);       
	              printf("\n\n");   
	               
	           
	             
	 	
	
	
	return 0;
}

