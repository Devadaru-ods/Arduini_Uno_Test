#include <Arduino.h>

void setup() {
  // Инициализация монитора порта на скорости 9600 бод
  Serial.begin(9600);
  
  // Настраиваем пин встроенного светодиода (на Arduino Uno это пин 13) как выход
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.println("Aether Collector: System Initialized (Arduino Uno Prototype)");
}

void loop() {
  // Включаем светодиод
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Status: LED ON");
  delay(1000); // Ждем 1 секунду

  // Выключаем светодиод
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Status: LED OFF");
  delay(1000); // Ждем 1 секунду
}