// Aakash Choudhari
// E&TC-A2
// 24070123031

#include <iostream>
using namespace std;

int main() {
    string name, designation;
    double basicSalary, increment, finalSalary;
    int yearsOfExperience;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Designation (e.g., Manager, Engineer, Clerk): ";
    getline(cin, designation);

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Years of Experience: ";
    cin >> yearsOfExperience;

    if (yearsOfExperience >= 10) {
        increment = 0.20 * basicSalary;   // 20% increment
    } else if (yearsOfExperience >= 5) {
        increment = 0.15 * basicSalary;   // 15% increment
    } else {
        increment = 0.10 * basicSalary;   // 10% increment
    }

    if (designation == "Manager" || designation == "manager") {
        increment += 2000;   // Managers get extra bonus
    } else if (designation == "Engineer" || designation == "engineer") {
        increment += 1000;   // Engineers get extra bonus
    }

    finalSalary = basicSalary + increment;

    cout << "\n--- Salary Slip ---" << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Designation  : " << designation << endl;
    cout << "Basic Salary : " << basicSalary << endl;
    cout << "Increment    : " << increment << endl;
    cout << "Final Salary : " << finalSalary << endl;

    return 0;
}
