/*
 * Sayi tahmin programi
 * 
 * Mustafa hatipoğlu
 *  */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    
    srand(time(NULL));   //bilgisayarin saatine göre bir sayı uretir
    
    int guess,i;
    int n = rand()%101;  //aranacak sayimizi n degiskenine atiyoruz
    char devam;  //bu degisken ile kullanicinin devam etmek isteyip istemedigini anliyacagiz
    
    do{	
    
    
    printf("\nLutfen N sayisini tahmin etmek icin 0-100 arasinda bir sayi giriniz: ");
    
      do{
        
        scanf("%d",&guess);
        
        if(guess>n){
           printf("\nSayidan buyuk bir deger girdiniz: ");
           printf("\nLutfen tekrar N sayisini tahmin etmek icin 0-100 arasinda bir sayi giriniz: ");
                   }
   
   
   
        else if(guess<n){
           printf("\nSayidan kucuk bir deger girdiniz");	   
           printf("\nLutfen tekrar N sayisini tahmin etmek icin 0-100 arasinda bir sayi giriniz: ");
                   }
    
        }while(guess!=n);
            
        printf("Tebrikler sayiyi buldunuz...\n");
        printf("Tekrar oynamak ister misiniz ? [0/1]");
        scanf(" %c",&devam);
        
        if(devam=='H' || devam=='h')
           i++;
            
      
           
        }while(i==0);
         
    
    return 0;
}
