#pragma once

struct serverInfo
{
	int regionID;
	int currentPlayerCount;
	int maxPlayer;
	int ping;
};

class serverBrowserService
{
private:
	serverInfo servers[50];

	size_t serverCount = 0;

public:
	bool registerServer(serverInfo& newServer);

	size_t getServers(serverInfo* dstArray, size_t dstSize);

	int pingLimit;

	int region;

};