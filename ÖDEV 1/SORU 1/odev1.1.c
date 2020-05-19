/* Bu program aðýrlýklý not ortalamasýný hesaplar 
 *Mustafa Hatipoðlu
 */

#include <stdio.h> //standart giriþ-çýkýþ iþlemlerini gerçekleþtiren C kütüphanesidir


int main () { //main fonksiyonunu baþlatýr
	
	
	
	
	 float Turkce,AKTS1,notT,Matematik,AKTS2,notM,Fizik,AKTS3,notF,Biyoloji,AKTS4,notB,Kimya,AKTS5,notK,Ortalama; //Burada fonksiyonlarda kullanýlacak deðiþkenlerin hafýzada yerini ayýrýyoruz 

	 
	 printf("Lutfen ders notlarinizi giriniz\n\n\aTurkce Notu: "); //"\n" imleci alt satýra indirir
	 scanf("%f",&notT); //kullanýcýdan bir sayý alýr ve önceden tanýmlanmýþ olan notT nin yerine yazar
	 printf("\aTurkce Akts: "); //ekrana "Türkçe Akts:" çýktýsý verir
	 scanf("%f",&AKTS1);
	 
	 Turkce=AKTS1*notT;//"Akts1*notT" yi Turkce'ye atýyoruz
	 
	 
	 
	 
	 printf("\n\aMatematik Notu: "); //"\a" ses çýkarýr
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
	 
	 
	 Ortalama=(Turkce+Matematik+Fizik+Biyoloji+Kimya)/(AKTS1+AKTS2+AKTS3+AKTS4+AKTS5); /*burada kullanýcadan alýnan giriþlerin hepsini kullanarak , 
																						*ortalamayý hesaplayacak ifadeyi önceden hafýzada yerini ayýrdýðýmýz "Ortalama" ya atýyoruz*/
	 
	 printf("\n\aOrtalama: %0.2f",Ortalama);//ekrana "Ortalama: " çýktýsýný verir
	 
	 return 0;
	 
 }
