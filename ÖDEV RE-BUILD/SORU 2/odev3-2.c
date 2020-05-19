/*
 * 100 - 400 arasindaki butun rakamlari tek olan sayilari bulur
 * 
 * Mustafa Hatipoğlu

*/
#include <stdio.h>

int main()
{
	
	int i,j,teksayisi=0,basamakdegeri=0,originalnumber=0,realnumber;
	
	for(i=100;i<400;i++){
		
		originalnumber=i;
		realnumber=i;
		j=0;
		while(j<3){
		
		   basamakdegeri=i%10;
		   
		   if(basamakdegeri%2!=0){
		      i/=10;
		      j++;
					   }
		
	     else   
		       
		       break;
	      
	      i=originalnumber;
			            }
			 	
			 	if(j==3){
			 	   teksayisi++;
			 	   printf("%d %d\n",realnumber,teksayisi);	   
					    }
			   
			        } 
			
			
return 0;

  }
	
	
	

