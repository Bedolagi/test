#include "check.h"

void Check::displayItemInfo()
{
    std::cout << "===Item Info===\n";
    std::cout << "Item name: " << this->getName() << std::endl;
    std::cout << "Item category: " << this->getCategory() << std::endl;
    std::cout << "Item price: " << this->getPrice() << std::endl;
    std::cout << "Item weight: " << this->getWeight() << std::endl;
}
void Check::displayBuyInfo()
{
    std::cout << "===BUY===\n";
    std::cout << "Item name: " << this->getName() << std::endl;
    std::cout << "Amount Items: " << this->getAmountItems() << std::endl;
    std::cout << "Total Price: " << this->getTotalPrice() << std::endl;
    std::cout << "Total Weight: " << this->getTotalWeight() << std::endl;
}