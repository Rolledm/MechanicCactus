#include "Logger.h"

#include <iostream>

namespace Tools {

    std::string Logger::getSeverityString(Severity severity) {
        switch (severity)
        {
        case Severity::DEBUG:
            return "DEBUG";

        case Severity::INFO:
            return "INFO";

        case Severity::WARNING:
            return "WARNING";

        case Severity::ERROR:
            return "ERROR";

        case Severity::FATAL:
            return "FATAL";

        default:
            throw "Unknown severity.";
        }
    }

    void Logger::log(Severity severity, std::string message) {
        std::cout << "[" << getSeverityString(severity) << "]: " << message << std::endl;
    }

}