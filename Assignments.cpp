// ASSIGNMENT CPP-OOP CLASSES

#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

class Calculator {
private:
    int result;
    Operation currentOperation;

public:
    Calculator() : result(0), currentOperation(Operation::Add) {}

    void SetNumber(int number) {
        result = number;
    }

    void SetOperation(Operation op) {
        currentOperation = op;
    }

    int GetNumber() {
        return result;
    }

    void Clear() {
        result = 0;
        currentOperation = Operation::Add;
    }

    void PerformOperation(int number) {
        switch (currentOperation) {
            case Operation::Add:
                result += number;
                break;
            case Operation::Subtract:
                result -= number;
                break;
            case Operation::Multiply:
                result *= number;
                break;
            case Operation::Divide:
                if (number != 0) {
                    result /= number;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
        }
    }
};

int main() {
    Calculator calculator;
    
    calculator.SetNumber(5);
    calculator.SetOperation(Operation::Add);
    calculator.SetNumber(3);
    std::cout << calculator.GetNumber() << "\n"; // should say 8
    
    calculator.Clear();
    
    calculator.SetNumber(2);
    calculator.SetOperation(Operation::Multiply);
    calculator.SetNumber(3);
    calculator.SetOperation(Operation::Subtract);
    calculator.SetNumber(1);
    std::cout << calculator.GetNumber() << "\n"; // should say 5
    
    return 0;
}
