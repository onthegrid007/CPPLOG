#ifndef LOG_MSG_H
#define LOG_MSG_H

#include "../../vendor/Profiler/vendor/std_extras/advclock/advclock.hpp"
#include "../../vendor/Profiler/vendor/FileUtilities/FileUtilities.hpp"

namespace CPPLOG {
     class LogMsg {
        public:
        enum Level : char {
            OFF = -1,
            TRACE = 0,
            DEBUG = 1,
            INFO = 2,
            WARNING = 3,
            ERROR = 4,
            FATAL = 5
        };
        
        LogMsg() = default;
        LogMsg(std::chrono::Timestamp ts, source_loc loc, string_view_t logger_name, level::level_enum lvl, string_view_t msg);
        LogMsg(source_loc loc, string_view_t logger_name, level::level_enum lvl, string_view_t msg);
        LogMsg(string_view_t logger_name, level::level_enum lvl, string_view_t msg);
        LogMsg(const LogMsg &other) = default;
        LogMsg &operator=(const LogMsg &other) = default;
    };
}

#endif