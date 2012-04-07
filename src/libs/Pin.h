#ifndef PIN_H
#define PIN_H

//#include "mbed.h" //Required for LPC_GPIO* . can probably be found in one othe the files mbed.h includes. TODO
//#include "../gcc4mbed/external/mbed/LPC1768/LPC17xx.h"
#include "libs/Kernel.h"
#include "libs/utils.h"
#include <string>

class Pin{
    public:
        Pin(){ }

        Pin* from_string(std::string value){
//            LPC_GPIO_TypeDef* gpios[5] ={LPC_GPIO0,LPC_GPIO1,LPC_GPIO2,LPC_GPIO3,LPC_GPIO4};
//            this->port = gpios[ atoi(value.substr(0,1).c_str()) ];
//            this->inverting = ( value.find_first_of("!")!=string::npos ? true : false );
//            this->pin  = atoi( value.substr(2, value.size()-2-(this->inverting?1:0)).c_str() );
//            return this;
        }

        inline Pin*  as_output(){
//            this->port->FIODIR |= 1<<this->pin;
//            return this;
        }  

        inline Pin*  as_input(){
//            this->port->FIODIR &= ~(1<<this->pin);
//            return this;
        }  

        inline bool get(){
//            if( this->inverting ){
//               return ~(( this->port->FIOPIN >> this->pin ) & 1);
//            }else{
//               return  (( this->port->FIOPIN >> this->pin ) & 1);
//            }
        }

        inline void set(bool value){
//            // TODO : This should be bitmath
//            if( this->inverting ){ value = !value; }
//            if( value ){
//                this->port->FIOSET = 1 << this->pin;
//            }else{
//                this->port->FIOCLR = 1 << this->pin;
//            }
        }

//        bool inverting;
//        LPC_GPIO_TypeDef* port;
//        char pin;
};




#endif
