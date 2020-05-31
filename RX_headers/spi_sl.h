void SPIsl_init()
{
	DDRB &= ~((1<<6)|(1<<8)|(1<<5));//mosi , sck and ss as input
	DDRB |=(1<<7);//miso as output pin
	SPCR=(1<<SPE);
}
char SPI_Receive()			
{
	while(!(SPSR & (1<<SPIF)));	
	return(SPDR);			
}