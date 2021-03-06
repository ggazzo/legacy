#ifndef _CONFIG_H
#define _CONFIG_H


// SPI

#define MCP_CS_BIT   PB4
#define MCP_CS_PORT  PORTB

#define SPI_REG_PIN_MCP_INT  PIND
#define SPI_PIN_MCP_INT      PD2
#define CAN_INTERRUPT
#define CAN_RX_BUFFER_SIZE 4
#define CAN_TX_BUFFER_SIZE 4
#define MCP_INT_VEC INT0_vect
#define ENABLE_CAN_INT()    GIMSK |= _BV(INT0)
#define DISABLE_CAN_INT()   GIMSK &= ~_BV(INT0)
#define SETUP_CAN_INT()     MCUCR |= _BV(ISC01)

#define F_MCP F_CPU

//#define TESTBOARD

#ifdef TESTBOARD
#define LED_ROT   _BV(PA3)
#define LED_GRUEN _BV(PA2)
#define LED_BLAU  _BV(PA4)
#else
#define LED_ROT   _BV(PA2)
#define LED_GRUEN _BV(PA3)
#define LED_BLAU  _BV(PA4)
#endif

#define PORT_LED   PORTA

#define BV_HAUPTSCHALTER  (_BV(PA0)) //1 = an, 0 = aus
#define BV_TASTER_LOUNGE  (_BV(PB2)) //0 = gedr�ckt
#define BV_TASTER_VORTRAG (_BV(PD3)) //0 = gedr�ckt
#define BV_POWER_OK       (_BV(PD7)) //1 = 24V ok, 0 = nicht ok
#define BV_RCD_SERVER     (_BV(PA1)) //0 = rcd an, 1 = rcd gefallen
#define BV_RCD_POWER      (_BV(PC2)) //0 = rcd an, 1 = rcd gefallen
#define BV_RCD_LICHT      (_BV(PD6)) //0 = rcd an, 1 = rcd gefallen

#define PIN_HAUPTSCHALTER  (PINA)
#define PIN_TASTER_LOUNGE  (PINB)
#define PIN_TASTER_VORTRAG (PIND)
#define PIN_POWER_OK       (PIND)
#define PIN_RCD_SERVER     (PINA)
#define PIN_RCD_POWER      (PINC)
#define PIN_RCD_LICHT      (PIND)

/* eeprom settings */
#define EEPROM_LAP_ADDR 0x00

#define LIST_ALLOCATION_BLOCK_SIZE 1

#endif // ifndef _CONFIG_H
