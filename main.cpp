#include <iostream>
#include "sequence.h"
#include "dna.h"
#include "rna.h"
#include "protein.h"
#include "codonstable.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
    CodonsTable obj;
    obj.LoadCodonsFromFile("RNA_codon_table.txt");
    obj.print();
    return 0;
}
