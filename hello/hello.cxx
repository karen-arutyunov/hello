#include <iostream>
#include <vector>
#include <string>

#include <cassert>

using namespace std;

template <typename T>
using vect = vector<vector<T>>;

int main (int argc, char* argv[])
{
  vector<string> v ({"abc"});
  
  vect<string> vv;
  vv.push_back (move (v));
  
  assert (vv[0][0] == "abc");
  
  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;
}
