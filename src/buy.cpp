#include "buy.h"

int Buy::getAmountItems() { return amountItems; }
float Buy::getTotalPrice() { return amountItems * this->getPrice(); }
float Buy::getTotalWeight() { return amountItems * this->getWeight(); }

int Buy::setAmountItems(int amountItems)
{
    if (!validateAmountItems(amountItems))
    {
        this->amountItems = amountItems;
        return 0;
    }
    return -1;
}
int Buy::setTotalPrice(float totalPrice)
{
    if (!validateTotalPrice(totalPrice))
    {
        this->totalPrice = totalPrice;
        return 0;
    }
    return -1;
}
int Buy::setTotalWeight(float totalWeight)
{
    if (!validateTotalWeight(totalWeight))
    {
        this->totalWeight = totalWeight;
        return 0;
    }
    return -1;
}

int Buy::validateAmountItems(int amountItems)
{
    if (amountItems > 0)
    {
        return 0;
    }
    return -1;
}
int Buy::validateTotalPrice(float totalPrice)
{
    if (totalPrice > 0)
    {
        return 0;
    }
    return -1;
}
int Buy::validateTotalWeight(float totalWeight)
{
    if (totalWeight > 0)
    {
        return 0;
    }
    return -1;
}