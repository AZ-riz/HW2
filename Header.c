#include "Header.h"

void showM()
{
     int i , j , a;
     int row1=2, row2=7 , col1=3 , col2=8; 
    while(1){ 
     for(j=col1 ; j<col2 ; j++)
      {
      
       a=pow(2,j);
       
       if(j==3)
        {
          for(i=row1 ; i<row2 ; i++)
          {
           PORTA = pow(2,i);
            PORTB = ~a;
            delay_us(500);
          }
          
        }  
        
        if(j==4)
         {  PORTA = pow(2,row2-2);
           PORTB = ~a;
           
         }
         
         if(j==5)
         {
          PORTA = pow(2,row2-3);
          PORTB = ~a;
        
         } 
         
         if(j==6)
         {
           PORTA = pow(2,row2-2);
           PORTB = ~a;
         } 
         
         if(j==7)
         {
           for(i=row2-1 ; i>=row1 ; i--)
           {
             PORTA = pow(2,i);
             PORTB = ~a;
           }
         }
         
         }
         }
}