#ifndef LOGGER_H
#define LOGGER_H

#include <string>

namespace Tools {

    enum class Severity {
        DEBUG, INFO, WARNING, ERROR, FATAL
    };

    class Logger {
    private:
        Logger() {}
        Logger(const Logger&);
        Logger& operator=(Logger&);

        std::string getSeverityString(Severity severity);
    public:
        void log(Severity severity, std::string message);

        static Logger& getInstance() {
            static Logger instance;
            return instance;
        }
    };


}

#endif