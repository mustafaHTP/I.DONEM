/* Burada işlemlere değer atayıp sonuçları görürüz
 * Mustafa HATİPOĞLU
 */


#include <stdio.h>

int main()
{
	int a,b,c,d;
	
	a=(6/3)+4-5*6;
	
	b=(2*(5+6)-5)*6/6;
	
	c=(16%10/3);
	
	d=16+(5-6+-9);
	
	printf("\a(6/3)+4-5*6 sonucu:%d",a);//"\a" bip sesi çıkarır
	printf("\n\n\a(2*(5+6)-5)*6/6 sonucu:%d",b); 
	printf("\n\n\a(16%%10/3) sonucu:%d",c); // "\n" imleci yeni satıra geçirir
	printf("\n\n\a16+(5-6+-9) sonucu:%d",d);
	
	
	
	return 0;
}

