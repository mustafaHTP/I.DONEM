/*
 * Bu program kullanicidan alinan degere gore ucgen bastırır
 * 
 * Mustafa Hatipoğlu
 * */

#include <stdio.h>

int main()
{
    
    int a,b,k;
    
    printf("Lutfen bir tamsayi giriniz: ");
    scanf("%d",&a);
    
    /*b'yi 1 den başlatıp kullanıcın verdigi degere kadar donduruyoruz 
      yani bu dongu ucgenın kac satır olacagını ayarlar*/
    for(b=1;b<=a;b++){ 	
        for(k=0;k<b;k++)//k'ya sifir atayip kacinci satirda kac defa yildiz bastiracagimizi belirliyoruz			                 			
              printf("*");	

        printf("\n");			
                     }
         
    for(b=a;b>1;b--){ //1 satir ortak oldugu icin ucgende b'yi a'ya esitleyip 1 eksik donduruyoruz 	
        for(k=1;k<b;k++)		
            printf("*");			
                          
            printf("\n");
    }
    
    return 0;
}
