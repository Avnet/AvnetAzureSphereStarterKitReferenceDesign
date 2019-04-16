#pragma once

#include <stdbool.h>

#include "epoll_timerfd_utilities.h"

// Device Identification (Who am I) 
#define LSM6DSO_WHO_AM_I   0x0F   // register address
#define LSM6DSO_ID         0x6C   // register value
#define LSM6DSO_ADDRESS	   0x6A	  // I2C Address

bool CheckTransferSize(const char *desc, size_t expectedBytes, ssize_t actualBytes);

int initI2c(void);

void closeI2c(void);