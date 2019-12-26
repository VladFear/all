#include <iostream>
#include <string>
#include <thread>

#include <ASN1Exch.h>

#include "BSMHandler.h"
#include "EVAHandler.h"
#include "ICAHandler.h"
#include "MAPHandler.h"
#include "SPATHandler.h"

#include "Listener.h"


int main(int argc, char *argv[])
{
    if (argc > 1) {
        bool noCmd = false;
        setupSubscriptions();

        int id = 0;
        if (argc > 2) {
            id = atoi(argv[2]);
        }

        std::string cmd = argv[1];
        if (cmd == "bsm") {
            startBSM(id);
        } else if (cmd == "eva") {
            startEVA(id);
        } else if (cmd == "ica") {
            startICA(id);
        } else if (cmd == "map") {
            startMAP();
        } else if (cmd == "spat") {
            startSPAT();
        } else if (cmd == "listener") {
            // start endless loop for listeners work
            while (1) {}
        } else if (cmd == "-h") {
            std::cout << "USAGE:" << std::endl;
            std::cout << "./ClusterMock bsm [carId] #start bsm send loop + listener" << std::endl;
            std::cout << "./ClusterMock ica [carId] #start ica send loop + listener" << std::endl;
            std::cout << "./ClusterMock eva [carId] #start eva send loop + listener" << std::endl;
            std::cout << "./ClusterMock map         #start map send loop + listener" << std::endl;
            std::cout << "./ClusterMock spat        #start spat send loop + listener" << std::endl;
            std::cout << "./ClusterMock listener    #start listener loop" << std::endl;
        } else {
            noCmd = true;
        }

        if (!noCmd) {
            dropSubscriptions();
        }
    }

    dropSubscriptions();
    return 0;
}
