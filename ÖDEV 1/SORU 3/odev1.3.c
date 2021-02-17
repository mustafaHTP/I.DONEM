/*
 * Bu program kullan�cadan yar��ap ve y�kseklik de�erini alarak koninin hacmini hesaplar 
 *
 * Mustafa HAT�PO�LU
 */


#include <stdio.h>


int main() {
    

int r,h; //yar��ap ve y�kseklik de�i�kenlerini tam say� olarak haf�zada yer ay�r�yoruz
float Hacim; //Hacim de�i�kenini ondal�k say� olarak haf�zada yer ay�r�yoruz


printf("Lutfen koninin yaricapinini giriniz: \n\n"); //"\n" escape karakteri imleci bir alt sat�ra indirir
scanf("%d",&r); //Kullan�c�dan yar��ap de�erini al�r

printf("\nLutfen koninin yuksekligini giriniz: \n\n");
scanf("%d",&h); 

Hacim=(3.14*r*r*h)/3; //Koninin hacmini bulmam�z� sa�layacak form�l� "Hacim" de�i�kenine at�yoruz
printf("\nHacim:  %f\a",Hacim); //Buradaki "\a" ses ��kar�r

return 0;

}
