#include "product_manager.h"

std::vector<Product *> ProductManager::findProducts(std::string name, std::string category)
{
    bool checkCategory = !category.empty();

    std::vector<Product *> foundProducts;

    if (checkCategory)
    {
        for (auto product : this->products)
        {
            if (product->getName() == name && product->getCategory() == category)
            {
                foundProducts.push_back(product);
            }
        }
    }
    else
    {
        for (auto product : this->products)
        {
            if (product->getName() == name)
            {
                foundProducts.push_back(product);
            }
        }
    }

    return foundProducts;
}

void ProductManager::displayProducts()
{
    for (auto product : this->products)
    {
        std::cout << product->getName() << " ";
        std::cout << product->getCategory() << " ";
        std::cout << product->getPrice() << " ";
        std::cout << product->getWeight() << " \n";
    }
}
void ProductManager::loadProducts()
{
    std::ifstream file(this->jsonPath);
    if (file.is_open())
    {
        nlohmann::json jsonData;

        file >> jsonData;

        this->products.clear();

        for (auto productData : jsonData)
        {
            Product *product = new Product(
                productData["name"].get<std::string>(),
                productData["category"].get<std::string>(),
                productData["price"].get<float>(),
                productData["weight"].get<float>());

            this->products.push_back(product);
        }
    }
    else
    {
        std::cout << "products.json is not found!\n";
    }
}