#pragma once
#include "product.h"

class Buy : public Product
{
private:
    int amountItems;
    float totalPrice;
    float totalWeight;

public:
    Buy(Product *&product, int amountItems) : Product(*product)
    {
        std::cout << this->getName() << " " << this->getCategory() << std::endl;
        if (setAmountItems(amountItems) || setTotalPrice(this->getPrice() * this->amountItems) || setTotalWeight(this->getWeight() * this->amountItems))
        {
            throw std::runtime_error("Error: creation invalid buy");
        }
    }

    int getAmountItems();
    float getTotalPrice();
    float getTotalWeight();

    int setAmountItems(int amountItems);
    int setTotalPrice(float price);
    int setTotalWeight(float weight);

    int validateAmountItems(int amountItems);
    int validateTotalPrice(float price);
    int validateTotalWeight(float weight);
};