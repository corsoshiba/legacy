#define wait myWait
#define random myRandom
#ifndef AVR
extern unsigned char joystick;
#	define PINB joystick
#	define PORTB joystick
#endif
void myWait(unsigned int ms);

