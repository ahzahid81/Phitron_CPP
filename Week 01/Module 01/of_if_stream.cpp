#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofstream of;
    of.open("1.txt");
    ofstream of2;
    of2.open("2.txt");
    of << "Hello World\n";
    of2 <<"Hello World oF2\n";
    return 0;
}
