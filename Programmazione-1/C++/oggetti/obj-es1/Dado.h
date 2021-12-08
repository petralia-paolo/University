#include <iostream>
#include <ctime>
using namespace std;
class Dado
{
private:
        int facce;
public:

        Dado(int facce);
        ~Dado();
        int tiraDado();
        static void sayHello() {
                cout << "hello" << endl;
        }
};

Dado::Dado(int facce)
{
        srand(time(0));
        this->facce = facce;
}

Dado::~Dado() {

}

int Dado::tiraDado() {
        return (rand() % facce) + 1;
}