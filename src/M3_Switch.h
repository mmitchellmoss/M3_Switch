/*
M3_Switch.h

This class is designed to represent a switch. It contains all debounce logic and returns information regarding if the switch was pressed or not.

Author: Mitch Moss
*/

#ifndef M3_Switch_897273787834_H
#define M3_Switch_897273787834_H



#include "Arduino.h"



class M3_Switch {
public:
    // Constructors.
    M3_Switch(int highOrLow, int pin);
    M3_Switch(int highOrLow, int pin, int debounceDelay);

    // Methods.
    bool isSwitchPressed();

 
private:
    // Private members.
    int m_switchPin { 0 };
    int m_debounceDelay { 50 };
    unsigned long m_debounceTimer { 0ul };
    int m_currentState { LOW };
    int m_lastState { LOW };
    int m_pressedState { HIGH };

    // Private methods
    void setHighOrLow(int highOrLow);

};




#endif