#include <cstdlib>
#include <iostream>
#include "server.h"

bool serverBrowserService::registerServer(serverInfo& newServer)
{
	if (serverCount == 50) { return false; }

	servers[serverCount] = newServer;

	serverCount++;

	return true;
}

size_t serverBrowserService::getServers(serverInfo* dstArray, size_t dstSize)
{
	size_t elementCount = 0;

	for (size_t i = 0; i < serverCount; i++)
	{
		if (servers[i].ping > pingLimit) {
			continue;
		}

		if (servers[i].regionID != region)
		{
			continue;
		}
		dstArray[elementCount] = servers[i];

		elementCount++;

		if (elementCount >= dstSize)
		{
			break;
		}
	}

	return elementCount;
}