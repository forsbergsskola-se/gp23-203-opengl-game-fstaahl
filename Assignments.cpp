/* #include <iostream>

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
    int currentOperand; // New member variable to store the current operand

public:
    Calculator() : result(0), currentOperation(Operation::Add), currentOperand(0) {}

    void SetNumber(int number) {
        // If current operand is not set, set it
        if (currentOperand == 0) {
            currentOperand = number;
        } else {
            PerformOperation(number); // Perform operation with current operand
        }
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
        currentOperand = 0;
    }

    void PerformOperation(int number) {
        switch (currentOperation) {
            case Operation::Add:
                result = currentOperand + number;
                break;
            case Operation::Subtract:
                result = currentOperand - number;
                break;
            case Operation::Multiply:
                result = currentOperand * number;
                break;
            case Operation::Divide:
                if (number != 0) {
                    result = currentOperand / number;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
        }
        // Update current operand for next operation
        currentOperand = result;
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
*/


