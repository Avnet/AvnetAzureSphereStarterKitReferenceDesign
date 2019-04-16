#pragma once
/// This header contains the peripheral pinout definitions for the Avnet MT3620 Module(s) and Starter Kit Board
#pragma once

#include <soc/mt3620_gpios.h>
//#include <soc/mt3620_uarts.h>
#include <soc/mt3620_i2cs.h>
#include <applibs/gpio.h> 

/*  This file includes all the signal definitions to utilize the Avnet Azure Sphere (MT3620) Module and the Avnet Azure Sphere Starter Kit

	The file is broken into sections to help the user identify which defines he/she needs

	* Module defines contains definitions for all the signals that can be found on the Avnet MT3620 Module.  These defines are used
	when defining the Starter Kit signals.

	* Click Module Sections contain the defines for each of the two click sockets and are broken into two headers for each module.
	Furthermore, the signals are listed in the same order that they are wired on the Starter Kit from pin 1 - pin 8.

	* Grove Connector, Display Connector, LSM6DSOTR sections contain the signal definitions for the I2C signals on the Starter Kit.  Note
	that the signals for each connector/device are shared, we've included separate definitions to help with self-documenting code efforts.
*/
// Compatible Seeed MT3620 Dev Board defines (for backward compatability to earlier RDB examples) 
#define MT3620_RDB_LED1_RED    MT3620_GPIO8   // AVT_MODULE_GPIO8
#define MT3620_RDB_LED1_GREEN  MT3620_GPIO9   // AVT_MODULE_GPIO9
#define MT3620_RDB_LED1_BLUE   MT3620_GPIO10  // AVT_MODULE_GPIO10
#define MT3620_RDB_BUTTON_A    MT3620_GPIO12  // AVT_MODULE_GPIO12
#define MT3620_RDB_BUTTON_B    MT3620_GPIO13  // AVT_MODULE_GPIO13


// Avnet Starter Kit LED defines
#define AVT_LED_APP AVT_MODULE_GPIO4
#define AVT_LED_WIFI AVT_MODULE_GPIO5

// Avnet MT3620 Module defines

#define AVT_MODULE_GPIO0_PWM0				MT3620_GPIO0
#define AVT_MODULE_GPIO1_PWM1				MT3620_GPIO1
#define AVT_MODULE_GPIO2_PWM2				MT3620_GPIO2
#define AVT_MODULE_GPIO4					MT3620_GPIO4
#define AVT_MODULE_GPIO5					MT3620_GPIO5
#define AVT_MODULE_GPIO6_PWM6				MT3620_GPIO6
#define AVT_MODULE_GPIO8					MT3620_GPIO8
#define AVT_MODULE_GPIO9					MT3620_GPIO9
#define AVT_MODULE_GPIO10					MT3620_GPIO10
#define AVT_MODULE_GPIO12					MT3620_GPIO12
#define AVT_MODULE_GPIO13					MT3620_GPIO13
#define AVT_MODULE_GPIO16					MT3620_GPIO16
#define AVT_MODULE_GPIO17					MT3620_GPIO17
#define AVT_MODULE_GPIO26_SCLK0_TX0			(GPIO_Id)26
#define AVT_MODULE_GPIO27_MOSI0_RTS0_CLK0	(GPIO_Id)27
#define AVT_MODULE_GPIO28_MISO0_RX0_DATA0	(GPIO_Id)28
#define AVT_MODULE_GPIO29_CSA0_CTS0			(GPIO_Id)29
#define AVT_MODULE_GPIO31_SCLK1_TXD1		(GPIO_Id)31
#define AVT_MODULE_GPIO32_MOSI1_RTS1_CLK1	(GPIO_Id)32
#define AVT_MODULE_GPIO33_MISO1_RXD1_DATA1	(GPIO_Id)33
#define AVT_MODULE_GPIO34_CSA1_CTS1			(GPIO_Id)34
#define AVT_MODULE_GPIO35_CSB1				MT3620_GPIO35
#define AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2	(GPIO_Id)37
#define AVT_MODULE_GPIO38_MISO2_RXD2_SDA2	(GPIO_Id)38
#define AVT_MODULE_GPIO41_ADC0				MT3620_GPIO41
#define AVT_MODULE_GPIO42_ADC1				MT3620_GPIO42
#define AVT_MODULE_GPIO43_ADC2				MT3620_GPIO43

// Avnet MT3620 Starter Kit defines

// Click Module Site #1 Header J1 

/// <summary>Click Module 1 AN is GPIO 42.</summary>
#define AVT_SK_CM1_AN AVT_MODULE_GPIO42_ADC1

/// <summary>Click Module 1 RST is GPIO 16.</summary>
#define AVT_SK_CM1_RST AVT_MODULE_GPIO16

/// <summary>Click Module 1 CS is GPIO 34.</summary>
#define AVT_SK_CM1_CS AVT_MODULE_GPIO34_CSA1_CTS1

/// <summary>Click Module 1 SCK is GPIO 31.</summary>
#define AVT_SK_CM1_SCK AVT_MODULE_GPIO31_SCLK1_TXD1

/// <summary>Click Module 1 MISO is GPIO 33.</summary>
#define AVT_SK_CM1_MISO AVT_MODULE_GPIO33_MISO1_RXD1_DATA1

/// <summary>Click Module 1 MOSI is GPIO 32.</summary>
#define AVT_SK_CM1_MOSI AVT_MODULE_GPIO32_MOSI1_RTS1_CLK1

// Pin 7 is +3.3V
// Pin 8 is GND

// Click Module Site #1 Header J2

/// <summary>Click Module 1 PWM is GPIO 0.</summary>
#define AVT_SK_CM1_PWM AVT_MODULE_GPIO0_PWM0

/// <summary>Click Module 1 INT is GPIO 2.</summary>
#define AVT_SK_CM1_INT AVT_MODULE_GPIO2_PWM2

/// <summary>Click Module 1 RX is GPIO 28.</summary>
#define AVT_SK_CM1_RX AVT_MODULE_GPIO28_MISO0_RX0_DATA0

/// <summary>Click Module 1 TX is GPIO 26.</summary>
#define AVT_SK_CM1_TX AVT_MODULE_GPIO26_SCLK0_TX0

/// <summary>Click Module 1 SCL is GPIO 37.</summary>
#define AVT_SK_CM1_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2

/// <summary>Click Module 1 SDA is GPIO 38.</summary>
#define AVT_SK_CM1_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2

// Pin 7 is +5V
// Pin 8 is GND


// Click Module Site #2 Header J3 

/// <summary>Click Module 2 AN is GPIO43.</summary>
#define AVT_SK_CM2_AN AVT_MODULE_GPIO43_ADC2

/// <summary>Click Module 2 RST is GPIO 17.</summary>
#define AVT_SK_CM2_RST AVT_MODULE_GPIO17

/// <summary>Click Module 2 CS is GPIO 35.</summary>
#define AVT_SK_CM2_CS AVT_MODULE_GPIO35_CSB1

/// <summary>Click Module 2 SCK is GPIO 31.</summary>
#define AVT_SK_CM2_SCK AVT_MODULE_GPIO31_SCLK1_TXD1

/// <summary>Click Module 2 MOSO is GPIO 33.</summary>
#define AVT_SK_CM2_MISO AVT_MODULE_GPIO33_MISO1_RXD1_DATA1

/// <summary>Click Module 2 MOSI is GPIO 32.</summary>
#define AVT_SK_CM2_MOSI AVT_MODULE_GPIO32_MOSI1_RTS1_CLK1

// Pin 7 is +3.3V
// Pin 8 is GND

// Click Module Site #2 Header J4

/// <summary>Click Module 2 PWM is GPIO 1.</summary>
#define AVT_SK_CM2_PWM AVT_MODULE_GPIO0_PWM1

/// <summary> Click Module 2 INT is GPIO 2.</summary>
#define AVT_SK_CM2_INT AVT_MODULE_GPIO2_PWM2

/// <summary>Click Module 2 RX is GPIO 28.</summary>
#define AVT_SK_CM2_RX AVT_MODULE_GPIO28_MISO0_RX0_DATA0

/// <summary>Click Module 2 TX is GPIO 26.</summary>
#define AVT_SK_CM2_TX AVT_MODULE_GPIO26_SCLK0_TX0

/// <summary>Click Module 2 SCL is GPIO 37.</summary>
#define AVT_SK_CM2_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2

/// <summary>Click Module 2 SDA is GPIO 38.</summary>
#define AVT_SK_CM2_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2

// Pin 7 is +5V
// Pin 8 is GND

// Grove Connector Signals

/// <summary>Grove Connector SCL is GPIO 37.</summary>
#define AVT_SK_GROVE_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2

/// <summary>Grove Connector SDA is GPIO 38.</summary>
#define AVT_SK_GROVE_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2

// Display Connector Signals

/// <summary>Display Connector SCL is GPIO 37.</summary>
#define AVT_SK_DISPLAY_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2

/// <summary>Display Connector SDA is GPIO 38.</summary>
#define AVT_SK_DISPLAY_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2

// LSM6DSOTR Signals

/// <summary>LSM6DSOTR SCL is GPIO 37.</summary>
#define AVT_SK_I2C_LSM6DSOTR_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2

/// <summary>LSM6DSOTR SLA is GPIO 38.</summary>
#define AVT_SK_I2C_LSM6DSOTR_SDA2 AVT_MODULE_GPIO38_MISO2_RXD2_SDA2


// Uart defines

/// <summary> Click Module 1 UART is GPIO 26(TX) and GPIO 28(RX).</summary>
#define AVT_SK_CM1_ISU0_UART MT3620_UART_ISU0

/// <summary> Click Module 2 UART is GPIO 26(TX) and GPIO 28(RX).</summary>
#define AVT_SK_CM2_ISU0_UART MT3620_UART_ISU0


/// <summary>ISU2 is for I2C use. It connects to the Click Sockets, Grove Connector, OLED Display and the LSM6DSO sensor </summary>
#define MT3620_RDB_HEADER4_ISU2_I2C MT3620_I2C_ISU2


/*

This commented out section shows how I captured all the signal definitions.  I used the Starter Kit Schematic and for each signal from the Module, I seached the 
Starter Kit schematics and added entries everywhere each signal was found.  Use this section to check my work.  Note that if you do find a mistake, please 
correct the corresponding define above.

Thanks,

Brian

// Signals grouped together for easier validation

/// <summary>Click Module 1 PWM is GPIO 0.</summary>
#define AVT_MODULE_GPIO0_PWM0 MT3620_GPIO0
#define AVT_SK_CM1_PWM AVT_MODULE_GPIO0_PWM0

/// <summary>Click Module 2 PWM is GPIO 1.</summary>
#define AVT_MODULE_GPIO1_PWM1 MT3620_GPIO1
#define AVT_SK_CM2_PWM AVT_MODULE_GPIO0_PWM1

/// <summary>Click Module 1 INT is GPIO 2.</summary>
#define AVT_MODULE_GPIO2_PWM2 MT3620_GPIO2
#define AVT_SK_CM1_INT AVT_MODULE_GPIO2_PWM2

/// <summary> Click Module 2 INT is GPIO 2.</summary>
#define AVT_SK_CM2_J4_P2_GPIO2_PWM2 AVT_MODULE_GPIO2_PWM2
#define AVT_SK_CM2_INT AVT_MODULE_GPIO2_PWM2

/// <summary>Application LED is GPIO4.</summary>
#define AVT_MODULE_GPIO4 MT3620_GPIO4
#define AVT_SK_LED_APP_GPIO4 AVT_MODULE_GPIO4

/// <summary>WiFi LED is GPIO5.</summary>
#define AVT_MODULE_GPIO5 MT3620_GPIO5
#define AVT_SK_LED_WIFI_GPIO5 AVT_MODULE_GPIO5

/// <summary>LSM6DSOTR INT is GPIO6.</summary>
#define AVT_MODULE_GPIO6_PWM6 MT3620_GPIO6
#define AVT_SK_LSM6DSOTR_INT AVT_MODULE_GPIO6_PWM6

/// <summary>User LED Red channel is GPIO8.</summary>
#define AVT_MODULE_GPIO8 MT3620_GPIO8
#define AVT_SK_LED_USER_RED AVT_MODULE_GPIO8

/// <summary>User LED Green channel is GPIO9.</summary>
#define AVT_MODULE_GPIO9 MT3620_GPIO9
#define AVT_SK_GPIO8_LED_USER_GREEN AVT_MODULE_GPIO9

/// <summary>User LED Blue channel is GPIO10.</summary>
#define AVT_MODULE_GPIO10 MT3620_GPIO10
#define AVT_SK_LED_USER_BLUE AVT_MODULE_GPIO10

/// <summary>Button A is GPIO12.</summary>
#define AVT_MODULE_GPIO12 MT3620_GPIO12
#define AVT_SK_SW_A AVT_MODULE_GPIO12

/// <summary>Button B is GPIO13.</summary>
#define AVT_MODULE_GPIO13 MT3620_GPIO13
#define AVT_SK_SW_B AVT_MODULE_GPIO13

/// <summary>Click Module 1 RST is GPIO 16.</summary>
#define AVT_MODULE_GPIO16 MT3620_GPIO16
#define AVT_SK_CM1_RST AVT_MODULE_GPIO16

/// <summary>Click Module 2 RST is GPIO 17.</summary>
#define AVT_MODULE_GPIO17 MT3620_GPIO17
#define AVT_SK_CM2_RST AVT_MODULE_GPIO17

/// <summary>Click Module 1 TX is GPIO 26.</summary>
#define AVT_MODULE_GPIO26_SCLK0_TX0 (GPIO_ID)26
#define AVT_SK_CM1_TX AVT_MODULE_GPIO26_SCLK0_TX0
/// <summary>Click Module 2 TX is GPIO 26.</summary>
#define AVT_SK_CM2_TX AVT_MODULE_GPIO26_SCLK0_TX0

/// <summary>MOSI0 RTS0 CLK0 is GPIO 27.</summary>
#define AVT_MODULE_GPIO27_MOSI0_RTS0_CLK0 (GPIO_ID)27


/// <summary>Click Module 1 RX is GPIO 28.</summary>
#define AVT_MODULE_GPIO28_MISO0_RX0_DATA0 (GPIO_ID)28
#define AVT_SK_CM1_RX AVT_MODULE_GPIO28_MISO0_RX0_DATA0
/// <summary>Click Module 2 RX is GPIO 28.</summary>
#define AVT_SK_CM2_RX AVT_MODULE_GPIO28_MISO0_RX0_DATA0

#define AVT_MODULE_GPIO29_CSA0_CTS0 (GPIO_ID)29

/// <summary>Click Module 1 SCK is GPIO 31.</summary>
#define AVT_MODULE_GPIO31_SCLK1_TXD1 (GPIO_ID)31
#define AVT_SK_CM1_SCK AVT_MODULE_GPIO31_SCLK1_TXD1
/// <summary>Click Module 2 SCK is GPIO 31.</summary>
#define AVT_SK_CM2_SCK AVT_MODULE_GPIO31_SCLK1_TXD1

/// <summary>Click Module 1 MOSI is GPIO 32.</summary>
#define AVT_MODULE_GPIO32_MOSI1_RTS1_CLK1 (GPIO_ID)32
#define AVT_SK_CM1_MOSI AVT_MODULE_GPIO32_MOSI1_RTS1_CLK1
/// <summary>Click Module 2 MOSI is GPIO 32.</summary>
#define AVT_SK_CM2_MOSI AVT_MODULE_GPIO32_MOSI1_RTS1_CLK1

/// <summary>Click Module 1 MISO is GPIO 33.</summary>
#define AVT_MODULE_GPIO33_MISO1_RXD1_DATA1 (GPIO_ID)33
#define AVT_SK_CM1_MISO AVT_MODULE_GPIO33_MISO1_RXD1_DATA1
/// <summary>Click Module 2 MOSO is GPIO 33.</summary>
#define AVT_SK_CM2_MISO AVT_MODULE_GPIO33_MISO1_RXD1_DATA1

/// <summary>Click Module 1 SC is GPIO 34.</summary>
#define AVT_MODULE_GPIO34_CSA1_CTS1 (GPIO_ID)34
#define AVT_SK_CM1_CS AVT_MODULE_GPIO34_CSA1_CTS1

/// <summary>Click Module 2 CS is GPIO 35.</summary>
#define AVT_MODULE_GPIO35_CSB1 (GPIO_ID)35
#define AVT_SK_CM2_CS AVT_MODULE_GPIO35_CSB1


#define AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2 (GPIO_ID)37
/// <summary>Click Module 1 SCL is GPIO 37.</summary>
#define AVT_SK_CM1_SCL2 AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2
/// <summary>Click Module 2 SCL is GPIO 37.</summary>
#define AVT_SK_CM2_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2
/// <summary>Grove Connector SCL is GPIO 37.</summary>
#define AVT_SK_GROVE_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2
/// <summary>Display Connector SCL is GPIO 37.</summary>
#define AVT_SK_DISPLAY_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2
/// <summary>LSM6DSOTR SCL is GPIO 37.</summary>
#define AVT_SK_I2C_LSM6DSOTR_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2
/// <summary>Starter Kit SCL is GPIO 37.</summary>
#define AVT_SK_I2C_SCL AVT_MODULE_GPIO37_MOSI2_RTS2_SCL2

#define AVT_MODULE_GPIO38_MISO2_RXD2_SDA2 (GPIO_ID)38
/// <summary>Click Module 1 SDA is GPIO 38.</summary>
#define AVT_SK_CM1_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2
/// <summary>Click Module 2 SDA is GPIO 38.</summary>
#define AVT_SK_CM2_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2
/// <summary>Grove Connector SDA is GPIO 38.</summary>
#define AVT_SK_GROVE_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2
/// <summary>Display Connector SDA is GPIO 38.</summary>
#define AVT_SK_DISPLAY_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2
/// <summary>LSM6DSOTR SLA is GPIO 38.</summary>
#define AVT_SK_I2C_LSM6DSOTR_SDA2 AVT_MODULE_GPIO38_MISO2_RXD2_SDA2
/// <summary>Starter Kit SLA is GPIO 38.</summary>
#define AVT_SK_I2C_SDA AVT_MODULE_GPIO38_MISO2_RXD2_SDA2

#define AVT_MODULE_GPIO41_ADC0 (GPIO_ID)41
/// <summary>Light Sensor ADC is GPIO 41.</summary>
#define AVT_SK_LIGHT_SENSOR_ADC AVT_MODULE_GPIO41_ADC0

#define AVT_MODULE_GPIO42_ADC1 (GPIO_ID)42
// <summary> Click Module 1 AN is GPIO 42.</summary>
#define AVT_SK_CM1_AN AVT_MODULE_GPIO42_ADC1

#define AVT_MODULE_GPIO43_ADC2 (GPIO_ID)43
/// <summary>Click Module 2 AN is GPIO43.</summary>
#define AVT_SK_CM2_AN AVT_MODULE_GPIO43_ADC2

/// <summary> Click Module 1 UART is GPIO 26(TX) and GPIO 28(RX).</summary>
#define MT3620_CM1_ISU0_UART MT3620_UART_ISU0

// <summary> Click Module 2 UART is GPIO 26(TX) and GPIO 28(RX).</summary>
#define MT3620_CM2_ISU0_UART MT3620_UART_ISU0
*/