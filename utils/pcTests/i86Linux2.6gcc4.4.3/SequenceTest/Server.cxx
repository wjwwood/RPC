/** 
 * Generated by DDSRPC   *
 * Simplest server main  *
 */

#include "SequenceTestServer.h"

int main()
{
    int returnedValue = 0;
    int domainId = 0;
    unsigned int threadPoolSize = 5;
    SequenceTestServer *server = new SequenceTestServer(domainId, threadPoolSize);
    server->executeServer();

    delete server;
}
