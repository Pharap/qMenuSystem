// required for "PROGMEM"
#include <avr/pgmspace.h>

// texts for menus

const char itmBack[] PROGMEM = "< Back";
const char itmOn[] PROGMEM = "On";
const char itmOff[] PROGMEM = "Off";
const char itmEnabled[] PROGMEM = "Enabled";
const char itmDisabled[] PROGMEM = "Disabled";

const char itmRoot[] PROGMEM = "Root menu";
const char itmSubmenu1[] PROGMEM = "Submenu 1";
const char itmSubmenu2[] PROGMEM = "Submenu 2";
const char itmSubmenu3[] PROGMEM = "Submenu 3";
const char itmMessageBox[] PROGMEM = "Message box";
const char itmItem1[] PROGMEM = "Item 1";
const char itmItem2[] PROGMEM = "Item 2";
const char itmItem3[] PROGMEM = "Item 3";
const char itmItem4[] PROGMEM = "Item 4";
const char itmItem5[] PROGMEM = "Item 5";

////////////////////////////////////////////////////////////////
// menus - first item is menu title and it does not count toward cnt

const char * mnuRoot[] PROGMEM = {
  itmRoot,
  itmSubmenu1,itmSubmenu2,itmSubmenu3,itmMessageBox};
const int cntRoot PROGMEM = 4;

const char * mnuSubmenu1[] PROGMEM = {
  itmSubmenu1,
  itmItem1,itmItem2,itmItem3,itmItem4,itmItem5,itmBack};
const int cntSubmenu1 PROGMEM = 6;

const char * mnuSubmenu2[] PROGMEM = {
  itmSubmenu2,
  itmOn,itmOff,itmBack};
const int cntSubmenu2 PROGMEM = 3;

const char * mnuSubmenu3[] PROGMEM = {
  itmSubmenu3,
  itmEnabled,itmDisabled,itmBack};
const int cntSubmenu3 PROGMEM = 3;




