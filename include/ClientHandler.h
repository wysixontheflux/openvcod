#ifndef OPENVCOD_CLIENT_HANDLER_H
#define OPENVCOD_CLIENT_HANDLER_H

#include <string>

class ClientHandler {
public:
    ClientHandler(int clientSocket);  // Assurez-vous que cette déclaration correspond à la définition
    std::string receiveData();
    void sendData(const std::string& data);

private:
    int clientSocket;
};

#endif // OPENVCOD_CLIENT_HANDLER_H
