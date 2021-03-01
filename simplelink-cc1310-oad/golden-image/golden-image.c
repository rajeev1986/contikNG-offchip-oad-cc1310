/*---------------------------------------------------------------------------*/
/**
 *  @file       golden-image.c
 *
 *  @brief      Application for demonstrating the OAD golden image.
 *              This image shall be flashed to the CC1310-LP together with the
 *              Boot Image manager (BIM).hex using TI UniFlash.
 * 
 *  @author     Rajeev Piyare <rajeev.piyare@hotmail.com> 
 *              
 */
/*---------------------------------------------------------------------------*/
#include "contiki.h"
#include "sys/etimer.h"
#include <stdio.h>
#include <stdint.h>
/*---------------------------------------------------------------------------*/
PROCESS(hello_world_process, "Hello world process");
AUTOSTART_PROCESSES(&hello_world_process);
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(hello_world_process, ev, data)
{
  static struct etimer timer;

  PROCESS_BEGIN();

  /* Setup a periodic timer that expires after 5 seconds. */
  etimer_set(&timer, CLOCK_SECOND * 5);

  while(1) {
    printf("Hello world. This is Contiki-NG OAD image\n");

    /* Wait for the periodic timer to expire and then restart the timer. */
    PROCESS_WAIT_EVENT_UNTIL(etimer_expired(&timer));
    etimer_reset(&timer);
  }

  PROCESS_END();
}
/*---------------------------------------------------------------------------*/

