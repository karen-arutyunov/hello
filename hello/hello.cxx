#include <iostream>
#include <regex>
#include <string>

int main (int argc, char* argv[])
{
  using namespace std;

  regex re(".*");
  cout << regex_replace("a", re, "x") << endl;
  cout << regex_replace("a", re, "x", regex_constants::match_not_null) << endl;
  cout << regex_replace("", re, "x") << endl;
}
