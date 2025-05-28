#pragma once
#include "buy.h"

class Check : public Buy
{
public:
    Check(Buy *&buy) : Buy(*buy) {}

    void displayItemInfo();
    void displayBuyInfo();
};