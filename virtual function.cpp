#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name;
    int studentID;

public:
    Student(string n, int id) : name(n), studentID(id) {}
    virtual double calculateGrade() {
        return 0.0;
    }
    virtual string getMajor() const = 0;
    void display() {
        cout << "Name: " << name << "\n"
             << "Student ID: " << studentID << "\n"
             << "Major: " << getMajor() << "\n"
             << "Grade: " << calculateGrade() << "\n";
    }
};
class EngineeringStudent : public Student {
private:
    double examScore, projectScore, labScore;
public:
    EngineeringStudent(string n, int id, double exam, double project, double lab)
        : Student(n, id), examScore(exam), projectScore(project), labScore(lab) {}
    string getMajor() const override {
        return "Engineering";
    }
    double calculateGrade() override {
        return (0.5 * examScore) + (0.3 * projectScore) + (0.2 * labScore);
    }
};
class ArtStudent : public Student {
private:
    double portfolioScore, essayScore;
public:
    ArtStudent(string n, int id, double portfolio, double essay)
        : Student(n, id), portfolioScore(portfolio), essayScore(essay) {}
    string getMajor() const override {
        return "Art";
    }
    double calculateGrade() override {
        return (0.6 * portfolioScore) + (0.4 * essayScore);
    }
};
int main() {
    EngineeringStudent engStudent("Alice", 101, 85.0, 90.0, 80.0);
    ArtStudent artStudent("Bob", 102, 88.0, 75.0);
    cout << "Engineering Student Details:\n";
    engStudent.display();
    cout << "\nArt Student Details:\n";
    artStudent.display();

    return 0;
}
