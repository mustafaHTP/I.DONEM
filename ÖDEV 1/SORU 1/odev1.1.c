/* Bu program a��rl�kl� not ortalamas�n� hesaplar 
 *Mustafa Hatipo�lu
 */

#include <stdio.h> //standart giri�-��k�� i�lemlerini ger�ekle�tiren C k�t�phanesidir


int main () { //main fonksiyonunu ba�lat�r

     float Turkce,AKTS1,notT,Matematik,AKTS2,notM,Fizik,AKTS3,notF,Biyoloji,AKTS4,notB,Kimya,AKTS5,notK,Ortalama; //Burada fonksiyonlarda kullan�lacak de�i�kenlerin haf�zada yerini ay�r�yoruz 

     
     printf("Lutfen ders notlarinizi giriniz\n\n\aTurkce Notu: "); //"\n" imleci alt sat�ra indirir
     scanf("%f",&notT); //kullan�c�dan bir say� al�r ve �nceden tan�mlanm�� olan notT nin yerine yazar
     printf("\aTurkce Akts: "); //ekrana "T�rk�e Akts:" ��kt�s� verir
     scanf("%f",&AKTS1);
     
     Turkce=AKTS1*notT;//"Akts1*notT" yi Turkce'ye at�yoruz
     
     
     
     
     printf("\n\aMatematik Notu: "); //"\a" ses ��kar�r
     scanf("%f",&notM);
     printf("\aMatematik Akts: ");
     scanf("%f",&AKTS2);
     
     Matematik=AKTS2*notM;
     
     
     printf("\n\aFizik Notu: ");
     scanf("%f",&notF);
     printf("\aFizik Akts: ");
     scanf("%f",&AKTS3);
     
     Fizik=AKTS3*notF;
     
     
     
     printf("\n\aBiyoloji Notu: ");
     scanf("%f",&notB);
     printf("\aBiyoloji Akts: ");
     scanf("%f",&AKTS4);
     
     Biyoloji=AKTS4*notB; 
     
     
     printf("\n\aKimya Notu: ");
     scanf("%f",&notK);
     printf("\aKimya Akts: ");
     scanf("%f",&AKTS5);
     
     Kimya=AKTS5*notK;	 
     
     
     Ortalama=(Turkce+Matematik+Fizik+Biyoloji+Kimya)/(AKTS1+AKTS2+AKTS3+AKTS4+AKTS5); /*burada kullan�cadan al�nan giri�lerin hepsini kullanarak , 
                                                                                        *ortalamay� hesaplayacak ifadeyi �nceden haf�zada yerini ay�rd���m�z "Ortalama" ya at�yoruz*/
     
     printf("\n\aOrtalama: %0.2f",Ortalama);//ekrana "Ortalama: " ��kt�s�n� verir
     
     return 0;
     
 }
