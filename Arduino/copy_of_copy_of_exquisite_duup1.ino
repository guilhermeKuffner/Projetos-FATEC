// C++ code
//
float seno;
int frequencia;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  
  for(int x=0;x<180;x++){
  //converte graus para radiando e depois obtém o valor do seno
  seno=(sin(x*3.1416/180));
  //gera uma frequência a partir do valor do seno
  frequencia = 2000+(int(seno*1000));
  tone(3,frequencia);
  delay(2);
 }
	digitalWrite(3,10);
 	for (int x = 4; x <=13; x++) 
    {
  	 	digitalWrite(x, HIGH);
  		delay(50);
  		digitalWrite(x, LOW);
 		delay(50);
	}
  	for (int x = 13; x>=4; x--) 
    {
  	 	digitalWrite(x, HIGH);
  		delay(50);
  		digitalWrite(x, LOW);
 		delay(50);
	}
 	int y=8;
  	for (int x = 8; x>=4; x--) 
    {
      	y++;
  	 	digitalWrite(x, HIGH);
     	digitalWrite(y, HIGH);
     	delay(100); 
  		     	
  		
	}
  	
  	for (int x = 4; x<=8; x++) 
    {
       	 	
  		digitalWrite(x, LOW);
     	digitalWrite(y, LOW);
 		delay(100);   
      	y--; 
  		
	}
  
  
}