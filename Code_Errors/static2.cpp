#include <iostream>
using namespace std;

class Database {
    static int connections;
    int id;
public:
    Database() { id = ++connections; }

     void report() {
        cout << "Connections: " << connections
             << ", Last ID: " << id;          // Error 1 when we make the function static
        cout << endl;
    }

     void reset() {
        connections = 0;
        this->id = 0;                 // Error 2 when we make the function static
    }
};

int Database::connections = 0;               // Error 3 (commented out)

int main() {
    Database db1, db2;
    // Database::report();
    // Database::reset();
    db1.report();
    db2.report();
    db1.reset();
    db2.reset();
    return 0;
}