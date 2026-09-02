#include <iostream>

class DigitSum {
private:
    int number;

public:
    // Function to input a 3-digit number
    void inputNumber() {
        std::cout << "Enter a 3-digit number: ";
        std::cin >> number;
    }

    // Function to extract digits and calculate their sum
    int calculateSum() const {
        int temp = number;

        int d1 = temp % 10;         // Last digit
        int d2 = (temp / 10) % 10;  // Middle digit
        int d3 = temp / 100;        // First digit

        return d1 + d2 + d3;
    }

    // Function to display the result
    void display() const {
        std::cout << "Sum of digits: " << calculateSum() << std::endl;
    }
};

int main() {
    DigitSum obj;

    obj.inputNumber();
    obj.display();

    return 0;
}