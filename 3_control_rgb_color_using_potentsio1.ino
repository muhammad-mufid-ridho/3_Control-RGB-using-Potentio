// C++ code
//

// mendefinisikan PIN untuk LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

//mendefinisikan PIN Potensiometer
const int potPin = A0;

void setup()
{
  // Inisiasi PIN
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  //membaca nilai potensiometer
  int valuePot = analogRead(potPin);
  
  //menghitung nilai warna LED berdasarkan potensiometer
  int redValue = map(valuePot, 0, 1023, 0, 255);
  int greenValue = map(valuePot, 0, 1023, 255, 0);
  int blueValue = map(valuePot, 0, 1023, 127, 255);
  
  //mengatur warna LED berdasarkan nilai yang dihitung
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  
  delay(10);
}