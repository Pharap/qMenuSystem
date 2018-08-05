#define _Digole_Serial_SPI_
#include <DigoleSerial.h>
#ifndef qMenuDisplay_h
#define qMenuDisplay_h

// Predeclare Arduino class
const __FlashStringHelper;

class qMenuDisplay
{
  public:
    qMenuDisplay(DigoleSerialDisp disp);
    qMenuDisplay();
    void Start();
    void Finish();
    void Title(const char text[]);
    void Title(const __FlashStringHelper * flashString);
    void Item(int index, const char text[]);
    void Item(int index, const __FlashStringHelper * flashString);
    void Highlight(int index);
    void MessageBox(const char text[]);
    void MessageBox(const __FlashStringHelper * flashString);
  private:
//    char tempBuffer[32];
};




#endif
