#include <iostream>

using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, float quantity);

main()
{
    string fruit, dayOfWeek;
    float quantity;
    cout << "Enter the name of fruit (banana, apple, orange, grapefruit, kiwi, pineaple, grapes): ";
    cin >> fruit;
    cout << "Enter the name of Day (e.g., Sunday, Monday,...): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;

    cout << calculateFruitPrice(fruit, dayOfWeek, quantity);
}

float calculateFruitPrice(string fruit, string dayOfWeek, float quantity)
{
    float priceOfFruit;
    if (dayOfWeek == "Sunday")
    {
        if (fruit == "banana")
        {
            priceOfFruit = quantity * 2.7;
        }
        if (fruit == "apple")
        {
            priceOfFruit = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            priceOfFruit = quantity * 0.9;
        }
        if (fruit == "grapefruit")
        {
            priceOfFruit = quantity * 1.6;
        }
        if (fruit == "kiwi")
        {
            priceOfFruit = quantity * 3;
        }
        if (fruit == "pineapple")
        {
            priceOfFruit = quantity * 5.6;
        }
        if (fruit == "grapes")
        {
            priceOfFruit = quantity * 4.2;
        }
    }
    if (dayOfWeek != "Sunday")
    {
        if (fruit == "banana")
        {
            priceOfFruit = quantity * 2.5;
        }
        if (fruit == "apple")
        {
            priceOfFruit = quantity * 1.2;
        }
        if (fruit == "orange")
        {
            priceOfFruit = quantity * 0.85;
        }
        if (fruit == "grapefruit")
        {
            priceOfFruit = quantity * 1.45;
        }
        if (fruit == "kiwi")
        {
            priceOfFruit = quantity * 2.7;
        }
        if (fruit == "pineapple")
        {
            priceOfFruit = quantity * 5.5;
        }
        if (fruit == "grapes")
        {
            priceOfFruit = quantity * 3.85;
        }
    }

    return priceOfFruit;
}
