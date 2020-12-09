// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 6 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 40 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels


int numeroBoca = 1;

void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.clear(); // Set all pixel colors to 'off'


  Serial.begin(115200);
}

void loop() {

  while (Serial.available() == 0) {}          //Wait for user input
  numeroBoca = Serial.parseInt();


  /*
    // The first NeoPixel in a strand is #0, second is 1, all the way up
    // to the count of pixels minus one.
    for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(255, 255, 0));

      pixels.show();   // Send the updated pixel colors to the hardware.

      delay(DELAYVAL); // Pause before next pass through loop
    }
  */

  switch (numeroBoca) {
    case 0 :
      pixels.clear();
      pixels.setPixelColor(0, pixels.Color(0, 150, 0));
      pixels.setPixelColor(1, pixels.Color(0, 150, 0));
      pixels.setPixelColor(2, pixels.Color(0, 150, 0));
      pixels.setPixelColor(3, pixels.Color(0, 150, 0));
      pixels.setPixelColor(4, pixels.Color(0, 150, 0));
      pixels.setPixelColor(5, pixels.Color(0, 150, 0));
      pixels.setPixelColor(6, pixels.Color(0, 150, 0));
      pixels.setPixelColor(7, pixels.Color(0, 150, 0));
      pixels.setPixelColor(8, pixels.Color(0, 150, 0));
      pixels.setPixelColor(9, pixels.Color(0, 150, 0));
      pixels.setPixelColor(10, pixels.Color(0, 150, 0));
      pixels.setPixelColor(11, pixels.Color(0, 150, 0));
      pixels.setPixelColor(12, pixels.Color(0, 150, 0));
      pixels.setPixelColor(13, pixels.Color(0, 150, 0));
      pixels.setPixelColor(14, pixels.Color(0, 150, 0));
      pixels.setPixelColor(15, pixels.Color(0, 150, 0));
      pixels.setPixelColor(16, pixels.Color(0, 150, 0));
      pixels.setPixelColor(17, pixels.Color(0, 150, 0));
      pixels.setPixelColor(18, pixels.Color(0, 150, 0));
      pixels.setPixelColor(19, pixels.Color(0, 150, 0));
      pixels.setPixelColor(20, pixels.Color(0, 150, 0));
      pixels.setPixelColor(21, pixels.Color(0, 150, 0));
      pixels.setPixelColor(22, pixels.Color(0, 150, 0));
      pixels.setPixelColor(23, pixels.Color(0, 150, 0));

      pixels.show();
      break;

    case 1 :
      pixels.clear();
      pixels.setPixelColor(24, pixels.Color(0, 150, 0));
      pixels.setPixelColor(25, pixels.Color(0, 150, 0));
      pixels.setPixelColor(26, pixels.Color(0, 150, 0));
      pixels.setPixelColor(27, pixels.Color(0, 150, 0));
      pixels.setPixelColor(28, pixels.Color(0, 150, 0));
      pixels.setPixelColor(29, pixels.Color(0, 150, 0));
      pixels.setPixelColor(30, pixels.Color(0, 150, 0));
      pixels.setPixelColor(31, pixels.Color(0, 150, 0));
      pixels.setPixelColor(32, pixels.Color(0, 150, 0));
      pixels.setPixelColor(33, pixels.Color(0, 150, 0));
      pixels.setPixelColor(34, pixels.Color(0, 150, 0));
      pixels.setPixelColor(35, pixels.Color(0, 150, 0));
      pixels.setPixelColor(36, pixels.Color(0, 150, 0));
      pixels.setPixelColor(37, pixels.Color(0, 150, 0));
      pixels.setPixelColor(38, pixels.Color(0, 150, 0));
      pixels.setPixelColor(39, pixels.Color(0, 150, 0));

      pixels.show();
      break;
  }
}
