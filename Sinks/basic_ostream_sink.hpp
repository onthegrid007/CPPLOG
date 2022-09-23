#include "basic_sink.hpp"
#include <ostream>

namespace CPPLOG {
    class OStreamSink : public BasicSink<std::ostream> {
        public:
        OStreamSink();
        ~OStreamSink();
        virtual void open();
        virtual void close();
        virtual void flush();
        virtual void clear();
        virtual bool drain(char plugged = -1);
    };
} 