#include <iostream>
using namespace std;

int main() {
    double basic_Salary, gross_Salary, net_Salary, deductions = 0;

    cout << "Enter the basic salary: ";
    cin >> basic_Salary;

    if (basic_Salary < 50 || basic_Salary > 200000) {
        cout << "Invalid input! Basic salary should be between 50 to 200000" << endl;
        return 0;
    }

    if (basic_Salary <= 20000) {
        deductions = basic_Salary * 0.05;
    } else if (basic_Salary <= 40000) {
        deductions = 20000 * 0.05 + (basic_Salary - 20000) * 0.04;
    } else {
        deductions = 20000 * 0.05 + 20000 * 0.04 + (basic_Salary - 40000) * 0.02;
    }

    gross_Salary = basic_Salary - deductions;
    net_Salary = basic_Salary - deductions;

    cout << "Income Gross Salary: " << basic_Salary << endl;
    cout << "Gross Salary: " << gross_Salary << endl;
    cout << "Total Deductions: " << deductions << endl;
    cout << "Net Pay: " << net_Salary <<endl ;

    return 0;
}
