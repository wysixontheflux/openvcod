CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude

all: openvcod

openvcod: src/main.cpp src/ClientHandler.cpp src/NetworkUtils.cpp src/ProtocolHandler.cpp src/Server.cpp src/VersionDetector.cpp
	$(CXX) $(CXXFLAGS) -o openvcod src/main.cpp src/ClientHandler.cpp src/NetworkUtils.cpp src/ProtocolHandler.cpp src/Server.cpp src/VersionDetector.cpp

clean:
	rm -f openvcod
