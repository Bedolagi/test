#pragma once
#include <iostream>

class Product
{
private:
  std::string name;
  std::string category;
  float price;
  float weight;

public:
  Product(std::string name, std::string category, float price, float weight)
  {
    if (setName(name) || setCategory(category) || setPrice(price) || setWeight(weight))
    {
      throw std::runtime_error("Error: creation invalid product");
    }
  }

  std::string getName();
  std::string getCategory();
  float getPrice();
  float getWeight();

  int setName(std::string name);
  int setCategory(std::string category);
  int setPrice(float price);
  int setWeight(float weight);

  int validateName(std::string name);
  int validateCategory(std::string category);
  int validatePrice(float price);
  int validateWeight(float weight);
};
