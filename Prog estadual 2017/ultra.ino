//funçao que retorna valor em cm 
int sensor_ultrasonico() 
{
 
  int distancia; 
  //envia o sinal ultrasonico
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  
  //tempo para receber o retorno do sinal
  distancia = pulseIn(echoPin, HIGH,5000);
  //base para calculo para resposta em cm do ultrasonico
  distancia = distancia/58.2; 
  

  if (distancia >= 100 || distancia <= 0  ){
      return 100; // se a distancia nao estiver certa ele retorna -1   
  }
  else { 
      return distancia; // retorna a discantia em cm
  }
}



