// Import all necessary libraries here
#include <FEHLCD.h>
#include <FEHUtility.h>
#include <FEHIO.h>

#define SLEEP 1.0

// Fill in the pin declarations
DigitalOutputPin green1(XXXX);
DigitalOutputPin yellow1(XXXX);
DigitalOutputPin red1(XXXX);
DigitalOutputPin dontWalk1(XXXX);
DigitalOutputPin walk1(XXXX);

DigitalOutputPin green2(XXXX);
DigitalOutputPin yellow2(XXXX);
DigitalOutputPin red2(XXXX);
DigitalOutputPin dontWalk2(XXXX);
DigitalOutputPin walk2(XXXX);

int main(){
	LCD.Clear();
	LCD.WriteLine("Waiting for touch.");

	XXXX // Declare variables
	while (XXXX) {
		// Screen is not being touched
	}
	while (XXXX) {
		// Screen is being touched
	}

	LCD.WriteLine("Starting!");
	
	while (true) {
		// North-South
		// Red -> Yellow -> Green -> Walk -> Don't Walk
		red1.Write(true);
		Sleep(SLEEP);
		red1.Write(false);
		yellow1.Write(true);
		Sleep(SLEEP);
		yellow1.Write(false);
		green1.Write(true);
		Sleep(SLEEP);
		green1.Write(false);
		walk1.Write(true);
		Sleep(SLEEP);
		walk1.Write(false);
		dontWalk1.Write(true);
		Sleep(SLEEP);
		dontWalk1.Write(false);

		// East-West
		// Red -> Yellow -> Green -> Walk -> Don't Walk
		red2.Write(true);
		Sleep(SLEEP);
		red2.Write(false);
		yellow2.Write(true);
		Sleep(SLEEP);
		yellow2.Write(false);
		green2.Write(true);
		Sleep(SLEEP);
		green2.Write(false);
		walk2.Write(true);
		Sleep(SLEEP);
		walk2.Write(false);
		dontWalk2.Write(true);
		Sleep(SLEEP);
		dontWalk2.Write(false);
	}
	return 0;
}