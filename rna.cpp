#include "rna.h"
#include "dna.h"
#include "sequence.h"
#include <iostream>
#include <cstring>
using namespace std;

RNA::RNA()
{
    //ctor
}

RNA::RNA(char * sequen, RNA_Type atype)
{
    type=atype;
    int length = sizeof (sequen)/sizeof (*sequen);
    seq=new char[length+1];
    for (int i=0;i<=length;i++)
        seq[i]=sequen[i];

}

RNA::RNA(RNA& rhs)
{
    type = rhs.type;

    int length=sizeof (rhs.seq)/sizeof(*rhs.seq);
    seq=new char[length+1];
    for (int i=0;i<=length;i++)
        seq[i]=rhs.seq[i];
}

RNA::~RNA()
{
    //dtor
}

void RNA::Print()
{
    int length=sizeof (seq)/sizeof(*seq);
    for (int i=0;i<=length;i++)
    {
        cout<<seq[i];
    }
}
