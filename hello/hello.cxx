#include <iostream>
#include <regex>
#include <string>

int main (int argc, char* argv[])
{
  using namespace std;

  {
    regex re(".*");

    cout << "'a' '.*' 'x': '" << regex_replace("a", re, "x") << "'" << endl;
    cout << "'a' '.*' 'x' (match_not_null): '" << regex_replace("a", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;

    cout << "'' '.*' 'x': '" << regex_replace("", re, "x") << "'" << endl;
    cout << "'' '.*' 'x' (match_not_null): '" << regex_replace("", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;
  }

  {
    regex re("a*");

    cout << "'bb' 'a*' 'x': '" << regex_replace("bb", re, "x") << "'" << endl;
    cout << "'bb' 'a*' 'x' (match_not_null): '" << regex_replace("bb", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;

    cout << "'b' 'a*' 'x': '" << regex_replace("b", re, "x") << "'" << endl;
    cout << "'b' 'a*' 'x' (match_not_null): '" << regex_replace("b", re, "x", regex_constants::match_not_null) << "'" << endl;
  }
}
