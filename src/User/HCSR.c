#include "include.h"

void HCSR_Init(void){
    //������ʮ������ΪPORTB��32��ʼ
    GPIO_Init(PORTB, HCSR_1_TRIG-32, GPO, 0);          //������trig 
    GPIO_Init(PORTB, HCSR_1_ECHO-32, GPI, 0);          //������echo   
    GPIO_Init(PORTB, HCSR_2_TRIG-32, GPO, 0);          //������trig 
    GPIO_Init(PORTB, HCSR_2_ECHO-32, GPI, 0);          //������echo   
    GPIO_Init(PORTB, HCSR_3_TRIG-32, GPO, 0);          //������trig 
    GPIO_Init(PORTB, HCSR_3_ECHO-32, GPI, 0);          //������echo   
    GPIO_Init(PORTB, HCSR_4_TRIG-32, GPO, 0);          //������trig 
    GPIO_Init(PORTB, HCSR_4_ECHO-32, GPI, 0);          //������echo   
    GPIO_Init(PORTB, HCSR_5_TRIG-32, GPO, 0);          //������trig 
    GPIO_Init(PORTB, HCSR_5_ECHO-32, GPI, 0);          //������echo   
   
}

//TODO
uint32 get_distance(uint8 index,uint32 cnt){
    sensor[index].
    
    return (uint32)cnt*(331.4+0.607*20)/2000;
}


void HCSR_pull_trig(void){
    GPIO_Ctrl(PORTB, HCSR_TRIG, 1);
    LPTMR_delay_us(20);
    
    GPIO_Ctrl(PORTB, HCSR_TRIG, 0);

}