#include <iostream>
#include <list>
#include <string>
using namespace std;

list<string> List;

auto ReverseList(list<string> a)
{
    list<string> Reverse;
    int n = a.size();
    list<string>::iterator it = a.begin();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ++it;
        }
        auto get = *it;
        Reverse.push_back(get);
    }
}