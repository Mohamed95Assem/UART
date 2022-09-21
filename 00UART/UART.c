"############# UART.c ##############"
"//////////////////////////////////////////////////////////"
void SWUART_init(uint32_t baudrate)
{
	/* Enable RX and TX */
	SET_BIT(UCSRB , UCSRB_RXEN);
	SET_BIT(UCSRB , UCSRB_TXEN);
	
	/* Set to 8 bit mode 
	 * No parity 
 	 * One stop bit */
	UCSRC = 0b10000110  ;
	
	/* Set buad rate to 9600 */
	UBRRL = 51 ;
}

 void SWUART_send(uint8_t data)
 {
	while (GET_BIT(UCSRA , UCSRA_UDRE) == 0);
	UDR = Cpy_data ;
}

 void SWUART_recieve(uint8_t *data)
 {
	while (GET_BIT(UCSRA , UCSRA_RXC) == 0);
	return UDR ;
}