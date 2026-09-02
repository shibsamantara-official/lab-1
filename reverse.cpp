#include <iostream>

class NumberReverser {
private:
    int number;

public:
    // Function to take input
    void inputNumber() {
        std::cout << "Enter a number: ";
        std::cin >> number;
    }

    // Function to reverse the number using a do-while loop
    int getReversed() const {
        int temp = number;
        int reversed = 0;

        // Handle negative numbers
        bool isNegative = (temp < 0);
        if (isNegative) {
            temp = -temp;
        }

        // do-while loop executes at least once (handles 0 correctly)
        do {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        } while (temp > 0);

        return isNegative ? -reversed : reversed;
    }

    // Function to display the reversed result
    void display() const {
        std::cout << "Reversed number: " << getReversed() << std::endl;
    }
};

int main() {
    NumberReverser rev;

    rev.inputNumber();
    rev.display();

    return 0;
}