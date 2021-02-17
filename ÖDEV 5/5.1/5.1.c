/*ADAM ASMACA
 * 
 * odev5.1
 *
 *  Mustafa Hatipo�lu
 * 
 */

#include <locale.h> //T�rk�e karakterleri kullanmak i�in bu k�t�phaneyi ekliyoruz bunu kullanmak i�in Dokuman ==> Kodlama ayarla ==> GD & GB ASYA ==> T�rk�e (Windows-1254) se�iyoruz
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand fonksiyonunu kullanmak i�in bu k�t�phaneyi ekliyoruz
#include <string.h> //strlen fonksiyonunu kullanmak i�in bu k�t�phaneyi ekliyoruz

char words [10][11] = {"PORTAKAL","ELMA","ARMUT","ADALET","KASA","SARAY","JAGUAR","ZEBRA","KAPLAN","BASKETBOL"}; //global iki boyutlu bir dizi at�yoruz


                //FONKSIYONLAR


int boolvarmi (char x , int y){  //Bu fonksiyon parametre olarak kullan�c�n girdi�i karakteri ve kelimenin dizide hangi sat�rda oldu�unu belirten bir say� al�r
                                 //E�er kullan�c�n�n girdi�i karakter dizide varsa 1 yoksa 0 d�nd�r�r             
        for(int i=0;i<10;i++){
                    
            if(x==words[y][i])
                return 1;
                             }		   
           
       return 0;
    }

void achievement (int s,int h ,int n){ //Bu fonksiyon kullan�c�n�n do�ru tahmin etti�i harf say�s�n� kelimenin uzunlu�uyla kar��la�t�r�r yani kullan�c� can� ile
                                       //E�er do�ru bilinen harf say�s� kelimenin harf say�s� kadarsa "TEBR�KLER BA�ARDINIZ" ve tahmin edilen kelimeyi ekrana basar 
    if(s==h){
    printf("\nTEBR�KLER BA�ARDINIZ\n");
    
    
    printf("KEL�MEN�Z: ");
    for(int j=0;j<=h-1;j++)	
        printf("%c",words[n][j]);
             }
    
    }


void failure (int s,int h){ //Bu fonksiyon e�er do�ru tahmin edilen harf say�s� ile kelimenin harf say�s� e�it de�ilse "BA�ARAMADINIZ :( " bast�r�r
    
    if(s!=h)
       printf("\nBA�ARAMADINIZ :( ");

    }


void hangman (int f ) {     //Bu fonksiyon kullan�c�n yanl�� tahmin edilen her harf say�s�na oranla a�ama a�ama adam asar
    
    
    switch (f){ //Hata say�s�na g�re adam asar
    
    
       
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
                

         //ANA FONKS�YON



int main()
{
    
    setlocale(LC_ALL,"Turkish"); //T�rk�e karakter i�in ayarlama yap�yoruz 
    
    srand(time(NULL)); //Bilgisayar�n saatine g�re rastgele bir say� �retir
    
    int wordnumber = rand()%10; //�retilen rastgele say�y� 0-9 aras�nda s�n�rl�yoruz ve kelimenin hangi sat�rda oldu�unu belirleyecek de�i�kene at�yoruz
    int life = strlen(words[wordnumber]); //Sat�r say�s�na g�re o sat�rdaki metin uzunlu�unu bulup bunu kullan�c� can� olarak at�yoruz
    char guess[11] = {'_','_','_','_','_','_','_','_','_','_','_'}; //Kullan�c�n tahminleri e�er do�ru ise bu diziye atanacakt�r
    char guessletter; //Tahmin edilecek harf i�in de�i�ken tan�ml�yoruz
    int success=0;  //Kullan�c�n�n do�ru tahmin say�s� bu de�i�kende tutulacak
    int fail=0; // Kullan�c�n�n hata say�s� bu de�i�kende tutulacak
    int j,i;
    int failcontrol=0;	//Hata say�s�n� kontrol etmek i�in bir de�i�ken
    

    
    
    printf("!!!Oyunda Buyuk harf kullan�n�z");
    printf("\n                     ADAM ASMACA OYUNU BA�LAMI�TIR...");	
    printf("\n\n\n");
    
    hangman(fail);
    for(int z=0;z<=life-1;z++)  //kelimenin harf say�s� kadar bo�luk bast�r�yoruz
        printf(" _ ");	
    
    printf("\n");
    
    
    for(i=1;i<=life;i++){  //Kullan�c�n kelimenin harf say�s� kadar can� vard�r
          
        printf("\nL�tfen Bir Harf Giriniz: ");
        scanf(" %c",&guessletter);
           
        for(j=0;j<=life-1;j++){  //Kullan�c�dan al�nan harfi dizide ar�yoruz
                  
            if(guessletter==words[wordnumber][j]){ //E�er harf dizide varsa tahmin dizisine do�ru karakteri at�yoruz
                guess[j] = guessletter;
                success++;   //Tahmin edilen harf do�ru ise 1 art�yoruz                               				                        						  
                failcontrol++; 		           }  // E�er kullan�c� do�ru girdiyse bu de�i�keni bir art�r�yoruz ��nk� for dan ��kt�ktan sonra fail say�s�n� art�rmas�n diye
                                                                                                             
        }
              
        if (failcontrol==0) 
            fail++;              
                                         
        system("cls"); 
        hangman(fail);
        printf("\n\n");
        printf("%d",boolvarmi(guessletter,wordnumber)); //Burada kullan�c�dan al�nan de�eri fonksiyona yolluyoruz tahmin do�ru ise 1 , yanl�� ise 0 d�nd�r�r
    
        printf("\n\n");
                                                      
        for(int q=0;q<=life-1;q++)   //Kullan�c�n o andaki do�ru tahminlerinin yerlerini g�rmesi i�in guess dizisini tahimn edilen harf say�s� kadar bast�yoruz
            printf("%c",guess[q]);
                               
                               
        printf("\n\n");
        failcontrol=0;    //Her tahminden sonra bu de�i�keni s�f�rl�yoruz
                                   
                                    
    }
                                     
    printf("\n\n");                  
    failure (success,life); //Son olarak ba�ar� say�lar�n� fonksiyonlara g�nderip do�ru mu , yanl�� m� tahmin edildi�ini ekrana bast�r�yoruz
    achievement (success,life,wordnumber);       
    printf("\n\n");   
                   
    return 0;
}

