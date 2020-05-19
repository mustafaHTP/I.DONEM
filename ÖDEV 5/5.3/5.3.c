/*odev5.3.c
 * 
 * Mustafa HATİPOĞLU
 * 
 * 
 */


#include <stdio.h>
#include <string.h>  //strlen fonksiyonu icin bu kutuphaneyi ekliyoruz


char dizi [] = {"KULLUK"} ;      




int uzunluk (char xmp[]){
	
	int boyut = strlen(xmp); //Burada dizinin boyutunu hesaplıyoruz

	    return boyut;
	}

int esitmi (char r[],int i,int size){
  
	    //?
	if (r[i]==r[size])	{  
	    
	    return 1*esitmi(r,i+1,size-1);} 
   
	else 
	    return -1;
	
	}



int main()
{
	int length = uzunluk(dizi); //Dizinin boyutunu length degiskenine atiyoruz
	int x=0; //dizinin 0 inci elemanindan baslayarak aramasi icin bu degıskene 0 atiyoruz 
		
	
	printf("%d",esitmi(dizi,x,length-1));  //length ' den 1 cikariyoruz mesela dizi 6 harfli ise 5. elemandan aramaya baslasin diye
	
	
	return 0;
}

