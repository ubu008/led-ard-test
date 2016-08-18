#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 27
#define NUM_BREAT 15
// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
#define CLOCK_PIN 13
CRGB leds[NUM_LEDS];

float breatV[] = {
        17, 12, 11, 9.75, 8, 7.5, 6.75, 6, 5.5, 5, 4.5,
        4, 3.75, 3.75, 4, 4.25, 4.25, 4, 4, 3.75, 3.75,
        3.5, 3.25, 3.25, 3.5, 3.75, 5, 6, 8.5, 11, 13,
        15, 18, 20, 22.5, 24.5, 26.75, 28.5, 30.5, 32.25,
        33, 33.25, 33, 32, 28.75, 23, 20.5
};
void breat(/* arguments */) {
        /* code */
        int i;
        int k;
        for (i=0; i<46; i++) {
                for (k=0; k<NUM_LEDS; k++) leds[k] = CHSV(85,255, (int)((breatV[i] * 4)+50));
                FastLED.show();
                delay(100);
        };
}


// Define the array of leds


void setup() {

        FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
        // Turn the LED on, then pause
        int k;
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB::Red;
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB::Green;
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB::Blue;
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB(241,117, 183);
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB(103,0, 0);
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB(255, 78, 48); //portland orang
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB(250, 196, 165); //wax flower
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB(0,106, 255);
        FastLED.show();
        delay(500);
        for (k=0; k<NUM_LEDS; k++) leds[k] = CRGB::Black;
        FastLED.show();
        delay(500);
        for (int j=0; j<NUM_BREAT; j++) breat();


}
