/* Bu program mevcut değişkenleri ifadelerde yerine koyup sonucu bulur
 * Mustafa HATİPOĞLU
 */


#include <stdio.h>

int main() 

{
    int x,y,z;
    float a,b,c,d,e,f,g,h,i,j; //Öncelikle değişkenlere sayı türüne göre hafızada yer ayırıyoruz
    
    x=18; /*Değişkenlere değer atıyoruz*/
    y=3;
    z=-3;
    
    a=x+y*z;
    b=2*x+4-(y-z);
    c=x/y+z;
    d=x%(y*x);
    e=x/z;
    f=x%z+1;
    g=x+y/z;
    h=x*(y/z);
    i=(x*z)%y-1;
    j=x*(z%y);
    
    printf("x+y*z: %f\t\a",a); // "\t" imleci 4 birim kaydırır
    printf("\n\n2*x+4-(y-z): %f\t\a",b); // "\a" ses çıkarır
    printf("\n\nx/y+z: %f\t\a",c);
    printf("\n\nx%%(y*x): %f\t\a",d);
    printf("\n\nx/z: %f\t\a",e);
    printf("\n\nx%%z+1: %f\t\a",f);
    printf("\n\nx+y/z: %f\t\a",g);
    printf("\n\nx*(y/z): %f\t\a",h);
    printf("\n\n(x*z)%%y-1: %f\t\a",i);
    printf("\n\nx*(z%%y): %f\t\a",j);
  


	
	return 0;
}

