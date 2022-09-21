"############# UART.h ##############"
"//////////////////////////////////////////////////////////"

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include <avr/io.h>
void SWUART_init(uint32_t baudrate);
 
void SWUART_send(uint8_t data);

void SWUART_recieve(uint8_t *data);
