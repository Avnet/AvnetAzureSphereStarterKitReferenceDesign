#pragma once

// If your application is going to connect to an IoT Central Application, then enable this define.  When
// enabled Device Twin JSON updates will conform to what IoT Central expects to confirm Device Twin settings
//#define IOT_CENTRAL_APPLICATION

// If your application is going to connect straight to a IoT Hub, then enable this define.
//#define IOT_HUB_APPLICATION

#if (defined(IOT_CENTRAL_APPLICATION) && defined(IOT_HUB_APPLICATION))
#error "Can not define both IoT Central and IoT Hub Applications at the same time only define one."
#endif 

#if (!defined(IOT_CENTRAL_APPLICATION) && !defined(IOT_HUB_APPLICATION))
#warning "Building application for no cloud connectivity"
#endif 

#ifdef IOT_CENTRAL_APPLICATION
#warning "Building for IoT Central Application"
#endif 

#ifdef IOT_HUB_APPLICATION
#warning "Building for IoT Hub Application"
#endif 


// Defines how quickly the accelerator data is read and reported
#define ACCEL_READ_PERIOD_SECONDS 1
#define ACCEL_READ_PERIOD_NANO_SECONDS 0

// Enables I2C read/write debug
//#define ENABLE_READ_WRITE_DEBUG