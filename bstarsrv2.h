//
// Created by linhdh on 29/09/2025.
//

#ifndef ZMQ_BINARY_STAR_PATTERN_BSTARSRV2_H
#define ZMQ_BINARY_STAR_PATTERN_BSTARSRV2_H

#include "bstar.hpp"

// Echo service
void s_echo(zmqpp::loop *loop, zmqpp::socket_t *socket, void *arg) {
    zmqpp::message_t msg;
    socket->receive(msg);
    socket->send(msg);
}

#endif //ZMQ_BINARY_STAR_PATTERN_BSTARSRV2_H