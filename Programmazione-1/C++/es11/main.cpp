#include <iostream>
#include <string>
using namespace std;

int** ottieni3(int(*ciao)[4]) {
        int** r = new int* [3];
        for (int i = 0; i < 3; i++) {
                r[i] = new int[4];
                for (int j = 0; j < 4; j++)
                        r[i][j] = ciao[i][j] > 10 ? 1 : 0;
        }
        return r;
}

int main() {
        string a = "ciao sono una stringa";

        int ciao[][4] = {
                {1,2,3,4},
                {10,20,30,40},
                {100,200,300,400}
        };

        int** m = ottieni3(ciao);
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 4; j++)
                        cout << m[i][j] << " ";
                delete[] m[i];
                cout << endl;
        }
        delete[] m;

        //0 se < 10 
        //1 se > 10
}
