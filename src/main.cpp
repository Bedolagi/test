#include <iostream>
#include <vector>
#include "check.h"
#include "product_manager.h"

int main()
{
    ProductManager *productManager = new ProductManager("./products.json");
    productManager->loadProducts();

    std::vector<std::string>
        menuText{
            "1. Display Items",
            "2. Edit Item",
            "3. Buy Item",
            "4. Find Item",
            "5. Find Items with same price"};
    while (true)
    {
        std::cout << "===MENU===\n";
        for (auto i = menuText.begin(); i < menuText.end(); i++)
        {
            std::cout << *i << std::endl;
        }

        int choice = 0;
        std::cin >> choice;

        std::string productName;
        std::string productCategory;
        if (choice == 1)
        {
            productManager->displayProducts();
        }
        else if (choice == 2)
        {
        }
        else if (choice == 3)
        {
            std::getline(std::cin, productName);
        }
        else if (choice == 4)
        {
            std::cout << "1. Find by name\n";
            std::cout << "2. Find by name and category\n";
            int choice = 0;
            std::cin >> choice;
            if (choice == 1)
            {
                std::getline(std::cin, productName);
                productManager->findProducts(productName);
            }
            else if (choice == 2)
            {
                std::cout << "Name: ";
                std::getline(std::cin, productName);
                std::cout << "Category: ";
                std::getline(std::cin, productCategory);

                productManager->findProducts(productName, productCategory);
            }
        }
        else if (choice == 5)
        {
        }
        else
        {
            std::cout << "Unkown command!\n";
        }
    }
}