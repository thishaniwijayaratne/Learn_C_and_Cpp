#include <iostream>
using namespace std;

//  The Human Class ==========================================================
class Human
{
private:
    long Uni_ID;

protected:
    int DoB;
    int Date_;

public:
    int age;
    void setDate_(int D_)
    {
        Date_ = D_;
    };
};

// The Students ==============================================================
class Student : public Human
{

public:
    void setDoB(int D)
    {
        DoB = 1997;
    };

protected:
    // int age;
    bool is_sick;
};

class Mother
{
private:
    int No_of_kids;

protected:
    string Husband_name;

private:
    bool can_she_cook;
};

// The Employees Class =======================================================
class Employee : public Human, protected Student, private Mother
{
private:
    int age;
};

// Main Class
int main()
{
    Student Thishani;
    Thishani.age = 24;
    // Thishani.DoB = 1997; // ====================== Wrong statement because DoB can not be accessed outside the parent or derived classes.
    // Thishani.Uni_ID = 170698; // =================Can't access private data outside the base class
    Thishani.setDate_(5);
    return 0;
};