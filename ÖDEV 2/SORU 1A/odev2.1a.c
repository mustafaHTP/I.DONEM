/* Bu program kullanicidan 2 boyutlu Kartezyen koordinat sistemine gore 
 * bir noktanin X ve Y degerlerini alip, 
 * noktanin hangi ceyrekte oldugunu kullaniciya gosterir 
 

 Mustafa Hatipoğlu
 
  */

#include <stdio.h>

int main()
{
    float x,y;   //fonksiyonda kullanilacak degişkenler icin hafizada yer ayiriyoruz
     
    printf("Lutfen noktanin x koordinat degerini giriniz: ");
    scanf("%f",&x); //kullanicidan x degerini alıp onceden x icin ayrılmıs yere yazar 
        
    printf("\nLutfen noktanin y koordinat degerini giriniz: ");
    scanf("%f",&y);
     
        
    if ((x>0) && (y>0))    //kullanıcının girdigi degerlere baglı olusabilecek ihtimallere karsı if ve if else olusturuyoruz
    { 
        printf("\n(%.1f,%.1f) Noktasi 1.ceyrektedir",x,y);
            
    }	
      else if ((x<0) && (y>0))
    {
        
           printf("\n(%.1f,%.1f) Noktasi 2.ceyrektedir",x,y);
           
      }   	
      else if ((x<0) && (y<0))
    {
        
           printf("\n(%.1f,%.1f) Noktasi 3.ceyrektedir",x,y);
           
      } 
      else if ((x>0) && (y<0))
    {
        
           printf("\n(%.1f,%.1f) Noktasi 4.ceyrektedir",x,y);
           
      }   	      
      else if ((x==0) && (y==0))     
      {
                    
        printf("\n(%.1f,%.1f) Noktasi orjindedir",x,y);							
            
      } 
      else if ((x==0) && (y!=0))     
      {
         
           printf("\n(%.1f,%.1f) Noktasi x ekseni uzerindedir",x,y);
          
      }
      else if ((x!=0) && (y==0))   
      {
         
           printf("\n(%.1f,%.1f) Noktasi y ekseni uzerindedir",x,y);
          
      }
    
    return 0;
}

