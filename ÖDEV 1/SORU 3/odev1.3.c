/*
 * Bu program kullanýcadan yarýçap ve yükseklik deðerini alarak koninin hacmini hesaplar 
 *
 * Mustafa HATÝPOÐLU
 */


#include <stdio.h>


int main() {
	

int r,h; //yarýçap ve yükseklik deðiþkenlerini tam sayý olarak hafýzada yer ayýrýyoruz
float Hacim; //Hacim deðiþkenini ondalýk sayý olarak hafýzada yer ayýrýyoruz


printf("Lutfen koninin yaricapinini giriniz: \n\n"); //"\n" escape karakteri imleci bir alt satýra indirir
scanf("%d",&r); //Kullanýcýdan yarýçap deðerini alýr

printf("\nLutfen koninin yuksekligini giriniz: \n\n");
scanf("%d",&h); 

Hacim=(3.14*r*r*h)/3; //Koninin hacmini bulmamýzý saðlayacak formülü "Hacim" deðiþkenine atýyoruz
printf("\nHacim:  %f\a",Hacim); //Buradaki "\a" ses çýkarýr

return 0;

}
