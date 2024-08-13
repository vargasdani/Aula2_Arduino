//Mapeamento de I/Os

#define LED_YELLOW 11
#define LED_BLUE 8
#define LED_RED 3


void setup() {
  //Configurar pinos dos LEDs como OUTPUT, pois, por padrão, ele vem como INPUT
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  //Ligar todos os LEDs
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_BLUE, HIGH);
  digitalWrite(LED_RED, HIGH);
  delay(2000);//por padrão, ele vem em milisegundos, então isso é 2 segundos
  //Desligar todos os LEDs
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_RED, LOW);
  delay(1000);
}
