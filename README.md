![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# RELAY Click

---

- **CIC Prefix**  : RELAY
- **Author**      : MikroE Team
- **Verison**     : 1.0.0
- **Date**        : Mar 2018.

---

### Software Support

We provide a library for the RELAY Click on our [LibStock](https://libstock.mikroe.com/projects/view/526/relay-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library offers a option to control state of relays.

Key functions :

- ``` void relay_relay2Control( uint8_t pinState ) ``` - Controls the Relay 2 pin.
- ``` void relay_relay1Control( uint8_t pinState ) ``` - Controls the Relay 1 pin.

**Examples Description**

The application is composed of three sections :

- System Initialization - Sets pin directions.
- Application Initialization - Initializes driver.
- Application Task - Turns relays on and off.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/526/relay-click) page.

Other mikroE Libraries used in the example:

- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
