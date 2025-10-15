//Botão da Esqueda Nitrogenio
//Botão do Meio Fósforo
//Botão da Direita Potássio

#include <DHT.h>

#define PINO_DHT 27
#define TIPO_DHT DHT22
DHT dht(PINO_DHT, TIPO_DHT);

#define BOTAO_N 14
#define BOTAO_P 15
#define BOTAO_K 18
#define PINO_LDR 34
#define PINO_RELE 26
bool lastNitrogenio = false;
bool lastFosforo = false;
bool lastPotassio = false;
float lastPh = -1;
float lastUmidade = -1;
bool lastRele = false;

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(BOTAO_N, INPUT_PULLUP);
  pinMode(BOTAO_P, INPUT_PULLUP);
  pinMode(BOTAO_K, INPUT_PULLUP);
  pinMode(PINO_LDR, INPUT);
  pinMode(PINO_RELE, OUTPUT);
  digitalWrite(PINO_RELE, LOW);

  Serial.println("=== Sistema de Irrigação Inteligente - Milho 🌽 ===");
}

void loop() {
  bool nitrogenioOK = !digitalRead(BOTAO_N);
  bool fosforoOK = !digitalRead(BOTAO_P);
  bool potassioOK = !digitalRead(BOTAO_K);
  int valorLDR = analogRead(PINO_LDR);
  float umidade = dht.readHumidity();
  float ph = map(valorLDR, 0, 4095, 0, 14);
  bool nutrientesOK = nitrogenioOK && fosforoOK && potassioOK;
  bool phIdeal = (ph >= 5.5 && ph <= 7.0);
  bool soloSeco = (umidade < 50);
  bool releON = (nutrientesOK && phIdeal && soloSeco);

  digitalWrite(PINO_RELE, releON ? HIGH : LOW);

  if (nitrogenioOK != lastNitrogenio || fosforoOK != lastFosforo || potassioOK != lastPotassio ||
      ph != lastPh || umidade != lastUmidade || releON != lastRele) {

    Serial.println("----------------------------");
    Serial.print("Nitrogênio (N): "); Serial.println(nitrogenioOK ? "Adequado" : "Baixo");
    Serial.print("Fósforo (P): "); Serial.println(fosforoOK ? "Adequado" : "Baixo");
    Serial.print("Potássio (K): "); Serial.println(potassioOK ? "Adequado" : "Baixo");
    Serial.print("pH do solo: "); Serial.println(ph);
    Serial.print("Umidade (%): "); Serial.println(umidade);
    Serial.print("Bomba: "); Serial.println(releON ? "LIGADA " : "DESLIGADA ");

    lastNitrogenio = nitrogenioOK;
    lastFosforo = fosforoOK;
    lastPotassio = potassioOK;
    lastPh = ph;
    lastUmidade = umidade;
    lastRele = releON;
  }

  delay(100); 
}