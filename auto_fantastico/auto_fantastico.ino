/*
  Codigo modificado por 3D ROOM el dia 19 de Mayo del año 2023 
  -------------------------------------------------------------------------------------------------------------------------
  En este programa en arduino enviaremos señales con valores logicos altos y bajos para encerder varios leds
  por medio de los pines del 2 al 11, utilizando el bucle for
  para poder compilar el codigo es necesario que tengamos nuestro arduino conectado a la computadora
  -------------------------------------------------------------------------------------------------------------------------
  Puedes seguirme en mi cuenta de tiktok https://www.tiktok.com/@3droomflt donde podras encontrar más contenido relacionado
  con arduino y proyectos de robotica.
*/
int tiempo = 100;                      //Le decimos que la variable tiempo tenga un valor de 100ms que vendria siendo la velocidad
int pin;                                //Declaramos una variable tipo entero con el nombre pin para los pines 2 al 11

void setup()
{
  for( pin = 2; pin <= 11; pin++)       //Colocamos el bucle for del pin 2 al pin 11 y lo incremente de uno en uno
  {
    
    pinMode(pin, OUTPUT);                //Le decimos al arduino que la variable pin nos la muestre como salida
    
  }
}

void loop()
{
 for( pin = 2; pin <= 11; pin++)        //Colocamos el bucle for del pin 2 al 11 y que vaya en aumento de uno en uno
  {
    
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
    delay(tiempo);                      //Colocamos la variable tiempo ya que esta toma el valor que le demos al inicio donde aparece 100ms
    digitalWrite(pin,LOW);
  }
  
  for( pin = 11; pin >= 2; pin--)         //Colocamos el bucle for del pin 2 al 11 y que vaya disminuyendo de uno en uno
  {
    
    pinMode(pin,OUTPUT);
    digitalWrite(pin,HIGH);
    delay(tiempo);
    digitalWrite(pin,LOW);
  }
  
}
