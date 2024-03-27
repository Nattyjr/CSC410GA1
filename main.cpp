#include "genome.h"
#include <iostream>

int main() {
    GeneticCode myGeneticCode;
    
    std::cout << "Initial genetic code state:" << std::endl;
    myGeneticCode.displayInfo();

    myGeneticCode.initChromosomes(4);
    std::cout << "\nAfter initializing chromosomes:" << std::endl;
    myGeneticCode.displayInfo();

    myGeneticCode.randomizeAttributes();
    std::cout << "\nAfter randomizing attributes:" << std::endl;
    myGeneticCode.displayInfo();

    myGeneticCode.setBlueValue(0, 226);
    std::cout << "\nAfter setting the blue value of the first chromosome to 226:" << std::endl;
    myGeneticCode.displayInfo();

    return 0; // End of program
}
