#include <ostream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string login = getlogin();
    string home = "/home/" + login;
    int n_o_t = 0;
    string notstring = to_string(n_o_t);
    cout << home << endl;
    cout << home+"/Documents/MESSAGE_"+notstring << endl;
    
    
    cout << login << endl;
    
    ifstream number("./number.txt");
    number >> n_o_t;
    cout << n_o_t << endl;
    n_o_t += 1;
    notstring = to_string(n_o_t);
    number.close();
    
    cout << n_o_t << endl;
    
    ofstream mega("./number.txt");
    mega << n_o_t;
    mega.close();
    cout << home+"/Documents/MESSAGE_"+notstring << endl;
    
    ofstream ofile(home+"/Documents/MESSAGE_"+notstring);
    ofile << "meow";
    ofile.close();

    return 0;}