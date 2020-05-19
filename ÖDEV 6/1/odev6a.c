/* ODEV 6 SORU1
 * Mustafa Hatipoğlu
 * 
 */


#include <stdio.h>



//*array [ ] = { "hello" , "world " , "today" , "is" , " a " , "very" , "nice", "day" } ;
void ilkveson(char *point[],int b,char **ilk, char **son){
	
	
	
	for(int i=0;i<=5;i++){
		
		for(int j=0;j<b-1;j++){
			
			if(point[j][i]>point[j+1][i]){
			   son=&point[j];
			   ilk=&point[j+1];}
			else{
			   son=&point[j+1];
			   ilk=&point[j]; }	
			                }

		              }
	 
	
			   }





int main()
{
	
char *array [ ] = { "hello" , "world " , "today" , "is" , " a " , "very" , "nice", "day" } ;


char **minS,**maxS;
int boyut=8;

ilkveson( array , boyut , minS , maxS );



printf ( "The first word is %s and the last is %s\n",*minS,*maxS);



return(0);
}
	
	
	
	
	
	
	
	
	
	
	
	
	


