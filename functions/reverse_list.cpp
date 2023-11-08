#include <iostream>
#include <list>
#include <string>
using namespace std;

list<string> List;

auto ReverseList(list<string> a)
{
    list<string> Reverse;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        auto j = a[(n - 1) - i];
        Reverse.push_back(j);
    }
}