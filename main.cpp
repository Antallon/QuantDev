#include <iostream>
#include <cstdlib>
#include "sum.hpp"
using namespace std;

int main(int argc, char* argv[])
{
    if(argc !=3)
    {
        cerr<<"Must be 3 parametres"<<endl;
        return -1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    cout<< sum(a,b)<<endl;
    return 0;
}