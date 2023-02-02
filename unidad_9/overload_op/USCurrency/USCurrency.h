#ifndef __USCURRENCY_H__
#define __USCURRENCY_H__

#include <iostream>

class USCurrency {
        int dollars;
        int cents;
    public:        
        friend USCurrency operator+(const USCurrency &o , const USCurrency &i);
        friend std::ostream& operator<<(std::ostream& output, const USCurrency &o);
        USCurrency(int d=0, int c=0) :
                dollars{d}, cents{c}{}

        /*USCurrency operator+(const USCurrency &o){
            USCurrency tmp={0,0};
            tmp.cents = this->cents + o.cents;
            tmp.dollars = this->dollars + o.dollars;
            if (tmp.cents>=100){
                tmp.dollars+=1;
                tmp.cents-=100;
            }
            return tmp;
        }*/
        
        /*
        std::ostream& operator<<(std::ostream& output){
            output<<"$"<<this->dollars<<"."<<this->cents;
            return output;
        }*/

};

USCurrency operator+(const USCurrency &o , const USCurrency &i){//UwU
    USCurrency tmp={0,0};
    tmp.cents = i.cents + o.cents;
    tmp.dollars = i.dollars + o.dollars;
    if (tmp.cents>=100){
        tmp.dollars+=1;
        tmp.cents-=100;
    }
    return tmp;
}


std::ostream& operator<<(std::ostream& output, USCurrency &o){
    output<<"$"<<o.dollars<<"."<<o.cents;
    return output;
}

#endif