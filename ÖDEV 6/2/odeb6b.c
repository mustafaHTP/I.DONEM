/*ODEV 6 SORU2
 * 
 * Mustafa Hatipoğlu 
 * 
 */

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



void life(int x){
    
    
        printf("\n");
        printf("\t\t\t\t         *****  *****    \n");
        printf("\t\t\t\t        ******  ******   \n");
        printf("\t\t\t\t       ****************  \n"); 
        printf("\t\t\t   		******%d ******   \n",x);
        printf("\t\t\t	 	 ************    \n");
        printf("\t\t\t  		  **********     \n");
        printf("\t\t\t		   ********      \n");
        printf("\t\t\t 	            ******       \n");
        printf("\t\t\t\t             ****        \n");
        printf("\t\t\t\t              **         \n");
     
    }



int main()
{
    
    char *kelimeler[]={"harita", "oda", "mehmetcik", "zar", "muhendis", "kabak", "bilgisayar", "sandalye", "karıncık", "kolay"};
    
    srand(time(NULL));
    int z = rand() %10;
    int uz = strlen (kelimeler[z]);
    int fail=0;
    int success=0;
    char g;
    int heart=uz;
    char *arr=kelimeler[z];
    
    char bos[uz];
    
    for (int b=0;b<uz;b++)
            bos[b]='_';
    
    
    
    life(uz);
    
    
    printf("ADAM ASMACA OYUNU BASLAMISTIR...\n\n\n");
    
    
    
    //harita","oda","mehmetcik","zar","muhendis","kabak","bilgisayar","sandalye", "karıncık","kolay
    
    for (int i=0;i<uz;i++){
         
         printf("\nLutfen bir harf giriniz: ");
         scanf(" %c",&g);
         
         for (int j=0;j<uz;j++){
             
             if(g==arr[j])
                bos[j]=g;
                fail++;
             
        }	
        
        if(fail==0)	               
            printf("\nHarf yoktur...\n");   
        
        
        fail=0;
        
        
        for (int s=0;s<uz;s++)
            printf("%c",bos[s]);
        
        heart--;
        life(heart);

    }
    
    
    //BASARIYA BURADA BAKIYORUZ
    
    for(int t=0;t<uz;t++){
        
        if(bos[t]==arr[t])
           success++;	
        
        }
    
    if(success==uz)
       printf("\nTebrikler Basardiniz...   :)");
       
    else
       printf("\nBasaramadiniz...... :(");
    
return 0;
}

