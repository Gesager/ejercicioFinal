
/* IMPORTANTE: Este es un archivo para manejo de de los leds utilizado
 * para hacer pruebas rápidas.
 */


#ifndef MANEJOTECLADO_H
#define MANEJOTECLADO_H
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
#define MIN_PER_MS 100
#define MAX_PER_MS 1000
#define TASK_PER_MS 5
#define PASO_MS 10
#define NOFLANCOS 0

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/
extern uint8_t tiltLed;
extern uint16_t tiltPer;
/*==================[external functions declaration]=========================*/

extern void leds_init(void);

extern void leds_toggle(uint8_t mask);

extern void leds_on(uint8_t mask);

extern void leds_off(uint8_t mask);

extern uint8_t leds_get(void);

extern void leds_set(uint8_t value);

extern uint8_t get_tiltLed(void);

extern void set_tiltLed(uint8_t new_value);

extern uint16_t get_tiltPer(void);

extern void set_tiltPer(uint16_t new_value);

extern void ManejoTeclado(void);

void ledrojo(void);

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif /* #ifndef MANEJOTECLADO_H */

