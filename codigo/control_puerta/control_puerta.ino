#include <Servo.h>
#include <Keypad.h>

Servo motor;

const byte ROWS = 4;
const byte COLS = 4;



char keys[ROWS][COLS] = {
  {'*','7','4','1'},
  {'0','8','5','2'},
  {'#','9','6','3'},
  {'D','C','B','A'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {10, 11, 12, 13};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

char password[5] = "ABCD";
char input[5];
int index = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Sistema de Puerta Iniciado");
  Serial.println("Introduce la clave de 4 digitos y presiona #");

  motor.attach(3);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print("Tecla presionada: ");
    Serial.println(key);

    if (key == '#') {
      input[index] = '\0';
      Serial.print("Clave ingresada: ");
      Serial.println(input);

      if (strcmp(input, password) == 0) {
        Serial.println("CLAVE CORRECTA! Abriendo puerta...");
        AbrirPuerta();
        delay(500);
        CerrarPuerta();
        index = 0;
        input[0] = '\0';
        Serial.println("Sistema listo. Introduce nueva clave:");
      } else {
        Serial.println("CLAVE INCORRECTA! Intentalo de nuevo.");
        index = 0;
        input[0] = '\0';
        Serial.println("Introduce la clave de 4 digitos y presiona #");
      }
    } else if (key == '*') {
      index = 0;
      input[0] = '\0';
      Serial.println("Borrado. Introduce la clave nuevamente:");
    } else if (index < 4) {
      input[index++] = key;
      Serial.print("Llevas: ");
      for (int i = 0; i < index; i++) {
        Serial.print('*');
      }
      Serial.println(" (caracteres ocultos)");
    }
  }
}

void AbrirPuerta() {
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  for (int angulo = 130; angulo >= 9; angulo -= 10) {
    motor.write(angulo);
    delay(500);
  }
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(5000);
}

void CerrarPuerta() {
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  for (int angulo = 9; angulo <= 130; angulo += 10) {
    motor.write(angulo);
    delay(500);
  }
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}