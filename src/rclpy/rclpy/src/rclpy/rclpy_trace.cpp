#include "rclpy_trace.hpp"
#include  "tracetools/tracetools.h"


namespace rclpy
{
    void trace_publish(const uint64_t publisher_handle, const char * node_name, const uint64_t message, const char * topic_name) {
        TRACEPOINT(rclpy_publish, publisher_handle, node_name, message, topic_name);
    }

    void trace_take(const char * node_name, const uint64_t message, const char * topic_name, 
        const int64_t source_timestamp, const int64_t received_timestamp) {
        TRACEPOINT(rclpy_take, node_name, message, topic_name, source_timestamp, received_timestamp);
    }

    void trace_callback_start(uint64_t callback, const char * node_name) {
        TRACEPOINT(rclpy_callback_start, callback, node_name);
    }

    void trace_callback_end(uint64_t callback, const char * node_name) {
        TRACEPOINT(rclpy_callback_end, callback, node_name);
    }
}