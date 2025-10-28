#include <unistd.h>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    string login = getlogin();
    string home = "/home/" + login;
    cout << home << endl;
    ofstream ofile(home+"/Documents/AAAAAAA.txt");
    ofile << "AAAAAAAAAAAAAAAAAAAAAA";
    ofile.close();
    cout << login << endl;

return 0;}