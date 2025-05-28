#pragma once
#include <vector>
#include <fstream>
#include "../include/json.hpp"
#include "check.h"

using json = nlohmann::json;

class ProductManager
{
private:
    std::vector<Product *> products;
    std::string jsonPath;

    void saveProducts();

public:
    ProductManager(std::string jsonPath) : jsonPath(jsonPath) {}

    void editProductName();
    void editProductCategory();
    void editProductPrice();
    void editProductWeight();

    void loadProducts();

    void displayProducts();
    void buyProducts(std::string name, int amountItems);

    std::vector<Product *> findProducts(std::string name, std::string category = "");
};