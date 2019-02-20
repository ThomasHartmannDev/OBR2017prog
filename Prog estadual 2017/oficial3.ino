#include <QTRSensors.h>  // declara biblioteca 
#define numero_de_sensor   8    // numero de sensor de linha
#define TIMEOUT       500  // tempo de espera para leitura ate 2500 
QTRSensorsRC seguidor_de_linha((unsigned char[]) {A0,A1,A2,A3,A4,A5,A6,A7},numero_de_sensor, TIMEOUT);  
unsigned int valor_sensor[numero_de_sensor]; 
int sensibilidade = 40;//40
#include <Servo.h> // declara biblioteca
unsigned long tempo1 = 0; // variavel do millis 
const long intervalo = 100;
Servo motor;
//LEDS
const int LEDVERDED = 29; 
const int LEDOBSTACULO = 27;
const int LEDRAMPA = 25;
const int LEDVERDEE = 23;
//Sharps

const int SHARPLE = 9; // Sharp lateral esquerdo

const int SHARPLD = 13; // Sharp lateral direito

const int SHARPD = 8; // Sharp frente direito

const int SHARPE = 10; // Sharp frente esquero

const int SHARPC = 11; // Sharp Cima meio

// motor
const int B_mais_pwm =5;
const int B_menos    =4;
const int A_mais_pwm =3;
const int A_menos    =2;

// motor garra
const int A2_mais_pwm =6;
const int A2_menos    =7;
const int B2_mais_pwm =8;
const int B2_menos    =9;

// Portas Sensor de Cor Direito 
const int S0D = 32;  
const int S1D = 34;  
const int S2D = 36;  
const int S3D = 38;  
const int OUTD= 40;   
// Variaveis que armazenam o valor das cores  
int redd = 0;  
int greend = 0;  
int blued = 0;  

// Portas Sensor de Cor Esquerdo 
const int S0E = 22;  
const int S1E = 24;  
const int S2E = 26;  
const int S3E = 28;  
const int OUTE= 30;   
// Variaveis que armazenam o valor das cores  
int rede = 0;  
int greene = 0;  
int bluee = 0;  

// Portas Sensor de Cor Frente

const int S0F = 42;  
const int S1F = 44;  
const int S2F = 46;  
const int S3F = 48;  
const int OUTF= 50;   
// Variaveis que armazenam o valor das cores  
int redf = 0;  
int greenf = 0;  
int bluef = 0;
//
// Portas do Ultrasonico
const int echoPin = 33; // recebe o som 
const int trigPin = 31; // emite  o som
int valor_ultrasonico=0;
int iniciar_ultrasonico=0;



void setup() {
Serial.begin(9600);
motor.attach(12);
  //Ultrasonico 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
{ 
  pinMode(B_menos, OUTPUT);
  pinMode(A_menos, OUTPUT);
}

{
  //Garra
  pinMode(B2_menos, OUTPUT);
  pinMode(A2_menos, OUTPUT);
}
//leds
{
  pinMode(LEDVERDED,OUTPUT);
  pinMode(LEDVERDEE,OUTPUT);
  pinMode(LEDOBSTACULO,OUTPUT);
  pinMode(LEDRAMPA,OUTPUT); 
}

  {
  pinMode(S0D, OUTPUT);
  pinMode(S1D, OUTPUT); 
  pinMode(S2D, OUTPUT);
  pinMode(S3D, OUTPUT);
  pinMode(OUTD, INPUT);  
  Serial.begin(9600);
  digitalWrite(S0D,HIGH);
  digitalWrite(S1D,HIGH);
}
  {
  pinMode(S0E, OUTPUT);
  pinMode(S1E, OUTPUT); 
  pinMode(S2E, OUTPUT);
  pinMode(S3E, OUTPUT);
  pinMode(OUTE, INPUT);  
  Serial.begin(9600);
  digitalWrite(S0E,HIGH);
  digitalWrite(S1E,HIGH);
}
  {
  pinMode(S0F, OUTPUT);
  pinMode(S1F, OUTPUT); 
  pinMode(S2F, OUTPUT);
  pinMode(S3F, OUTPUT);
  pinMode(OUTF, INPUT);  
  Serial.begin(9600);
  digitalWrite(S0F,HIGH);
  digitalWrite(S1F,HIGH);
}

motor_avancar(150);
delay(100);
}



void loop() {
 /*
 valor_ultrasonico=sensor_ultrasonico();
 if(valor_ultrasonico=sensor_ultrasonico()){
 if( valor_ultrasonico < 55 ) {
blablabla
 }
 }
 */
digitalWrite(LEDRAMPA,LOW);

    if(analogRead(SHARPLD)>220){          //Se o Sharp da lateral direita detectar algo a uma distância menor que 8cm ele chama o Sharp da outra lateral
    if(analogRead(SHARPLE)>220){ //Se o Sharp da lateral esquerda detectar algo a uma distância menor que 8cm ele avança, sinaliza com o led vermelho e chama Rampa
    valor_ultrasonico=sensor_ultrasonico();
 if(valor_ultrasonico=sensor_ultrasonico()){
 if( valor_ultrasonico < 15 ) {
    motor_avancar(255);
    delay(100);
    digitalWrite(LEDRAMPA,HIGH);
    while(true){
    rampa();
    }
 }
 else{
   loop();
 }
 }
 }
 }

 

  
if(analogRead(SHARPD) > 600){ //Se o Sharp da direita detectar algo a 5cm ele sinaliza com o led azul e chama o void de desviar de obstáculo pequeno.
if(analogRead(SHARPC) > 600){  //Se o Sharp da direita detectar algo a 5cm ele sinaliza com o led azul e chama o void de desviar de obstáculo grande.
 digitalWrite(LEDOBSTACULO,HIGH);
  motor_parar();
  OPG();
 }
 else{
   motor_parar();
   OP();
 }
}
 

   colord(); //Chama a rotina que le as cores  
  
  //Verifica se a cor verde foi detectada  
  if (redd>55 && redd<75 && blued>40 && blued<60 && greend>35 && greend<50)  
  { 
  digitalWrite(LEDVERDED,HIGH); //Sinaliza com o led verde que está na direita do robô
  virar_direita();
  } 
   colore(); //Chama a rotina que le as cores  
  
  //Verifica se a cor verde foi detectada  
  if (rede>60 && rede<80 && bluee>40 && bluee<60 && greene>35 && greene<50)  
  { 
  digitalWrite(LEDVERDEE,HIGH); //Sinaliza com o led verde que está na esquerda do robô
  virar_esquerda();
  }  

{
  seguir_linha();
  }
 

}
