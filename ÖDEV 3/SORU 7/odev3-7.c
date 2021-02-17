/*
 * OBEB BULMA Programı
 * 
 * Mustafa hatipoğlu
 
 */

#include <stdio.h>


int main()
{
    
  int a,b,buyuk,kucuk,kalan,qbuyuk,qkucuk;	
    
  do{
    
    printf("\nLutfen iki adet pozitif tam sayi giriniz: ");
    scanf("%d%d",&a,&b);

     }while(a<0 || b<0 );
    
  if (a>b)
  {
    buyuk=a;
    kucuk=b; 
  }

  else if (b>a)
  {
    buyuk=b;
    kucuk=a;
  }    
  
  qbuyuk=buyuk;
  qkucuk=kucuk; 
    
  kalan=buyuk%kucuk;
      
  printf("OBEB(%d,%d)=",buyuk,kucuk);
    
  while(kalan!=0){
     
    buyuk=kucuk;
    kucuk=kalan;	
         
    kalan=buyuk%kucuk;   
    printf("OBEB(%d,%d)=",buyuk,kucuk);   
     
  } 
    
  printf("OBEB(%d,%d)",kucuk,kalan);
    
    
  printf("\nOBEB(%d,%d): %d ",qbuyuk,qkucuk,kucuk);

    return 0;
}
