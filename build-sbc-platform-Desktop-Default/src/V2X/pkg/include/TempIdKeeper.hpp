#ifndef TEMPIDKEEPER_H__
#define TEMPIDKEEPER_H__

#include "data_elements/TemporaryID.hpp"
#include <vector>
#include <random>

using namespace v2x::element;

class TempIdKeeper
{
public:
    TempIdKeeper(double seedA, double seedB, double seedC, double seedD);
    ~TempIdKeeper();

    const CTemporaryID generateTempId();
    const CTemporaryID getLastTempId();

    bool contains(CTemporaryID);
    void initRandomGenerators(double seedA, double seedB, double seedC, double seedD);

private:
    static const int TEMP_ID_SIZE = 4;//TemporaryID has size 4 according to standard
    static const int TEMP_ID_LIST_MAX_SIZE = 8;

    std::vector<std::minstd_rand*> randomGenerators;
    std::vector<CTemporaryID> tempIdList;
    int countdownToNew = 0;
    mutable uint8_t *buf = nullptr;
    int generateCountdownToNew();
    const CTemporaryID generateNewTempId() const;
};

#endif
