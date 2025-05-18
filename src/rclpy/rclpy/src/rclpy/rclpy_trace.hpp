#ifndef RCLPY__RCLPY_TRACE_HPP_
#define RCLPY__RCLPY_TRACE_HPP_


#include <pybind11/pybind11.h>


namespace py = pybind11;

namespace rclpy
{
    void trace_publish(const uint64_t publisher_handle, const char * node_name, const uint64_t message, const char * topic_name);

    void trace_take(const char * node_name, const uint64_t message, const char * topic_name,
                    const int64_t source_timestamp, const int64_t received_timestamp);

    void trace_callback_start(uint64_t callback, const char * node_name);

    void trace_callback_end(uint64_t callback, const char * node_name);
}

#endif  // RCLPY__RCLPY_TRACE_HPP_