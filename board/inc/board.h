
#ifndef BOARD_H_
#define BOARD_H_

/*==================[inclusions]=============================================*/
#include "MKL46Z4.h"

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

/** \brief puerto I2C utilizado en el acelerómetro  */
#define MMA8451_I2C     I2C0

#define UART_INSTANCE   ((UART_Type*)UART0)

/* The UART to use for debug messages. */
#ifndef BOARD_DEBUG_UART_INSTANCE
    #define BOARD_DEBUG_UART_INSTANCE   0
    #define BOARD_DEBUG_UART_BASEADDR   UART0
#endif
#ifndef BOARD_DEBUG_UART_BAUD
    #define BOARD_DEBUG_UART_BAUD       115200
#endif


/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions definition]==========================*/

/** \brief inicializaci�n del hardware
 **
 **/
void board_init(void);

/** \brief Devuelve estado del pulsador sw1
 **
 ** \return 1: si el pulsdor est� apretado
 **         0: si el pulsador no est� apretado
 **/
int8_t pulsadorSw1_get(void);

/** \brief Devuelve estado del pulsador sw3
 **
 ** \return 1: si el pulsdor est� apretado
 **         0: si el pulsador no est� apretado
 **/
int8_t pulsadorSw3_get(void);

/** \brief Enciende Led rojo
 **
 **/
void ledRojo_on(void);

/** \brief ApagaLed rojo
 **
 **/
void ledRojo_off(void);

/** \brief Togglea Led rojo
 **
 **/
void ledRojo_toggle(void);

/** \brief Enciende Led verde
 **
 **/
void ledVerde_on(void);

/** \brief Apgaga Led verde
 **
 **/
void ledVerde_off(void);

/** \brief Togglea Led verde
 **
 **/
void ledVerde_toggle(void);

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* BOARD_H_ */
