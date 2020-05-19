#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main () {
  string notesvar{"/notes.txt"};
  string home{std::getenv("HOME")};
  string notes = home + notesvar;
  time_t now = time(0);
  char* dt = ctime(&now);

  ofstream myfile;
  std::cout << ": ";
  string x{};
  std::cin >> x;
  myfile.open (notes, ios_base::app);
  myfile << "---- " << dt;
  myfile << x << '\n';
  myfile << "\n";
  myfile.close();
  return 0;
} 
