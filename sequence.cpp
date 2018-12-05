#include "sequence.h"
#include <iostream>
#include <cstring>
using namespace std;
Sequence::Sequence()
{

}

Sequence::Sequence(int length)
{
    seq=new char [length];
}


Sequence ::Sequence(Sequence & rhs)
{
    int length=sizeof (rhs.seq)/sizeof (*rhs.seq);
    seq=new char [length+1];
    for (int i=0; i<=length ; i++)
    {
        seq[i]=rhs.seq[i];
    }
}

Sequence :: ~Sequence()
{
    delete []seq;
}




