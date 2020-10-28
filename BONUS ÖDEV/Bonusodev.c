/*
 * Greedy algoritma
 * 
 * Amaç: Kullanýcýnýn memnuniyet seviyesini max tutmak
 *
 * Mustafa Hatipoðlu
 * 
 * NOT: Türkçe karakterlerde sorun çýkarsa kodlamayý wýndows-1254 yapmalýsýnýz
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
    float icerikler[10][5]; //Ýçeriklerle ilgili bilgiler bu dizide tutulur 

	
	//Ýçerik atamalarý burada yapýlýr
	//1. sütun süreyi
	//2. sütun memnuniyeti tutar
	//3. sütun kullanýcýya verilen içeriðin tekrar verilmemesi için bu sütünda 0 ve 1 ler tutulur, '0' ---> boþ '1' ---> verildi anlamýna gelir
	//4. sütunda hýrsýzýn çantasýndaki prensipten yola çýkýlarak memnuniyet süreye bölünür hangisinin deðeri en yüksekse o deðer kullanýcýya verilir 
	//5. sütun içeriðin sýrasýný tutar
	
	for(int i=0;i<10;i++){
		      
		     for(int j=0;j<1;){  //20 ile 60 arasýnda bir sure atanýlmadýgý surece donguye girecek
	              icerikzamani = rand()%61; //0-60 arasýnda atama yapar
				 
				  if(icerikzamani>19){  //eger atanan sayi 20 ve üzeri ise atama yapýlýr
					  icerikler[i][j]=icerikzamani;
					  j++;	
								     }
	                        }
					  
			 for(int l=0;l<1;){  //0 ile 10 arasýnda bir memnuniyet atanmadýgý surece donguye girecek
				  memnuniyet = rand()%11; //0-10 arasýnda atama yapar
				 
				  if(memnuniyet>0){  //eger atanan sayý 0'dan buyukse atama yapar   
					icerikler[i][l+1]=memnuniyet;	          
				    l++;       
				                        }
							     }		 
						 
		     for(int c=0;c<1;c++){ //icerikler ilk basta kullanýcýya verilmedigi icin hepsine '0' atýyoruz
				
				icerikler[i][c+2]=0;
				              
				               }			 
					
			 for(int b=0;b<1;b++){ //birim zamana dusen memnuniyet oranýný bulmak icin bölme islemi yapýlýr ve atanýr
				 icerikler[i][b+3]=icerikler[i][b+1]/icerikler[i][b];		 		 
				                 }		
			 for(int v=0;v<1;v++)  //Ýçerikler numaralandýrýlýr		
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
		for(int x=0;x<1;x++){  //Burada bütün içerikler listelenir
		    printf("\n\t\tÝçerik%.0f ",icerikler[k][x+4]); 
		    printf(" Süre:%.0fdk ",icerikler[k][x]);        
		    printf(" Memnuniyet:%.0f\n ",icerikler[k][x+1]);                   
		               }
	
		}	
	
	
	
	float toplamsure=0;
	float max=icerikler[0][3];  //Kullanýcýya verilecek içerikler memnuniyet/sure oraný en yuksek olan verileceginden önce max deger belirlenir
	int q=0;
	printf("\n************************************************\n\n");
	printf("\nSize özel öneriler...\n");
	
	while(q<1){
     	 
     	  for(int arama=0;arama<10;arama++){
			  
			  if(icerikler[arama][3]>max){
				 
				 if(icerikler[arama][2]!=1){  //eger icerik önceden kullaniciya verilmisse tekrardan ekrana bastirilmaz
					
					 max=icerikler[arama][3]; 	 			 	 			
											}
				 
						                      }
			         
			                              }
		 
		 for(int m=0;m<10;m++){
			 
			 if(max==icerikler[m][3]){  //atanan max deger dizide tekrar aranýr ve bulundugu satýr ekrana bastýrýlýr
				icerikler[m][2]=1;
				toplamsure+=icerikler[m][0]; //sureler ilk sutunda tutuldugundan toplam sureye eklenir
				
				if(toplamsure<=180){  //Toplam sure 180 dk dan kucukse ekrana bastýrýlýr
				   
				   printf("\n\tÝçerik%.0f ",icerikler[m][4]); //Once icerik numarasi bastýrýlýr
		           printf(" Süre:%.0fdk ",icerikler[m][0]);    //Sure ekrana bastirilir      
		           printf(" Memnuniyet:%.0f\n",icerikler[m][1]);   //ve son olarak memnuniyet suresi ekrana bastýrýlýr                                   
								}                
			  else     //Toplam sure 180 'i gectiginde q bir artýrýlýr ve döngüden cikilir          
			       q++;                 
			                          }
				              }	 
			
			 
		
		
		max=0; //Kullanýcýya her icerik verildikten sonra max deger sýfýrlanýr karsýlastýrmada problem olmamasi icin
		
		
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

