#include "dna.h"
#include "sequence.h"
#include <iostream>
#include <cstring>
using namespace std;

DNA::DNA()
{

}

DNA::DNA(char * sequen, DNA_Type atype)
{
    int length = sizeof (sequen)/sizeof (*sequen);
    seq=new char[length+1];
    for (int i=0;i<=length;i++)
    {
        seq[i]=sequen[i];
    }
    type= atype;
}

DNA::DNA(DNA& rhs)
{
    int length=sizeof (rhs.seq)/sizeof (*rhs.seq);
    seq=new char [length+1];
    for (int i=0; i<=length ; i++)
    {
        seq[i]=rhs.seq[i];
    }
}

void DNA:: Print()
{
    int length=sizeof (seq)/sizeof (*seq);
    for (int i = 0; i < length ; i++)
    {
        cout << seq[i];
    }
}
DNA::~DNA()
{

}
/*
void BuildComplementaryStrand()
{

}*/

