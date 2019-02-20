 void rampa(){ //Rampa

   int sensibilidade =40;
   seguidor_de_linha.read(valor_sensor);    // Faz a leitura dos valores 

   if(valor_sensor[3]>sensibilidade || valor_sensor[4]>sensibilidade) //RETO
   {
     motor_avancar(205);
     
   } 
      if(valor_sensor[2]>sensibilidade )//CORRECAO DIREITA
   {
     motor_avancar(140);
     motor_esquerda(5);
   } 
   if(valor_sensor[5]>sensibilidade)//CORRECAO ESQUERDA
   {
     motor_avancar(140);
   
     motor_direita(5);
     }
     
         colorf(); //Chama o sensor de cor da frente para que quando ele detecção determinada variação da cor ele entenda que é prata e entre em condição de sala de resgate

    if (greenf>20 & greenf<30  && redf>17 && redf <30 && bluef>5 && bluef<15){
      motor_avancar(200);
      delay(200); 
       if (greenf>20 & greenf<30  && redf>17 && redf <30 && bluef>5 && bluef<15){
       digitalWrite(LEDRAMPA,LOW);
       triangulo();
       }
     else{
       rampa();
}
}
 }




