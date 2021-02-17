/*odev 3-6.soru
 * 
 * Mustafa Hatipoğlu
 * 
 */
 
 /*Bir önceki ödevdeki Adam asmaca oyununu döngü kullanarak yapınız. Yazığınız program aşağıdaki
sözde koda uygun olmalıdır ve asla yüzlerce satır olmamalıdır.
//Pseudocode
Önce her kelime için harfleri bir değişkene atayınız.
Sonra kullanıcıdan 1-5 arası seçenek alınız
Kullanıcının girdiği seçeneğe göre aranan harflere kelimenin harflerini atayınız
Döngü başlatınız. (1-4 arasında her harf için)
- Harf alınız
- Girilen harf == aranan harf mi kontrol ediniz.*/
 
 
#include <stdio.h>


int main (){
    
    /*1.MASA
     *2.KASA
     *3.ARDA
     *4.ERİK
     *5.EZİK   
    */
    int sayino,life=0,basari=0,harfvar=0;
    char b1='_',b2='_',b3='_',b4='_';  //kullanicaya anlık tahminlerini gostermek icin 4 adet bosluk atiyoruz 
    char guess; //kullanıcıdan alınan harfleri bu degiskene atanacaktır
    
    do{    										
    printf("Lutfen 1-5 arasi sayi giriniz: ");    //kullanici 1-5 arasi sayi girmedigi surece bu donguye girecek
    scanf("%d",&sayino);
       }while(!(sayino>=1 && sayino <=5));
    

    printf("\n\nADAM ASMACA OYUNU BASLAMISTIR...\n\n");
    
    printf("%c %c %c %c\n",b1,b2,b3,b4);     //o anki durumu ekrana bastiriyoruz
    
    
    while(life<4){       //kullanicinin maksimum 4 hakkı vardır bu yuzden 4 defa donecek
    printf("Lutfen bir harf giriniz:  ");
    scanf(" %c",&guess);
    
    switch (sayino){      //kullanicidan alinan kelime numarasina gore o case e gider
        //masa
        case 1: 
        
                if(guess=='M' || guess=='m'){   //eger kullanici m harfini bilmisse 1.bosluga m atar ve harf var ve basariyi 1 artırır
                   b1='M';
                      basari++;	
                      harfvar++;               }
           
           else if(guess=='A' || guess=='a'){
                   b2='A';
                   b4='A'; 
                   basari+=2;    //a harfi 2 tane oldugu icin basariyi 2 artiririz          
                   harfvar++;               }
           
           else if(guess=='S' || guess=='s'){
                   b3='S';
                   basari++;
                   harfvar++;               }
           
           
                  
           break;
        //kasa
        case 2: 
             
                if(guess=='K' || guess=='k'){
                   b1='K';
                   basari++;
                   harfvar++;               }
           
           else if(guess=='A' || guess=='a'){
                   b2='A';
                   b4='A'; 
                   basari+=2;
                   harfvar++;               }
           
           else if(guess=='S' || guess=='s'){
                   b3='S';
                   basari++;
                   harfvar++;               }
           break;
         
        //arda
         case 3: 
             
                   if(guess=='A' || guess=='a'){
                      b1='A';
                      b4='A';                  
                      basari+=2;
                   harfvar++;               }
              
              else if(guess=='R' || guess=='r'){
                      b2='R';		        		                                   
                         basari++;
                   harfvar++; 				}
              
              else if(guess=='D' || guess=='d'){
                      b3='D';
                      basari++;
                   harfvar++;               }
              break;
           
           //erik
           case 4:
           
                 if(guess=='E' || guess=='e'){
                   b1='E';
                   basari++;
                   harfvar++;                }   
            
            else if(guess=='R' || guess=='r'){
                  b2='R';		        		                                   
                  basari++;
                  harfvar++;                 }
           
            else if(guess=='I' || guess=='i'){
                  b3='I';
                  basari++;
                  harfvar++;                 }
                                    
            else if(guess=='K' || guess=='k'){
                  b4='K'; 
                  basari++;
                  harfvar++;                 }
            break;
           
           //ezik
           case 5:
           
                 if(guess=='E' || guess=='e'){
                  b1='E';
                  basari++;
                  harfvar++;               	 }  
           
            else if(guess=='Z' || guess=='z'){
                  b2='Z';		        		                                   
                    basari++;
                  harfvar++;                 }
           
            else if(guess=='I' || guess=='i'){
                  b3='I';
                  basari++;
                  harfvar++;                 }
           
            else if(guess=='K' || guess=='k'){
                  b4='K'; 
                  basari++;
                  harfvar++;                 }
            break;
    
                                     }  

        if(harfvar==0)   //eğer harf var 0 ise ekrana "Harf yoktur !!" bastirir 
           printf("\nHarf yoktur !!\n");
        
           harfvar=0;  //if den sonra tekrar degiskeni sifirliyoruz
         
        
        printf("=================================================\n");
        printf("%c %c %c %c\n",b1,b2,b3,b4);
        
        life++; //kullanici 1 hakkini kullandigi icin life degiskeni 1 artiriyoruz
        
        }
    
    
      if(basari==4)  //eger basari 4 e esit ise basardiniz yazar 
         printf("\n.....Tebrikler Basardiniz.......");
    else
         printf("\n.....Tebrikler Kaybettiniz.......");
    
    
    return 0;
    
    }
