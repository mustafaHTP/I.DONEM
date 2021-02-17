/*
 * Greedy algoritma
 * 
 * Ama�: Kullan�c�n�n memnuniyet seviyesini max tutmak
 *
 * Mustafa Hatipo�lu
 * 
 * NOT: T�rk�e karakterlerde sorun ��karsa kodlamay� w�ndows-1254 yapmal�s�n�z
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish"); //Turkce karakterlerin duzgun goruntulenmesi icin
    srand(time(NULL));  //Bilgisayarin saatine gore rastgele bir sayi uretilecek
    
    
    int memnuniyet; 
    int icerikzamani;
    float icerikler[10][5]; //��eriklerle ilgili bilgiler bu dizide tutulur 

    
    //��erik atamalar� burada yap�l�r
    //1. s�tun s�reyi
    //2. s�tun memnuniyeti tutar
    //3. s�tun kullan�c�ya verilen i�eri�in tekrar verilmemesi i�in bu s�t�nda 0 ve 1 ler tutulur, '0' ---> bo� '1' ---> verildi anlam�na gelir
    //4. s�tunda h�rs�z�n �antas�ndaki prensipten yola ��k�larak memnuniyet s�reye b�l�n�r hangisinin de�eri en y�ksekse o de�er kullan�c�ya verilir 
    //5. s�tun i�eri�in s�ras�n� tutar
    
    for(int i=0;i<10;i++){
              
             for(int j=0;j<1;){  //20 ile 60 aras�nda bir sure atan�lmad�g� surece donguye girecek
                  icerikzamani = rand()%61; //0-60 aras�nda atama yapar
                 
                  if(icerikzamani>19){  //eger atanan sayi 20 ve �zeri ise atama yap�l�r
                      icerikler[i][j]=icerikzamani;
                      j++;	
                                     }
                            }
                      
             for(int l=0;l<1;){  //0 ile 10 aras�nda bir memnuniyet atanmad�g� surece donguye girecek
                  memnuniyet = rand()%11; //0-10 aras�nda atama yapar
                 
                  if(memnuniyet>0){  //eger atanan say� 0'dan buyukse atama yapar   
                    icerikler[i][l+1]=memnuniyet;	          
                    l++;       
                                        }
                                 }		 
                         
             for(int c=0;c<1;c++){ //icerikler ilk basta kullan�c�ya verilmedigi icin hepsine '0' at�yoruz
                
                icerikler[i][c+2]=0;
                              
                               }			 
                    
             for(int b=0;b<1;b++){ //birim zamana dusen memnuniyet oran�n� bulmak icin b�lme islemi yap�l�r ve atan�r
                 icerikler[i][b+3]=icerikler[i][b+1]/icerikler[i][b];		 		 
                                 }		
             for(int v=0;v<1;v++)  //��erikler numaraland�r�l�r		
                 icerikler[i][v+4]=i+1;		  
                      }	 
        
        
    printf("***********************************************************************\n");	
    printf("*                                                                     *\n");
    printf("*\t|\\    |   ------   -------   |-----   |       |   \\    /      *\n");	
    printf("*\t| \\   |   |           |      |        |       |    \\  /       *\n");	
    printf("*\t|  \\  |   |-----      |      |-----   |       |     \\/        *\n");	
    printf("*\t|   \\ |   |           |      |        |       |     /\\        *\n");
    printf("*\t|    \\|   |-----      |      |        |____   |    /  \\       *\n");	
    printf("*                                                                     *\n");
    printf("*                                                                     *\n");
    printf("***********************************************************************");	
        
        
        
                 
                 
    
    for(int k=0;k<10;k++){
        for(int x=0;x<1;x++){  //Burada b�t�n i�erikler listelenir
            printf("\n\t\t��erik%.0f ",icerikler[k][x+4]); 
            printf(" S�re:%.0fdk ",icerikler[k][x]);        
            printf(" Memnuniyet:%.0f\n ",icerikler[k][x+1]);                   
                       }
    
        }	
    
    
    
    float toplamsure=0;
    float max=icerikler[0][3];  //Kullan�c�ya verilecek i�erikler memnuniyet/sure oran� en yuksek olan verileceginden �nce max deger belirlenir
    int q=0;
    printf("\n************************************************\n\n");
    printf("\nSize �zel �neriler...\n");
    
    while(q<1){
          
           for(int arama=0;arama<10;arama++){
              
              if(icerikler[arama][3]>max){
                 
                 if(icerikler[arama][2]!=1){  //eger icerik �nceden kullaniciya verilmisse tekrardan ekrana bastirilmaz
                    
                     max=icerikler[arama][3]; 	 			 	 			
                                            }
                 
                                              }
                     
                                          }
         
         for(int m=0;m<10;m++){
             
             if(max==icerikler[m][3]){  //atanan max deger dizide tekrar aran�r ve bulundugu sat�r ekrana bast�r�l�r
                icerikler[m][2]=1;
                toplamsure+=icerikler[m][0]; //sureler ilk sutunda tutuldugundan toplam sureye eklenir
                
                if(toplamsure<=180){  //Toplam sure 180 dk dan kucukse ekrana bast�r�l�r
                   
                   printf("\n\t��erik%.0f ",icerikler[m][4]); //Once icerik numarasi bast�r�l�r
                   printf(" S�re:%.0fdk ",icerikler[m][0]);    //Sure ekrana bastirilir      
                   printf(" Memnuniyet:%.0f\n",icerikler[m][1]);   //ve son olarak memnuniyet suresi ekrana bast�r�l�r                                   
                                }                
              else     //Toplam sure 180 'i gectiginde q bir art�r�l�r ve d�ng�den cikilir          
                   q++;                 
                                      }
                              }	 
            
             
        
        
        max=0; //Kullan�c�ya her icerik verildikten sonra max deger s�f�rlan�r kars�last�rmada problem olmamasi icin
        
        
        }
    
    
    
    //Eger dizinin son halini gormek isterseniz yorum ayraclarini kaldirabilirsiniz
    
    /*for(int k=0;k<10;k++){
        for(int x=0;x<1;x++){
            printf("Sure: %.0f",icerikler[k][x]); 
            printf(" Memnuniyet: %.0f",icerikler[k][x+1]);        
            printf(" atama: %.0f ",icerikler[k][x+2]);          
            printf("Deger: %f",icerikler[k][x+3]);
            printf(" Sira:%.0f\n",icerikler[k][x+4]);          
                       }
    
        }	*/
    
    
    
    return 0;
}

