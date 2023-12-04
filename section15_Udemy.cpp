#include <iostream>
using namespace std;
// Base class: Animal
class Animal {
private:
    string name;
public:
    // base eclass constructor
    Animal (const string &n):name(n){
    cout<< "ANIMAL CONSTRUCTOR CALLED FOR " << name <<endl;

    }

    void eat() {
        std::cout << "Animal is eating\n";
        std::cout << "This line in code just to test git blame in git\n";
    }
};

// Derived class: Dog
class Dog : public Animal {
private:
    string race;
public:
     // derived class constructor using animal constructor argument: Animal(name)
     Dog(const string &name, const string &breed): Animal(name),race(breed){
        cout<< "DOG CONSTRUCTOR CALLED FOR "<< name <<" OF RACE "<< breed <<endl;

     }
    // Public member function of Dog
    void Bark() {
        
        cout << "Woof! Woof!\n";
    }
};
int main() {
    Dog myDog("LISA","BERGER Allemand");
    myDog.eat();
    myDog.Bark();
    
    return 0;
}