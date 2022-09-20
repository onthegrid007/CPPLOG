#ifndef BASIC_SINK_HPP
#define BASIC_SINK_HPP
#include "utilities/formatter.hpp"

namespace CPPLOG {
    template<typename T>
    class BasicSink {
        public:
        typedef T Type;
        BasicSink() = 0;
        ~BasicSink() = 0;
        virtual void open() = 0;
        virtual void close() = 0;
        virtual void flush() = 0;
        virtual void clear() = 0;
        virtual bool drain(char plugged = -1) = 0;
        
        protected:
        T m_ostream;
        Formatter<T> m_formatter = 0;
    };
}
#endif