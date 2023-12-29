#ifndef OPENVCOD_SERVER_H
#define OPENVCOD_SERVER_H

#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <memory>
#include "ClientHandler.h"

class Server {
public:
    bool start(int port);
    void run();
    void stop();

private:
    int serverPort;
    bool isRunning;
    std::vector<std::thread> clientThreads;

    void handleClient(std::shared_ptr<ClientHandler> client);
};

#endif // OPENVCOD_SERVER_H
