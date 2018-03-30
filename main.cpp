//Author: Noah Huff
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream in("example.txt");
  char first = ' ', last = ' ', current;

  //Read from the file opened by in, and the first letter (either upper or
  //lower case) should be assigned to first and the last letter (again in
  //either case) from the file to the variable last
  char a[80];
  string line;
  while(!in.eof()){
    in>>a;
    line = line + a;
  }
  first = line[0];
  for ( int i = 0; i < line.length(); i++ ) {
    if ( line[i] != 63 ) {
        last = line[i];
    }
  }
  cout<<line;
  //Then, finally, this displays the censored version:
  cout<<first<<"**"<<last<<endl;
  return 0;
}
