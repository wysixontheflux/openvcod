#ifndef OPENVCOD_VERSION_DETECTOR_H
#define OPENVCOD_VERSION_DETECTOR_H

#include "ClientHandler.h"

class VersionDetector {
public:
    int detect(ClientHandler& client);
};

#endif // OPENVCOD_VERSION_DETECTOR_H
