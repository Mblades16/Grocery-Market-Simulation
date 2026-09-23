

/**
 * @file    main.cpp
 * @author  Matthew Blades
 * @date    2026-09-18
 * @brief   A C++ grocery market simulation.
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const string BREAK_MESSAGE = "=============================\n";
const double TAX_RATE = 0.07;

struct Market
{
    string name;
    double loyaltyCardCost;
    double budget;
};

struct Item
{
    string name;
    string quantityPrompt;
    double wholesaleCost;
    double regularPrice;
    double memberPrice;
};

int main()
{
    Market market;

    cout << "Starting market simulation" << endl;
    cout << endl;

    // Get market information
    cout << "Enter market name: ";
    getline(cin, market.name);

    cout << "Enter the cost of the loyalty card: $";
    cin >> market.loyaltyCardCost;

    cout << "Enter the store's starting budget: $";
    cin >> market.budget;

    // Display market information
    cout << endl;
    cout << "Market Information" << endl;
    cout << BREAK_MESSAGE;

    cout << fixed << setprecision(2);

    cout << "Name: " << market.name << endl;
    cout << "Loyalty card cost: $" << market.loyaltyCardCost << endl;
    cout << "Starting budget: $" << market.budget << endl;

    cout << BREAK_MESSAGE;
    cout << endl;

    // Departments
    cout << market.name << "'s Hours and Departments" << endl;
    cout << BREAK_MESSAGE;
    cout << endl;

    cout << "Hours: 7:00 am to 10:00 pm" << endl;
    cout << "Department1: Frozen Foods" << endl;
    cout << "Department2: Snacks" << endl;
    cout << "Department3: Cleaning Supplies" << endl;
    cout << "Department4: Health & Beauty" << endl;

    cout << BREAK_MESSAGE;

    // Grocery item information
    Item bread =
    {
        "Bread",
        "How many loaves of bread would you like: ",
        1.50,
        2.79,
        2.49
    };

    Item apples =
    {
        "Apple",
        "How many bags of apples would you like: ",
        2.80,
        4.29,
        3.89
    };

    Item soda =
    {
        "Soda",
        "How many bottles of soda would you like: ",
        1.10,
        1.99,
        1.79
    };

    Item toiletPaper =
    {
        "Toilet Paper",
        "How many packs of toilet paper would you like: ",
        3.20,
        5.49,
        4.99
    };

    int quantity;

    double wholesaleTotal;
    double regularSale;
    double loyaltySale;
    double regularProfit;
    double loyaltyProfit;
    double profitDifference;

    // =============================
    // Bread Scenario
    // =============================
    cout << endl;
    cout << "Bread Scenario" << endl;
    cout << BREAK_MESSAGE;

    cout << bread.quantityPrompt;
    cin >> quantity;

    wholesaleTotal = quantity * bread.wholesaleCost;

    regularSale =
        quantity * bread.regularPrice * (1.0 + TAX_RATE);

    loyaltySale =
        (quantity * bread.memberPrice + market.loyaltyCardCost)
        * (1.0 + TAX_RATE);

    regularProfit =
        quantity * (bread.regularPrice - bread.wholesaleCost);

    loyaltyProfit =
        quantity * (bread.memberPrice - bread.wholesaleCost)
        + market.loyaltyCardCost;

    profitDifference =
        fabs(regularProfit - loyaltyProfit);

    cout << "Wholesale Cost: $" << wholesaleTotal << endl;
    cout << "Regular Sale: $" << regularSale << endl;
    cout << "Loyalty Sale: $" << loyaltySale << endl;
    cout << "Regular Profit: $" << regularProfit << endl;
    cout << "Loyalty Profit: $" << loyaltyProfit << endl;
    cout << "Profit Difference: $" << profitDifference << endl;

    cout << BREAK_MESSAGE;

    // =============================
    // Apple Scenario
    // =============================
    cout << endl;
    cout << "Apple Scenario" << endl;
    cout << BREAK_MESSAGE;

    cout << apples.quantityPrompt;
    cin >> quantity;

    wholesaleTotal = quantity * apples.wholesaleCost;

    regularSale =
        quantity * apples.regularPrice * (1.0 + TAX_RATE);

    loyaltySale =
        (quantity * apples.memberPrice + market.loyaltyCardCost)
        * (1.0 + TAX_RATE);

    regularProfit =
        quantity * (apples.regularPrice - apples.wholesaleCost);

    loyaltyProfit =
        quantity * (apples.memberPrice - apples.wholesaleCost)
        + market.loyaltyCardCost;

    profitDifference =
        fabs(regularProfit - loyaltyProfit);

    cout << "Wholesale Cost: $" << wholesaleTotal << endl;
    cout << "Regular Sale: $" << regularSale << endl;
    cout << "Loyalty Sale: $" << loyaltySale << endl;
    cout << "Regular Profit: $" << regularProfit << endl;
    cout << "Loyalty Profit: $" << loyaltyProfit << endl;
    cout << "Profit Difference: $" << profitDifference << endl;

    cout << BREAK_MESSAGE;

    // =============================
    // Soda Scenario
    // =============================
    cout << endl;
    cout << "Soda Scenario" << endl;
    cout << BREAK_MESSAGE;

    cout << soda.quantityPrompt;
    cin >> quantity;

    wholesaleTotal = quantity * soda.wholesaleCost;

    regularSale =
        quantity * soda.regularPrice * (1.0 + TAX_RATE);

    loyaltySale =
        (quantity * soda.memberPrice + market.loyaltyCardCost)
        * (1.0 + TAX_RATE);

    regularProfit =
        quantity * (soda.regularPrice - soda.wholesaleCost);

    loyaltyProfit =
        quantity * (soda.memberPrice - soda.wholesaleCost)
        + market.loyaltyCardCost;

    profitDifference =
        fabs(regularProfit - loyaltyProfit);

    cout << "Wholesale Cost: $" << wholesaleTotal << endl;
    cout << "Regular Sale: $" << regularSale << endl;
    cout << "Loyalty Sale: $" << loyaltySale << endl;
    cout << "Regular Profit: $" << regularProfit << endl;
    cout << "Loyalty Profit: $" << loyaltyProfit << endl;
    cout << "Profit Difference: $" << profitDifference << endl;

    cout << BREAK_MESSAGE;

    // =============================
    // Toilet Paper Scenario
    // =============================
    cout << endl;
    cout << "Toilet Paper Scenario" << endl;
    cout << BREAK_MESSAGE;

    cout << toiletPaper.quantityPrompt;
    cin >> quantity;

    wholesaleTotal =
        quantity * toiletPaper.wholesaleCost;

    regularSale =
        quantity * toiletPaper.regularPrice * (1.0 + TAX_RATE);

    loyaltySale =
        (quantity * toiletPaper.memberPrice
        + market.loyaltyCardCost)
        * (1.0 + TAX_RATE);

    regularProfit =
        quantity * (toiletPaper.regularPrice
        - toiletPaper.wholesaleCost);

    loyaltyProfit =
        quantity * (toiletPaper.memberPrice
        - toiletPaper.wholesaleCost)
        + market.loyaltyCardCost;

    profitDifference =
        fabs(regularProfit - loyaltyProfit);

    cout << "Wholesale Cost: $" << wholesaleTotal << endl;
    cout << "Regular Sale: $" << regularSale << endl;
    cout << "Loyalty Sale: $" << loyaltySale << endl;
    cout << "Regular Profit: $" << regularProfit << endl;
    cout << "Loyalty Profit: $" << loyaltyProfit << endl;
    cout << "Profit Difference: $" << profitDifference << endl;

    cout << BREAK_MESSAGE;
    cout << "Exiting simulation" << endl;

    return 0;
}













