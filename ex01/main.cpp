#include "iter.hpp"

// ---------- main ----------
int main()
{
    std::cout << "=== int array (modify in place) ===\n";
    int a[5] = {1, 2, 3, 4, 5};
    iter(a, 5, doubleMe<int>);            // instantiated function template
    iter(a, 5, print<int>); std::cout << '\n';

    std::cout << "=== const double array (read only) ===\n";
    const double d[4] = {1.1, 2.2, 3.3, 4.4};
    iter(d, 4, print<double>); std::cout << '\n';

    std::cout << "=== std::string array (functor) ===\n";
    std::string words[3] = {"foo!", "bar!", "baz!"};
   // functor with state
    iter(words, 3, print<std::string>); std::cout << '\n';

    std::cout << "=== lambda on char array ===\n";
    char chars[] = {'A', 'B', 'C'};
    iter(chars, 3, [](char& c){ c += 32; }); // to lower case
    iter(chars, 3, print<char>); std::cout << "\n\n";

    std::cout << "All tests passed.\n";
    return 0;
}