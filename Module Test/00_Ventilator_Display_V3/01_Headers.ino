
#include <Adafruit_GFX.h> 
#include <TouchScreen.h>



#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;
#include <TouchScreen.h>
#define MINPRESSURE 200
#define MAXPRESSURE 1000

#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

const int XP = 6, XM = A2, YP = A1, YM = 7; //ID=0x9341
const int TS_LEFT = 907, TS_RT = 136, TS_TOP = 942, TS_BOT = 139;

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

Adafruit_GFX_Button on_btn, off_btn;


#define TS_MINX 115 //min/max values for touchscreen
#define TS_MINY 124 //!!!THIS IS UNIQUE FOR EVERY TOUCHSCREEN!!!
#define TS_MAXX 914 
#define TS_MAXY 934

#define MINPRESSURE 10 //min/max pressure for touchscreen
#define MAXPRESSURE 1000


// ---------------- MOTOR HEADERS-------------------------//
// THESE ARE MOTOR CONTROLLER LIBRARY HEADERS
#include <Wire.h>
#include <Adafruit_ADS1015.h>

 Adafruit_ADS1115 ads(0x48);  /* Use this for the 16-bit version */
  Adafruit_ADS1115 ads2(0x49); 
 
#define RPWM          12 // define pin 3 for RPWM pin (output)
#define R_EN          23 // define pin 2 for R_EN pin (input)
#define R_IS          25 // define pin 5 for R_IS pin (output)

#define LPWM          13 // define pin 6 for LPWM pin (output)
#define L_EN          27 // define pin 7 for L_EN pin (input)
#define L_IS          29 // define pin 8 for L_IS pin (output)

#define CW            1 //do not change
#define CCW           0 //do not change
#define debug         0 //change to 0 to hide serial monitor debugging infornmation or set to 1 to view



#define startbuttonpin  26

#include <RobojaxBTS7960.h>
RobojaxBTS7960 motor(R_EN,RPWM,R_IS, L_EN,LPWM,L_IS,debug);
