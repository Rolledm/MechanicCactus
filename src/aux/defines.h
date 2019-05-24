#ifndef DEFINES_H
#define DEFINES_H

#include "../tools/Logger.h"

#define MC_LOG(severity, message) Tools::Logger::getInstance().log(severity, message)

#endif