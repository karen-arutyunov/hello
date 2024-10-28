#include <iostream>
#include <regex>
#include <string>

int main (int argc, char* argv[])
{
  using namespace std;
#if 0
  {
    regex re(".*");

//    cout << "'a' '.*' 'x': '" << regex_replace("a", re, "x") << "'" << endl;
    cout << "'a' '.*' 'x' (match_not_null): '" << regex_replace ("a", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;

    cout << "'' '.*' 'x': '" << regex_replace ("", re, "x") << "'" << endl;
//    cout << "'' '.*' 'x' (match_not_null): '" << regex_replace ("", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;
  }

  {
    regex re("b.*c");

    cout << "'bc' 'b.*c' 'x': '" << regex_replace("bc", re, "x") << "'" << endl;
    cout << "'bc' 'b.*c' 'x' (match_not_null): '" << regex_replace ("bc", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;
  }

  {
    regex re("a*");

//    cout << "'bb' 'a*' 'x': '" << regex_replace ("bb", re, "x") << "'" << endl;
    cout << "'bb' 'a*' 'x' (match_not_null): '" << regex_replace ("bb", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;

//    cout << "'b' 'a*' 'x': '" << regex_replace ("b", re, "x") << "'" << endl;
    cout << "'b' 'a*' 'x' (match_not_null): '" << regex_replace ("b", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;
  }

  {
    regex re("ba*c");

    cout << "'bc' 'ba*c' 'x': '" << regex_replace ("bc", re, "x") << "'" << endl;
    cout << "'bc' 'ba*c' 'x' (match_not_null): '" << regex_replace ("bc", re, "x", regex_constants::match_not_null) << "'" << endl;
    cout << endl;
  }
#endif

  {
    regex re("a*");
    cmatch m;

    cout << "'bb' 'a*': " << (regex_search ("bb", m, re) ? "match" : "no match") << endl;
    cout << "'bb' 'a*' (match_not_null): " << (regex_search ("bb", m, re, regex_constants::match_not_null) ? "match" : "no match") << endl;
    cout << endl;
  }

  {
    regex re(".*");
    cmatch m;

    cout << "'' '.*': " << (regex_search ("", m, re) ? "match" : "no match") << endl;
    cout << "'' '.*' (match_not_null): " << (regex_search ("", m, re, regex_constants::match_not_null) ? "match" : "no match") << endl;
    cout << endl;
  }

  {
    regex re(".*");
    cmatch m;

    cout << "'a' '.*': " << (regex_search ("b", m, re) ? "match" : "no match") << endl;
    cout << "'a' '.*' (match_not_null): " << (regex_search ("a", m, re, regex_constants::match_not_null) ? "match" : "no match") << endl;
    cout << endl;
  }
}
