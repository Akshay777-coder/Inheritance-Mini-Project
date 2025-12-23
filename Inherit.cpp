#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/* ---------- Simple Calculator ---------- */

class SimpleCalculator {
protected:
    double a,b;
public:
    SimpleCalculator() {}
    SimpleCalculator(double a, double b): a(a),b(b) {}
    double add() { return a + b; }
    double subtract() { return a - b; }
    double multiply() { return a * b; }
    double divide() {
        if(b == 0){
            cout << "Error: Division by zero !!\n";
            return 0;
        }
        return a / b;
    }
    void displaySimple() {
        cout << fixed << setprecision(2);
        cout << "\n--- Simple Calculator ---\n";
        cout << "Addition        : " << add() << endl;
        cout << "Subtraction     : " << subtract() << endl;
        cout << "Multiplication  : " << multiply() << endl;
        cout << "Division        : " << divide() << endl;
    }
};

/* ---------- Scientific Calculator ---------- */

class ScientificCalculator {
protected:
    double base,powerVal,x;
public:
    ScientificCalculator() {}
    ScientificCalculator(double x, double base, double powerVal): x(x), base(base), powerVal(powerVal){}
    double power() {
        return pow(base,powerVal);
    }
    double squareRoot() {
        if(x < 0){
            cout << "Error: Negitive Input for squareroot\n";
            return 0;
        }
        return sqrt(x);
    }
    double sine() {
        return sin(x * M_PI / 180); // degree → radian
    }
    double logBase10() {
        if(x < 0){
            cout << "Error: Invalid Input for log!\n";
            return 0;
        }
        return log10(x);
    }
    void displayScientific() {
        cout <<fixed<<setprecision(2);
        cout << "\n--- Scientific Calculator ---\n";
        cout << "Square Root     : " << squareRoot() << endl;
        cout << "Sine  (degrees) : " << sine() << endl;
        cout << "Power           : " << power() << endl;
        cout << "Log Base 10     : " << logBase10() << endl;
    }
};

/* ---------- Hybrid Calculator ---------- */

class HybridCalculator: public SimpleCalculator, public ScientificCalculator {
public:
    HybridCalculator(){}
    HybridCalculator(double a, double b, double x, double base, double powerVal)
        : SimpleCalculator(a, b),
          ScientificCalculator(x, base, powerVal) {}
    void showResults() {
        displaySimple();
        displayScientific();
    }
};

/* ---------- Main Function ---------- */

int main() {
    double a, b, x, base, powerVal;
    cout << "Enter two numbers for Simple Calculator: " << endl;
    cin >> a >> b;
    cout << "Enter value for Scientific Operations (x): " << endl;
    cin >> x;
    cout << "Enter base and power: " << endl;
    cin >> base >> powerVal;
    HybridCalculator calc(a,b,x,base,powerVal);
    calc.showResults();
    return 0;
}
