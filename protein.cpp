#include "protein.h"
#include "rna.h"
#include "dna.h"
#include "sequence.h"
#include <iostream>
#include <cstring>
using namespace std;

Protein::Protein()
{
    //ctor
}

Protein :: Protein (char * p)
{
    int length=sizeof(p)/sizeof (*p);

    seq=new char [length+1];
    for (int i=0;i<=length;i++)
        seq[i]=p[i];
}

Protein::~Protein()
{
    //dtor
}
