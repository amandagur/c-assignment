#include <iostream>
using namespace std;

int main() {
    int n;
    char operat;

    cout << "Enter number of values: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number of values must be greater than zero." << endl;
        return 0;
    }

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> operat;

    int num;
    double result;

    cout << "Enter value 1: ";
    cin >> num;
    result = num;

    for (int i = 2; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> num;

        switch (operat) {
            case '+':
                result += num;
                break;

            case '-':
                result -= num;
                break;

            case '*':
                result *= num;
                break;

            case '/':
                if (num == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                    return 0;
                }
                result /= num;
                break;

            case '%':
                if (static_cast<int>(result) % num == 0 || static_cast<int>(result) % num != 0) {
                    result = static_cast<int>(result) % num;
                }
                break;

            default:
                cout << "Error: Invalid operator." << endl;
                return 0;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
