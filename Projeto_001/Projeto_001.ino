// =========================== \\
//     Variable Declaration    \\
// =========================== \\


#define redPin_P  13
#define greenPin_P  12
// Pinos Para Os Leds Dos Pedestres

#define redPin_S  8
#define yellowPin_S  4
#define greenPin_S  2
// Pinos Para Os Leds Dos Carros

#define button  7
int statusButton;
// Pino Para Botão | Variável Para Estado Do Botão



void setup()
{
  pinMode(redPin_P, OUTPUT);
  pinMode(greenPin_P, OUTPUT);
  
  pinMode(redPin_S, OUTPUT);
  pinMode(yellowPin_S, OUTPUT);
  pinMode(greenPin_S, OUTPUT);
  
  pinMode(button,INPUT);
  
}

void loop()
{
  
  digitalWrite(redPin_S, 0);
  digitalWrite(yellowPin_S, 0);
  digitalWrite(greenPin_S, 1);
  
  digitalWrite(redPin_P, 1);
  digitalWrite(greenPin_P, 0);
  
  statusButton = digitalRead(button);
    if(statusButton == 1)
    {
      delay(5000);
      while(true)
      {
        digitalWrite(redPin_S, 0);
        digitalWrite(yellowPin_S, 1);
        digitalWrite(greenPin_S, 0);
        delay(2000);

        digitalWrite(redPin_S, 1);
        digitalWrite(yellowPin_S, 0);
        digitalWrite(greenPin_S, 0);

        digitalWrite(redPin_P, 0);
        digitalWrite(greenPin_P, 1);
        delay(15000);

        for(int i = 1; i <= 10; i++)
        {

          digitalWrite(greenPin_P, 1);
          delay(100);
          digitalWrite(greenPin_P, 0);
          delay(100);
        }

        digitalWrite(greenPin_P, 0);
        digitalWrite(redPin_S, 0);
        digitalWrite(redPin_P, 1);
        digitalWrite(greenPin_S, 1);
        delay(2000);
        
      }
    }  

  
  
}


  
  
  
