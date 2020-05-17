#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main () {
    time_t now = time(0);
    char* dt = ctime(&now);
    
    ofstream myfile;
    std::cout << ": ";
    string x{};
    std::cin >> x;
    
    myfile.open ("/home/jingle/notes.txt", ios_base::app);
    myfile << "---- " << dt;
    myfile << x << '\n';
    myfile << "\n";
    myfile.close();
    return 0;
}
