/// program to show cli args
#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <iterator>

template <class T>

/// function to cout vector
void cout_vector(const std::vector<T>& vec)
{
  std::copy(std::begin(vec), std::end(vec), std::ostream_iterator<T>(std::cout, " "));
}

/// main program
int main(int argc, char* argv[])
{
  // convert argv to string
  std::vector<std::string> cliArgs(argv, argv + argc);

  // print vector
  cout_vector(cliArgs);

}
