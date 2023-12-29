//
// Created by Enzo Deshayes on 29/12/2023.
//

#ifndef OPENVCOD_CLIENT_HANDLER_H
#define OPENVCOD_CLIENT_HANDLER_H

#include <string>

class ClientHandler {
public:
    ClientHandler(/* int clientSocket */);
    std::string receiveData();
    void sendData(const std::string& data);

private:
    int clientSocket;
};

#endif // OPENVCOD_CLIENT_HANDLER_H

