#ifndef PROTEIN_H
#define PROTEIN_H


#include "rna.h"
#include "dna.h"
#include "sequence.h"
#include <iostream>
#include <cstring>
using namespace std;

enum Protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class Protein : public Sequence
{
  	private:
        Protein_Type type;
      public:
 	 	// constructors and destructor
 	 	Protein();
 	 	Protein(char * p);
 	 	~Protein();
 	 	// return an array of DNA sequences that can possibly
                // generate that protein sequence
          // DNA* GetDNAStrandsEncodingMe(const DNA & bigDNA);
};

#endif // PROTEIN_H
