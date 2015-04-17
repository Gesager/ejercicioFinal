
/* IMPORTANTE: Este es un archivo para manejo de de los leds utilizado
 * para hacer pruebas rápidas.
 */


#ifndef MANEJOMODBUS_H
#define MANEJOMODBUS_H
/** \brief Short description of this file
 **
 ** Long description of this file
 **
 **/

/** \addtogroup CIAA_Firmware CIAA Firmware
 ** @{ */
/** \addtogroup Template Template to start a new module
 ** @{ */

/*
 * Initials     Name
 * ---------------------------
 *
 */

/*
 * modification history (new versions first)
 * -----------------------------------------------------------
 * yyyymmdd v0.0.1 initials initial version
 */

/*==================[inclusions]=============================================*/
#include "ciaaPOSIX_stdint.h"

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/


/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

extern void leds_init(void);

extern void leds_toggle(uint8_t mask);

extern void leds_on(uint8_t mask);

extern void leds_off(uint8_t mask);

extern uint8_t leds_get(void);

extern void leds_set(uint8_t value);

extern void ManejoModbus(void);

extern void procesarTeclas(uint16_t teclas);

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif /* #ifndef MANEJOMODBUS_H */

