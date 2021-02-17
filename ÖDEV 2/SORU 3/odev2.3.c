/* Bu program Kullanıcıdan boy ve kilosunu alarak vücut kitle indeksini hesaplayarak 
 * hangi kategoride olduğunu söyler
 
 
 * Mustafa Hatipoğlu
  
 */


#include <stdio.h>

int main()
{
    
    float boy, kilo, VKE;
    
    printf ("Lutfen boyunuzu metre cinsinden giriniz(1.85 gibi) :  ");
    scanf  ("%f",&boy);
    
    printf ("\nLutfen kilonuzu kilogram cinsinden giriniz: ");
    scanf  ("%f",&kilo);
    
    VKE= kilo / (boy*boy);    //Vucut kitle endeksini veren denkelmi "VKE" ye atıyoruz
    
    
       if (VKE<18.5)
          printf("\nZayif");

  else if (VKE>=18.5 && VKE<=24.9)	   
          printf("\nNormal Kilolu");
  
  else if (VKE>=25 && VKE<=29.9)   
          printf("\nFazla Kilolu");

  else if (VKE>=30 && VKE<=39.9)
          printf("\nObez");
  
  else if (VKE>=40)
          printf("\nİleri derecede obez (morbid obez)");
          
                 
    
    
    return 0;
}

