int bluePin = 12;
int greenPin = 11;
int redPin = 10;
int yellowPin = 9;
int RGBRedPin = 4;
int RGBGreenPin = 3;
int RGBBluePin = 2;

int bluePinState = 0;
int greenPinState = 0;
int redPinState = 0;
int yellowPinState = 0;


void setup() {
  // This is all setup code to tell the Arduino that each pin we've specified is being used for output!
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

void loop() {
  // THIS IS WHERE WE WILL PUT OUR CODE


}

/**
 * Can use the function below to set the colour of the RGB Led.
 * call the function and give it 3 values between 0 and 255.
 * like this -> setRGBColour(230, 80, 5);
 * Can also create a random colour by doing the line below:
 * setRGBColour(random(0, 255), random(0,255), random(0,255));
 */
void setRGBColour(int red, int green, int blue){
  analogWrite(RGBRedPin, red);
  analogWrite(RGBGreenPin, green);
  analogWrite(RGBBluePin, blue);
  
}

/**
 * Can use this function to switch the state of any of the 4 coloured LEDs
 * This function takes a single parameter, either "Red", "Green", "Blue", or "Yellow".
 * If the LED is on, this will turn it off, and if its off it will turn it on.
 * Can be called by going -> switchColour("Red")
 */
void switchColour(String colour){
  if(colour == "Red"){
    if(redPinState == 0){
      digitalWrite(redPin, HIGH);
      redPinState = 1;
    } else {
      digitalWrite(redPin, LOW);
      redPinState = 0;
    }
  } else if (colour == "Blue"){
    if(bluePinState == 0){
      digitalWrite(bluePin, HIGH);
      bluePinState = 1;
    } else {
      digitalWrite(bluePin, LOW);
      bluePinState = 0;
    }
    
  } else if (colour == "Green"){
    if(greenPinState == 0){
      digitalWrite(greenPin, HIGH);
      greenPinState = 1;
    } else {
      digitalWrite(greenPin, LOW);
      greenPinState = 0;
    }
    
  } else {
    if(yellowPinState == 0){
      digitalWrite(yellowPin, HIGH);
      yellowPinState = 1;
    } else {
      digitalWrite(yellowPin, LOW);
      yellowPinState = 0;
    }
  }
}
