#include "../include/ClientHandler.h"

ClientHandler::ClientHandler(int socket) : clientSocket(socket) {
    // Initialiser la gestion du client
}

std::string ClientHandler::receiveData() {
    // Recevoir des données du client
    return ""; // Retourne les données reçues
}

void ClientHandler::sendData(const std::string& data) {
    // Envoyer des données au client
}