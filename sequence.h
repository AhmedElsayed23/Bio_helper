#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <iostream>
#include <cstring>
using namespace std;


class Sequence
{
    protected:
        char * seq;
    public:

        Sequence();
        Sequence(int length);
        Sequence(Sequence& rhs);

         //Sequence(int length,string a);

    virtual ~Sequence();

    virtual void Print()= 0;
    /*friend ostream& operator <<(ostream& out,Sequence obj);
    friend istream& operator >> (istream& in, Sequence& obj);*/



};

#endif // SEQUENCE_H
