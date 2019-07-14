#define PORTB
#define PORTD
#define DDRB
#define DDRD
#define LED1 PORTB0
#define LED2 PORTB1
#define LED3 PORTB2
#define LED4 PORTB3

#define PZ PORTD6
#define LED6 PORTB5

#define SW1 0b00000100
#define SW2 0b00001000
#define SW3 0b00010000
#define SW4 0b00100000

//Ledien ja Piezon ohjausta
void setup()
{
  //Porttien aktivointi
  PORTB |= 0b00111111; //Ledit off
  DDRB |= 0b00111111; //PortB:n 6 alinta linjaa output  
  PORTD |= 0b01000000; //Piezo OFF
  DDRD |= 0b01000000; //PieZO ON OUTPUT
}

void loop()
{
 if (~PIND & SW1) 
 {
    PORTB &= ~(1 << LED1); //LED 1 ON
  }
  else
  {
    PORTB |= (1 << LED1); //LED1 OFF
  }
}
  PORTB &= ~(1 << LED1); //LED1 ON 
  delay(1000);

  PORTB |= (1 << LED1); //LED1 OFF
  delay(1000);


  PORTB &= ~(1 << LED6); //LED1 ON 
  delay(1000);

  PORTB |= (1 << LED6); //LED1 OFF
  delay(1000);

  //PORTD &= ~(1<<PZ); 
  delay(1);
  PORTD |= (1 << PZ);
  delay(1);
