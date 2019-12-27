#include "tenx_TM57FA40.h"
int main()
{
        
        
        adcsel = 0x7;
        pde     = 0x00;
        npbpu   = 0x01;
        pdd    = 0x1;
        
        nadc_ie = 7f;
         R0C  = 0x10; //adc conversion clock//divided by 128
         while(1)
         {
         adcstart = 1;
         while(adcstart);
         }
         
         
}
        
