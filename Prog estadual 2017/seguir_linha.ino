void seguir_linha()
{
   int sensibilidade =40;//40; 
   seguidor_de_linha.read(valor_sensor);    // faz a leitura dos valores 

   if(valor_sensor[3]>sensibilidade || valor_sensor[4]>sensibilidade) //RETO
   {
     motor_avancar(150);
     
   } 
      if(valor_sensor[1]>sensibilidade || valor_sensor[2]>sensibilidade )//CORRECAO DIREITA
   {
   
     motor_esquerda(10);
     
if(valor_sensor[5]>sensibilidade || valor_sensor[6]>sensibilidade)
     {
      motor_direita(10);
      motor_avancar(180);
     } 
   } 
   if(valor_sensor[5]>sensibilidade || valor_sensor[6]>sensibilidade)//CORRECAO ESQUERDA
   {
     
     motor_direita(10);
     
    if(valor_sensor[1]>sensibilidade || valor_sensor[2]>sensibilidade)
     {
      motor_esquerda(10);
      motor_avancar(180);
     }
     }
     }
