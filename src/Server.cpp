#include "../include/Server.h"
#include "../include/ClientHandler.h"
#include "../include/VersionDetector.h"

bool Server::start(int port) {
    serverPort = port;
    isRunning = true;

    // Initialisation du socket serveur et écoute sur le port spécifié
    // Exemple : int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    std::cout << "Server started on port " << serverPort << std::endl;
    return true; // Retourne true si le serveur démarre avec succès
}

void Server::run() {
    while (isRunning) {
        // Accepter les connexions entrantes
        // Exemple : int clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, &addrLen);

        // Créer un nouveau ClientHandler pour gérer la connexion
        auto clientHandler = std::make_shared<ClientHandler>(/* clientSocket */);

        // Démarrer un nouveau thread pour gérer le client
        clientThreads.push_back(std::thread(&Server::handleClient, this, clientHandler));
    }
}

void Server::stop() {
    isRunning = false;
    // Fermer le socket serveur et nettoyer les ressources
}

void Server::handleClient(std::shared_ptr<ClientHandler> client) {
    // Gérer la communication avec le client
    // Exemple : std::string message = client->receiveData();
    // Traiter le message et répondre si nécessaire
}