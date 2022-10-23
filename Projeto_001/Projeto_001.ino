// =========================== \\
//     Variable Declaration    \\
// =========================== \\

// var_P == Leds Dos Pedestres
// var_S == Leds Dos Carros

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
  // Led Verde Dos Carros Fica Acesso
  
  digitalWrite(redPin_P, 1);
  digitalWrite(greenPin_P, 0);
  // Led Vermelho Dos Pedestres Fica Acesso
  
  statusButton = digitalRead(button);
  // Declarando O Estado Do Botão Dentro Da Variável
  
    if(statusButton == 1) // Se O Estado Do Botão For Igual A "1"
    {
      delay(5000); // Delay De 5 Segundos
      while(true) // Repetir Infinitamente
      {
        digitalWrite(redPin_S, 0);
        digitalWrite(yellowPin_S, 1);
        digitalWrite(greenPin_S, 0);
        delay(2000);
        // Liga Led Amarelo Por 2 Segundos

        digitalWrite(redPin_S, 1);
        // Liga Led Vermelho Dos Carros Rapidamente
        digitalWrite(yellowPin_S, 0);
        // Desliga Led Amarelo
        digitalWrite(greenPin_S, 0);

        digitalWrite(redPin_P, 0);
        // Desliga Led Vermelho Dos Carros
        digitalWrite(greenPin_P, 1);
        // Liga Led Vermelho Dos Pedestres
        delay(15000);
        // Delay Para Pedestres Atravessarem

        for(int i = 1; i <= 10; i++)
        {
                             
          digitalWrite(greenPin_P, 1);
          delay(100);
          digitalWrite(greenPin_P, 0);
          delay(100);
        }
        
        /* Laço De Repetição
        Função: Vai Ligar E Desligar O Led Verde 10x 
        Motivo: Sinalização */

        digitalWrite(greenPin_P, 0);
        // Desliga Led Verde_P
        digitalWrite(redPin_S, 0);
        // Desliga Led Vermelho_S
        digitalWrite(redPin_P, 1);
        // Liga Led Vermelho_P
        digitalWrite(greenPin_S, 1);
        // Desliga Led Verde_S
        delay(2000);
        
        // Volta Pro Começo
        
      }
    }  

  
  
}


  
  
  
