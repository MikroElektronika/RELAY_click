/*
Example for RELAY Click

    Date          : Mar 2018.
    Author        : MikroE Team

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.2.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets pin directions
- Application Initialization - Initializes driver
- Application Task - Turns relays on and off


*/

#include "Click_RELAY_types.h"
#include "Click_RELAY_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );

    mikrobus_logInit( _LOG_USBUART, 9600 );

    Delay_ms( 100 );
}

void applicationInit()
{
    relay_gpioDriverInit( (T_RELAY_P)&_MIKROBUS1_GPIO );
}

void applicationTask()
{
    relay_relay2Control ( 1 );
    relay_relay1Control( 1 );
    mikrobus_logWrite("Relays turned on", _LOG_LINE);
    
    Delay_ms(1000);
    
    relay_relay2Control ( 0 );
    relay_relay1Control( 0 );
    mikrobus_logWrite("Relays turned off", _LOG_LINE);
    
    Delay_ms(1000);
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}
