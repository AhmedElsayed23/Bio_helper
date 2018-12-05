#include "codonstable.h"
#include "rna.h"
#include "dna.h"
#include "sequence.h"
#include <iostream>
#include <string>
#include <fstream>
#include <streambuf>
using namespace std;

CodonsTable::CodonsTable()
{
    //ctor
}

CodonsTable::~CodonsTable()
{
    //dtor
}


void CodonsTable::LoadCodonsFromFile(string name)
{
    ifstream file;
    file.open(name.c_str(),ios::in);
    //std::string str((std::istreambuf_iterator<char>(file)),
                 //std::istreambuf_iterator<char>());

    if (!file)
        cout<<"error loading file\n";
    else
    {
        string line;
        int k=0;
getline(file,line,'\n');

    for (int j=0;j<5;j++){


            if (j==5)
                codons[k++].AminoAcid=line[j];
            codons[k++].value[j]=line[j];
            }



}


       // int k=0;
        /*for (int i=0;i<64;i++)
        {
            for (int j=0;j<4;j++){
            codons[i].value[j]=line[k++];

            }
            codons[i].AminoAcid=line[k++];
        }


    }*/
}


void CodonsTable :: print()
{
    for (int i=0;i<64;i++)
    {
        for (int j=0;j<4;j++)
        cout<<codons[i].value[j];

        cout<<"    "<<codons[i].AminoAcid<<endl;
    }
}
