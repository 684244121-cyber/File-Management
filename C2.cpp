#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("684244121.txt");

  // Write to the file
  MyFile << "684244121(Tritod Jeenchoo), ไตรทศ จีนชู";

  // Close the file
  MyFile.close();
}
