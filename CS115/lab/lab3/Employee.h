#include <string>
using namespace std;

const unsigned int NUM_EMPL = 5;

struct Employee
{
    string name;
    int id;
    double salary;
};

void printEmployee(const Employee& c);
Employee readEmployee();

//----Add findEmployee prototype for Step 2----

int findEmployee (const Employee array[], int tId, int num);
