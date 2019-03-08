/*
    __relay_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __relay_driver.h
@brief    RELAY Driver
@mainpage RELAY Click
@{

@image html sch.jpg

@}

@defgroup   RELAY
@brief      RELAY Click Driver
@{

| Global Library Prefix | **RELAY** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **dec 2017.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _RELAY_H_
#define _RELAY_H_

/** 
 * @macro T_RELAY_P
 * @brief Driver Abstract type 
 */
#define T_RELAY_P    const uint8_t*

/** @defgroup RELAY_COMPILE Compilation Config */              /** @{ */

//  #define   __RELAY_DRV_SPI__                            /**<     @macro __RELAY_DRV_SPI__  @brief SPI driver selector */
//  #define   __RELAY_DRV_I2C__                            /**<     @macro __RELAY_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __RELAY_DRV_UART__                           /**<     @macro __RELAY_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup RELAY_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup RELAY_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup RELAY_INIT Driver Initialization */              /** @{ */

#ifdef   __RELAY_DRV_SPI__
void relay_spiDriverInit(T_RELAY_P gpioObj, T_RELAY_P spiObj);
#endif
#ifdef   __RELAY_DRV_I2C__
void relay_i2cDriverInit(T_RELAY_P gpioObj, T_RELAY_P i2cObj, uint8_t slave);
#endif
#ifdef   __RELAY_DRV_UART__
void relay_uartDriverInit(T_RELAY_P gpioObj, T_RELAY_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void relay_gpioDriverInit(T_RELAY_P gpioObj);

                                                                       /** @} */
/** @defgroup RELAY_FUNC Driver Functions */                   /** @{ */

/**
* @brief relay_relay2Control
*
* @param[in] pinState 1  = On, 0 = off
*
* Controls the Relay 2 pin
*/
void relay_relay2Control( uint8_t pinState );

/**
* @brief relay_relay1Control
*
* @param[in] pinState 1  = On, 0 = off
*
* Controls the Relay 1 pin
*/  
void relay_relay1Control( uint8_t pinState );
                                                                     /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_RELAY_STM.c
    @example Click_RELAY_TIVA.c
    @example Click_RELAY_CEC.c
    @example Click_RELAY_KINETIS.c
    @example Click_RELAY_MSP.c
    @example Click_RELAY_PIC.c
    @example Click_RELAY_PIC32.c
    @example Click_RELAY_DSPIC.c
    @example Click_RELAY_AVR.c
    @example Click_RELAY_FT90x.c
    @example Click_RELAY_STM.mbas
    @example Click_RELAY_TIVA.mbas
    @example Click_RELAY_CEC.mbas
    @example Click_RELAY_KINETIS.mbas
    @example Click_RELAY_MSP.mbas
    @example Click_RELAY_PIC.mbas
    @example Click_RELAY_PIC32.mbas
    @example Click_RELAY_DSPIC.mbas
    @example Click_RELAY_AVR.mbas
    @example Click_RELAY_FT90x.mbas
    @example Click_RELAY_STM.mpas
    @example Click_RELAY_TIVA.mpas
    @example Click_RELAY_CEC.mpas
    @example Click_RELAY_KINETIS.mpas
    @example Click_RELAY_MSP.mpas
    @example Click_RELAY_PIC.mpas
    @example Click_RELAY_PIC32.mpas
    @example Click_RELAY_DSPIC.mpas
    @example Click_RELAY_AVR.mpas
    @example Click_RELAY_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __relay_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */