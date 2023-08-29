#include<bits/stdc++.h>
using namespace std;

class hero {
private:
    int health;
    char level;
public:
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    void setHealth(int he) {
        this->health = he;
    }
    void setLevel(char ch) {
        this->level = ch;
    }
}; 

int main() {
    // Static Allocation
    hero h;
    h.setHealth(100);
    h.setLevel('B');
    cout << "Health is " << h.getHealth() << endl;
    cout << "Level is " << h.getLevel() << endl;
    
    // Dynamic Allocation
    hero* ptr = new hero;
    ptr->setLevel('C');
    ptr->setHealth(110);
    cout << "Health is " << ptr->getHealth() << endl;
    cout << "Level is " << ptr->getLevel() << endl;

    delete ptr;  // Free the dynamically allocated object
    return 0;
}

