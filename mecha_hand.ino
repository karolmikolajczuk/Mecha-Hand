#include <SoftwareSerial.h>
#include <Servo.h>
Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;
SoftwareSerial Bluetooth(3, 4);
int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos; 
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos;
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50];
int speedDelay = 20;
int index = 0;
String dataIn = "";




void moveServo1() {
  // to sformatuj dane s1179.8 => na 179
  // czyli servo 1 ustaw na 179
  String dataInS = dataIn.substring(dataIn.indexOf("s1")+2, dataIn.length());
  int val = dataInS.toInt();

  // wyswietl wartosci
  Serial.print("Value to set servo1: ");
  Serial.println(val);

  // ustaw pozycje 
  servo1Pos = val;

  // jezeli poprzednia pozycja byla wieksza niz nowa
  if (servo1PPos > servo1Pos) {
    // zmien pozycje krok po kroku
    // czyli servo idzie na dol
    for ( int j = servo1PPos; j >= servo1Pos; j--) {
      // zmien pozycje
      servo01.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // jezeli poprzednia pozycja byla mniejsza niz nowa
  // czyli servo idzie do gory
  if (servo1PPos < servo1Pos) {
    // zmien pozycje krok po kroku
    for ( int j = servo1PPos; j <= servo1Pos; j++) {   
      // zmien pozycje
      servo01.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // ustaw nowa pozycje
  servo1PPos = servo1Pos;

}

void moveServo2() {
  // to sformatuj dane s1179.8 => na 179
  // czyli servo 2 ustaw na 179
  String dataInS = dataIn.substring(dataIn.indexOf("s2")+2, dataIn.length());
  int val = dataInS.toInt();

  // wyswietl wartosci
  Serial.print("Value to set servo2: ");
  Serial.println(val);

  // ustaw pozycje 
  servo2Pos = val;

  // jezeli poprzednia pozycja byla wieksza niz nowa
  if (servo2PPos > servo2Pos) {
    // zmien pozycje krok po kroku
    // czyli servo idzie na dol
    for ( int j = servo2PPos; j >= servo2Pos; j--) {
      // zmien pozycje
      servo02.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // jezeli poprzednia pozycja byla mniejsza niz nowa
  // czyli servo idzie do gory
  if (servo2PPos < servo2Pos) {
    // zmien pozycje krok po kroku
    for ( int j = servo2PPos; j <= servo2Pos; j++) {   
      // zmien pozycje
      servo02.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // ustaw nowa pozycje
  servo2PPos = servo2Pos;
}

void moveServo3() {
  // to sformatuj dane s1179.8 => na 179
  // czyli servo 3 ustaw na 179
  String dataInS = dataIn.substring(dataIn.indexOf("s3")+2, dataIn.length());
  int val = dataInS.toInt();

  // wyswietl wartosci
  Serial.print("Value to set servo3: ");
  Serial.println(val);

  // ustaw pozycje 
  servo3Pos = val;

  // jezeli poprzednia pozycja byla wieksza niz nowa
  if (servo3PPos > servo3Pos) {
    // zmien pozycje krok po kroku
    // czyli servo idzie na dol
    for ( int j = servo3PPos; j >= servo3Pos; j--) {
      // zmien pozycje
      servo03.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // jezeli poprzednia pozycja byla mniejsza niz nowa
  // czyli servo idzie do gory
  if (servo3PPos < servo3Pos) {
    // zmien pozycje krok po kroku
    for ( int j = servo3PPos; j <= servo3Pos; j++) {   
      // zmien pozycje
      servo03.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // ustaw nowa pozycje
  servo3PPos = servo3Pos;
}

void moveServo4() {
  // to sformatuj dane s1179.8 => na 179
  // czyli servo 4 ustaw na 179
  String dataInS = dataIn.substring(dataIn.indexOf("s4")+2, dataIn.length());
  int val = dataInS.toInt();

  // wyswietl wartosci
  Serial.print("Value to set servo4: ");
  Serial.println(val);

  // ustaw pozycje 
  servo4Pos = val;

  // jezeli poprzednia pozycja byla wieksza niz nowa
  if (servo4PPos > servo4Pos) {
    // zmien pozycje krok po kroku
    // czyli servo idzie na dol
    for ( int j = servo4PPos; j >= servo4Pos; j--) {
      // zmien pozycje
      servo04.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // jezeli poprzednia pozycja byla mniejsza niz nowa
  // czyli servo idzie do gory
  if (servo4PPos < servo4Pos) {
    // zmien pozycje krok po kroku
    for ( int j = servo4PPos; j <= servo4Pos; j++) {   
      // zmien pozycje
      servo04.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // ustaw nowa pozycje
  servo4PPos = servo4Pos;

  
}

void moveServo5() {
  // to sformatuj dane s1179.8 => na 179
  // czyli servo 5 ustaw na 179
  String dataInS = dataIn.substring(dataIn.indexOf("s5")+2, dataIn.length());
  int val = dataInS.toInt();

  // wyswietl wartosci
  Serial.print("Value to set servo5: ");
  Serial.println(val);

  // ustaw pozycje 
  servo5Pos = val;

  // jezeli poprzednia pozycja byla wieksza niz nowa
  if (servo5PPos > servo5Pos) {
    // zmien pozycje krok po kroku
    // czyli servo idzie na dol
    for ( int j = servo5PPos; j >= servo5Pos; j--) {
      // zmien pozycje
      servo05.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // jezeli poprzednia pozycja byla mniejsza niz nowa
  // czyli servo idzie do gory
  if (servo5PPos < servo5Pos) {
    // zmien pozycje krok po kroku
    for ( int j = servo5PPos; j <= servo5Pos; j++) {   
      // zmien pozycje
      servo05.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // ustaw nowa pozycje
  servo5PPos = servo5Pos;

  
}

void moveServo6() {
  // to sformatuj dane s1179.8 => na 179
  // czyli servo 6 ustaw na 179
  String dataInS = dataIn.substring(dataIn.indexOf("s6")+2, dataIn.length());
  int val = dataInS.toInt();

  // wyswietl wartosci
  Serial.print("Value to set servo6: ");
  Serial.println(val);

  // ustaw pozycje 
  servo6Pos = val;

  // jezeli poprzednia pozycja byla wieksza niz nowa
  if (servo6PPos > servo6Pos) {
    // zmien pozycje krok po kroku
    // czyli servo idzie na dol
    for ( int j = servo6PPos; j >= servo6Pos; j--) {
      // zmien pozycje
      servo06.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // jezeli poprzednia pozycja byla mniejsza niz nowa
  // czyli servo idzie do gory
  if (servo6PPos < servo6Pos) {
    // zmien pozycje krok po kroku
    for ( int j = servo6PPos; j <= servo6Pos; j++) {   
      // zmien pozycje
      servo06.write(j);
      // ustaw predkosc (opoznienie) zmian pozycji
      delay(10);    
    }
  }

  // ustaw nowa pozycje
  servo6PPos = servo6Pos;
}


void setup() {
  Bluetooth.begin(9600);
  Serial.begin(9600);
  // dla czystosci debugowania
  Serial.println("Serial Start.");

  servo01.attach(5);
  servo02.attach(6);
  servo03.attach(7);
  servo04.attach(8);
  servo05.attach(11);
  servo06.attach(10);
  //Bluetooth.setTimeout(1);
  
  // ustaw pozycje inicjujace
  servo1PPos = 90;
  servo01.write(servo1PPos);

  servo2PPos = 90;
  servo02.write(servo2PPos);
  
  servo3PPos = 90;
  servo03.write(servo3PPos);
  
  servo4PPos = 90;
  servo04.write(servo4PPos);
  
  servo5PPos = 20;
  servo05.write(servo5PPos);
  
  servo6PPos = 90;
  servo06.write(servo6PPos);
}

void readServoPos() {
  Serial.print("Servo Pos: ");
  Serial.print(servo01.read());
  Serial.print(" ");
  Serial.print(servo02.read());
  Serial.print(" ");
  Serial.print(servo03.read());
  Serial.print(" ");
  Serial.print(servo04.read());
  Serial.print(" ");
  Serial.print(servo05.read());
  Serial.print(" ");
  Serial.println(servo06.read());
}

void syncServoPos() {
  int ser01 = servo01.read();
  servo01.write(ser01);
  servo1PPos = ser01;

  int ser02 = servo02.read();
  servo02.write(ser02);
  servo2PPos = ser02;

  int ser03 = servo03.read();
  servo03.write(ser03);
  servo3PPos = ser03;
  
  int ser04 = servo04.read();
  servo04.write(ser04);
  servo4PPos = ser04;
  
  int ser05 = servo05.read();
  servo05.write(ser05);
  servo5PPos = ser05;

  int ser06 = servo06.read();
  servo06.write(ser06);
  servo6PPos = ser06;  

  Serial.println("Curently Servo positions:");
  Serial.print("1: ");
  Serial.println(ser01);
  Serial.print("2: ");
  Serial.println(ser02);
  Serial.print("3: ");
  Serial.println(ser03);
  Serial.print("4: ");
  Serial.println(ser04);
  Serial.print("5: ");
  Serial.println(ser05);
  Serial.print("6: ");
  Serial.println(ser06);
}

void loop() {
  // zczytaj obecną pozycje servo
  syncServoPos();
  // Sprawdz czy polaczony przez bluetooth
  if (Bluetooth.available() > 0) {
    // jezeli polaczony przeczytaj dane jako string
    dataIn = Bluetooth.readString();

    // wyswietl te dane w serialu
    Serial.println("Data from bluetooth:");
    Serial.println(dataIn);

    // jezeli w aplikacji przesunieto wartosc suwaka serva 1 
    if (dataIn.indexOf("s1") > 0 || dataIn.startsWith("s1")) {
      moveServo1();
    }
    
    // jezeli w aplikacji przesunieto wartosc suwaka serva 2
    if (dataIn.indexOf("s2") > 0 || dataIn.startsWith("s2")) {
      moveServo2();
    }
    // jezeli w aplikacji przesunieto wartosc suwaka serva 3 
    if (dataIn.indexOf("s3") > 0 || dataIn.startsWith("s3")) {
      moveServo3();
    }
    // jezeli w aplikacji przesunieto wartosc suwaka serva 4
    if (dataIn.indexOf("s4") > 0 || dataIn.startsWith("s4")) {
      moveServo4();
    }
    // jezeli w aplikacji przesunieto wartosc suwaka serva 5 
    if (dataIn.indexOf("s5") > 0 || dataIn.startsWith("s5")) {
      moveServo5();
    }
    // jezeli w aplikacji przesunieto wartosc suwaka serva 6 
    if (dataIn.indexOf("s6") > 0 || dataIn.startsWith("s6")) {
      moveServo6();
    }
    
    // jezeli nacisnieto przycisk SAVE w aplikacji
    if (dataIn.startsWith("SAVE")) {
      // zapisz pozycje w tablicy
      servo01SP[index] = servo1PPos; 
      servo02SP[index] = servo2PPos;
      servo03SP[index] = servo3PPos;
      servo04SP[index] = servo4PPos;
      servo05SP[index] = servo5PPos;
      servo06SP[index] = servo6PPos;
      // index porzadkujacy gdy wiecej "save'ow"
      index++;                       
    }

    // jezeli nacisnieto przycisk RUN w aplikacji
    if (dataIn.startsWith("RUN")) {
      runservo();
    }
    
    // jezeli nacisnieto przycisk RESET w aplikacji
    if ( dataIn == "RESET") {
      // wyczysc tablice
      memset(servo01SP, 0, sizeof(servo01SP));
      memset(servo02SP, 0, sizeof(servo02SP));
      memset(servo03SP, 0, sizeof(servo03SP));
      memset(servo04SP, 0, sizeof(servo04SP));
      memset(servo05SP, 0, sizeof(servo05SP));
      memset(servo06SP, 0, sizeof(servo06SP));
      // index porzadkujacy wyzeruj
      index = 0;
    }
  }
}

void runservo() {
  while (dataIn != "RESET") {   
    for (int i = 0; i <= index - 2; i++) {  
      if (Bluetooth.available() > 0) {      
        dataIn = Bluetooth.readString();
        if ( dataIn == "PAUSE") {           
          while (dataIn != "RUN") {         
            if (Bluetooth.available() > 0) {
              dataIn = Bluetooth.readString();
              if ( dataIn == "RESET") {     
                break;
              }
            }
          }
        }
        if (dataIn.startsWith("ss")) {
          String dataInS = dataIn.substring(2, dataIn.length());
          speedDelay = dataInS.toInt(); 
        }
      }

      if (servo01SP[i] == servo01SP[i + 1]) {
      }
      if (servo01SP[i] > servo01SP[i + 1]) {
        for ( int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
          servo01.write(j);
          delay(speedDelay);
        }
      }
      if (servo01SP[i] < servo01SP[i + 1]) {
        for ( int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
          servo01.write(j);
          delay(speedDelay);
        }
      }
      if (servo02SP[i] == servo02SP[i + 1]) {
      }
      if (servo02SP[i] > servo02SP[i + 1]) {
        for ( int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
          servo02.write(j);
          delay(speedDelay);
        }
      }
      if (servo02SP[i] < servo02SP[i + 1]) {
        for ( int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
          servo02.write(j);
          delay(speedDelay);
        }
      }
      if (servo03SP[i] == servo03SP[i + 1]) {
      }
      if (servo03SP[i] > servo03SP[i + 1]) {
        for ( int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
          servo03.write(j);
          delay(speedDelay);
        }
      }
      if (servo03SP[i] < servo03SP[i + 1]) {
        for ( int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
          servo03.write(j);
          delay(speedDelay);
        }
      }
      if (servo04SP[i] == servo04SP[i + 1]) {
      }
      if (servo04SP[i] > servo04SP[i + 1]) {
        for ( int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
          servo04.write(j);
          delay(speedDelay);
        }
      }
      if (servo04SP[i] < servo04SP[i + 1]) {
        for ( int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
          servo04.write(j);
          delay(speedDelay);
        }
      }
      if (servo05SP[i] == servo05SP[i + 1]) {
      }
      if (servo05SP[i] > servo05SP[i + 1]) {
        for ( int j = servo05SP[i]; j >= servo05SP[i + 1]; j--) {
          servo05.write(j);
          delay(speedDelay);
        }
      }
      if (servo05SP[i] < servo05SP[i + 1]) {
        for ( int j = servo05SP[i]; j <= servo05SP[i + 1]; j++) {
          servo05.write(j);
          delay(speedDelay);
        }
      }
      if (servo06SP[i] == servo06SP[i + 1]) {
      }
      if (servo06SP[i] > servo06SP[i + 1]) {
        for ( int j = servo06SP[i]; j >= servo06SP[i + 1]; j--) {
          servo06.write(j);
          delay(speedDelay);
        }
      }
      if (servo06SP[i] < servo06SP[i + 1]) {
        for ( int j = servo06SP[i]; j <= servo06SP[i + 1]; j++) {
          servo06.write(j);
          delay(speedDelay);
        }
      }
    }
  }
}
