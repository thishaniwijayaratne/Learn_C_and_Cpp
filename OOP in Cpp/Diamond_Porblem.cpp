#include <iostream>
using namespace std;

// Person class =======================================================================================
class Person
{
private:
    string name;
    int birthDate;
    bool Sex;

public:
    void getName(string n) { name = n; };
    void getbirthDate(string bd) { name = bd; };
    void getSex(string s) { name = s; };
    virtual void getDept(string Dept){};
};

// Student class =====================================================================================
class Student : virtual public Person
{
public:
    void getDept(string Dept) { cout << Dept << endl; };
};

// Teacher class =====================================================================================
class Teacher : virtual public Person
{
public:
    void getDept(string Dept) { cout << Dept << " is the Department." << endl; };
};

// GradTeachingFellow class ==========================================================================
class GradTeachingFellow : virtual public Student, virtual public Teacher
{
public:
    void getDept(string dep)
    {
        Student::getDept(dep);
    };
    void getSupervisor(string sup) { cout << sup << "is the supervisor." << endl; };
};

// Main class ========================================================================================
int main()
{
    GradTeachingFellow Gihara;
    // Gihara.getDept("Electrical Engineering");
    // Gihara.getName("Gihaaaa");

    //  Create the same using pointers
    Person *Gihara_pointer = &Gihara;
    Gihara_pointer->getDept("Electrical Engineering");

    // ==========================
    Teacher Ish;
    Teacher *Ish_pointer = &Ish;
    Ish_pointer->getDept("EE");
    return 0;
};