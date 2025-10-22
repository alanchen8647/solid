#include <string>
#include <iostream>

class DiscountCalculator {
public:
    virtual double calculate(double amount) = 0;
};

class VIPCustomerDiscrount : public DiscountCalculator {
public:
    double calculate(double amount) {
        return amount * 0.90;
    }
};

class LoyalCustomerDiscount : public DiscountCalculator {
public:
    double calculate(double amount) {
        return amount * 0.95;
    }
};

class RegularCustomerDiscount : public DiscountCalculator {
public:
    double calculate(double amount) {
        return amount;
    }
};


// Included for demonstration
int main() {
    VIPCustomerDiscrount VIPCustomerDiscount;
    LoyalCustomerDiscount LoyalCustomerDiscount;
    RegularCustomerDiscount RegularCustomerDiscount;
    double price = 1000;
    std::cout << "VIP Customer Price: " << VIPCustomerDiscount.calculate(price) << "\n";
    std::cout << "Loyal Customer Price: " << LoyalCustomerDiscount.calculate(price) << "\n";
    std::cout << "Regular Customer Price: " << RegularCustomerDiscount.calculate(price) << "\n";
}
