/* Bu program kullanıcadan maddenin kaynama noktasını alarak maddenin ne olduğunu söyler
 * 
 * Mustafa Hatipoğlu
 */


#include <stdio.h>

int main()
{
    
    float k;
    
    printf("Lutfen kaynama noktasini giriniz: ");
    
    scanf("%f",&k);
    
       if (k>=98 && k<=102) //%5 lik hata payı ihtimaline karsi aralik belirliyoruz
       printf ("\nSu");
    
  else if (k>=339.15 && k<=374.5)
       printf("\nCiva");
   
  else if (k>=1127.6 && k<=1246.35)
       printf("\nBakir");
   
  else if (k>=2054.85 && k<=2271.15)     
       printf("\nGumus");
       
  else if (k>=2527 && k<=2793)
       printf("\nAltin");
       
  else  
       printf ("\n\a\aMaddeniz taninmadi")  ;      

    
    
    
    
    return 0;
}

