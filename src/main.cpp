#include "../include/Server.h"

int main() {
    Server gameServer;
    if (gameServer.start(12345)) {  // Démarrer le serveur sur le port 12345
        gameServer.run();           // Exécuter la boucle principale du serveur
    }
    return 0;
}

