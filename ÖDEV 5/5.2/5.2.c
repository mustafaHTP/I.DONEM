/*odev5.2.c
 * 
 * Mustafa Hatipoğlu
 * 
 * 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int array1 [10] = {5,9,11,17,21,29,44,47,59,66}; //Bir global int dizi atıyoruz



bool binarysearch (int aranan){
    
    
    int baslangic=-1; //Aslinda 10 ve -1 diye bir dizinin elemani yok fakat bunu yapmazsak dizinin 0 ve 9 indisli elemanlari ariyamiyoruz
    int son=10;       
    int ariyan;     //Dizinin o an hangi elemana bakacagini ayarlamak için bu degiskeni kullanıyoruz
    int bulundu=0;   //Bu değişkeni sayiyi bulup bulmadigimizi anlamak icin kullaniyoruz
    
    for(int i=0;i<=0;i--){       
        
        ariyan=(son+baslangic)/2;   //aranan sayinin o anki dizinin elemanindan kucuk veya buyuk olma durumune gore surekli aranacak bolgeyi yarıya indiriyoruz
        
        if(array1[ariyan]==aranan){
           i=aranan;  //eger sart saglanmıssa aranan sayıyı i ye atiyarak donguyu sonlandiriyoruz
           bulundu=1; 
           printf("%d sayisi bulundu.....",aranan); 
           return true;
                  
           }
   else if(array1[ariyan]>aranan) 
            son=ariyan;    //eger aranan sayi o anki indise gore dizinin elemanindan kucukse ariyan degiskenine son degerini atayıp aranacak bolgenin ust sinirini belirliyoruz
       
   else if(array1[ariyan]<aranan)  
       
            baslangic=ariyan;  //eger aranan sayi o anki indise gore dizinin elemanindan buyukse ariyan degiskenine baslangic degerini atayıp aranacak bolgenin alt sinirini belirliyoruz
        
        
        }

    if(bulundu==0)
       printf("%d sayisi dizide bulunamadi...",aranan);
       return false;
}

int main()
{

    int hedef = 5;
    
    int result = binarysearch(hedef);
    printf("\naranilan rakam : %d",result);
    
    return 0;
}

