#include <Adafruit_NeoPixel.h>

#define PIN 2	 // input pin Neopixel is attached to

#define NUMPIXELS      150 // number of neopixels in strip

#define mic A0

#define a2019 3
#define a2020 4
#define a2021 5
#define a2022 6

#define car2019 9.39
#define car2020 5.61
#define car2021 12.75
#define car2022 7.16

#define bra2019 5.8
#define bra2020 4.0
#define bra2021 3.1
#define bra2022 3.1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

int riskCar = 0;
int riskBra = 0;

int bloqueador = 0;
int oldNoise = 0;

void setup() {
  Serial.begin(9600);
  pinMode(mic, INPUT);
  pinMode(a2020, INPUT_PULLUP);
  pinMode(a2021, INPUT_PULLUP);
  pinMode(a2022, INPUT_PULLUP);
  // Initialize the NeoPixel library.
  pixels.begin();
}

void loop() {
  idleBehaviour();
	int i = 0;

  for (i=0; i < NUMPIXELS; i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    delay(1);
    pixels.show();
  }
  for (i=0; i < (riskBra * NUMPIXELS)/riskCar; i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    delay(1);
    pixels.show();
  }
}

void showNoise(int noise){
  if(noise >= oldNoise){
  	for (int i=oldNoise-250; i < noise-250; i++) {
    	pixels.setPixelColor(i, pixels.Color(0, 0, 255));
  	}
    	pixels.show();

  }else{
  	for (int i=oldNoise-250; i > noise-250; i--) {
    	pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  	}
    pixels.show();
  }
}

void idleBehaviour(){

  int counter = 0;
  int noise = 0;
  
  while(1){
    if(!bloqueador){
      noise = analogRead(mic);
      showNoise(noise);
      oldNoise = noise;
    }
      oldNoise = noise;
    if(counter == 15000){
      counter = 0;
      if(bloqueador){
      	clean();
      	bloqueador = 0;
      }
    }
    if(digitalRead ( a2019 ) == HIGH){
      	clean();
    	riskCar = car2019;
      	riskBra = bra2019;
        bloqueador = 1;
      	break;
    }
    if(digitalRead ( a2020 ) == HIGH){
      	clean();
    	riskCar = car2020;
      	riskBra = bra2020;
        bloqueador = 1;
      	break;
    }
    if(digitalRead ( a2021 ) == HIGH){
    	clean();
      	riskCar = car2021;
      	riskBra = bra2021;
        bloqueador = 1;
      	break;
    }
    if(digitalRead ( a2022 ) == HIGH){
    	clean();
      	riskCar = car2022;
      	riskBra = bra2022;
        bloqueador = 1;
      	break;
    }
    delay(1);
    counter ++;
  }
}

void delay_button(){
  int counter = 0;
  while(counter < 150){
    delay(200);
    counter++;
    if(counter == 150){
      counter = 0;
      clean();
      break;
    }
  }
}

void clean(){
  for (int i=0; i < NUMPIXELS; i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0));
  }
  pixels.show();
}
