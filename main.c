#include "tenx_TM57FA40.h"


//--------------------------------------
//main function
void delay(int n)
{
  int i=0;
  for(i=0;i<4000*n;i++);
  
}
void main(void)
{
       // pad = 0x02;  //output pa1 as data reg output
        pae = 0x02;

        while(1)
        {
          pa1 ^=1; 
          delay(100);
         
        }
        
        
        
}
//--------------------------------------
        