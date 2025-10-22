#include <string>
#include <iostream>
class DiscountCalculator {
public:
    virtual double calculate(double amount) = 0;
};

class VIPCustomerDiscount : public DiscountCalculator {
public:
    double calculate(double amount) override {
        return amount * 0.90;
    }
};

class LoyalCustomerDiscount : public DiscountCalculator {
public:
    double calculate(double amount) override {
        return amount * 0.95;
    }
};

class RegularCustomerDiscount : public DiscountCalculator {
public:
    double calculate(double amount) override {
        return amount;
    }
};


// Included for demonstration
int main() {
    VIPCustomerDiscount vipCustomerDiscount;
    LoyalCustomerDiscount loyalCustomerDiscount;
    RegularCustomerDiscount regularCustomerDiscount;
    double price = 1000;
    std::cout << "VIP Customer Price: " << vipCustomerDiscount.calculate(price) << "\n";
    std::cout << "Loyal Customer Price: " << loyalCustomerDiscount.calculate(price) << "\n";
    std::cout << "Regular Customer Price: " << regularCustomerDiscount.calculate(price) << "\n";
}
