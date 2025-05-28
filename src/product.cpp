#include "product.h"

std::string Product::getName() { return this->name; }
std::string Product::getCategory() { return this->category; }
float Product::getPrice() { return this->price; }
float Product::getWeight() { return this->weight; }

int Product::setName(std::string name)
{
    if (!validateName(name))
    {
        this->name = name;
        return 0;
    }
    return -1;
}
int Product::setCategory(std::string category)
{
    if (!validateCategory(category))
    {
        this->category = category;
        return 0;
    }
    return -1;
}
int Product::setPrice(float price)
{
    if (!validatePrice(price))
    {
        this->price = price;
        return 0;
    }
    return -1;
}
int Product::setWeight(float weight)
{
    if (!validateWeight(weight))
    {
        this->weight = weight;
        return 0;
    }
    return -1;
}

int Product::validateName(std::string name)
{
    if (name.size() > 0 && name.size() < 31)
    {
        return 0;
    }
    return -1;
}
int Product::validateCategory(std::string category)
{
    if (category.size() > 0 && category.size() < 31)
    {
        return 0;
    }
    return -1;
}
int Product::validatePrice(float price)
{
    if (price > 0)
    {
        return 0;
    }
    return -1;
}

int Product::validateWeight(float weight)
{
    if (weight > 0)
    {
        return 0;
    }
    return -1;
}
