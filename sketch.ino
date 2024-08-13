//Mapeamento de I/Os

#define LED_YELLOW 11
#define LED_BLUE 8
#define LED_RED 3
#define BT 9


void setup() {
  //Configurar pinos dos LEDs como OUTPUT, pois, por padrão, ele vem como INPUT
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  //Configurar pino do botão como INPUT. Enquanto ngm apertar, 
  //ele permanece em HIGH. Quando apertar ele vai para LOW.
  pinMode(BT, INPUT_PULLUP);

/*
LED:
LOW--> desligado
HIGH--> ligado
BOTÃO:
HIGH:-->desligado
LOW:-->ligado
*/  
}

void loop() {
//Quando o botão for acionado, os LEDs deverão piscar.
//Se o botão for pressionado...
  if (digitalRead(BT)==LOW){
    piscaLED();
  }
  else{
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_RED, LOW);
  }
}
void piscaLED(){
  //Ligar todos os LEDs
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_RED, HIGH);
  delay(2000);//por padrão, ele vem em milisegundos, então isso é 2 segundos
  //Desligar todos os LEDs
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_BLUE, HIGH);
  digitalWrite(LED_RED, LOW);
  delay(1000);
}