#include <iostream>
#include "king.hpp"

/*
Processor& Processor::operator=( const Processor& proc_obj ) 
{ if( this == &proc_obj ) return *this; 
mName_str = proc_obj.get_Name(); mBrand_str = proc_obj.get_Brand(); 
mFreqGhz_d = proc_obj.get_FreqGhz(); mNoCores_u8 = proc_obj.get_NoCores();
 mNoThreads_u8 = proc_obj.get_NoThreads();
  mTurboBoostLimit_d = proc_obj.get_TurboBoostLimit(); mCooler_b = proc_obj.get_Cooler(); 
  return *this; } */

King& King::operator=( const King &refKing){
    if(this != &refKing) {//without this verification there could be a self assignment
        delete this->servant;
        //servant=new King(*refKing.servant);
    }

    return *this;
}