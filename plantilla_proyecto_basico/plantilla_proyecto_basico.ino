//+++++++++plantilla para proyecto basico multi archivo

// +++++++++++++++AKI VAN INCLUDES NECESARIOS+++++++++++++++++++++++++++++++++++
#include <SPI.h>
#include <amirf.h>
#include <nRF24L01.h>
#include <EEPROM.h>

void setup()
{
	//++++++++++++++++++++++++bloque de configuracion+++++++++++++++++++
 Serial.begin(9600);
 Serial.println( "plantilla basica multiarchivo" );
 
funcion_1();// cualquier codigo o funcion correctamente definida en
funcion_2(); // alguna parte del proyecto
  
 
}

void loop() 
{

funcion_1(); // cualquier codigo o funcion correctamente definida en
funcion_2(); // alguna parte del proyecto

//+++++++++++++++++++++++++++bucle principal++++++++++++++++++++++++++++
 
}

