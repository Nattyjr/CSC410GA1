#ifndef GENOME_H
#define GENOME_H




// Represents a single gene in the genetic code with RGB color values

struct Chromosome {
    int red;    // Red color intensity
    int green;  // Green color intensity
    int blue;   // Blue color intensity
};




// Class to represent the genetic code consisting of multiple chromosomes



class GeneticCode {
public:
    GeneticCode(); // Constructor to initialize an empty genetic code
    ~GeneticCode(); // Destructor to clean up dynamically allocated chromosomes

    void initChromosomes(int chromosomeCount); // Initialize chromosomes with specified count
    void clearChromosomes(); // Clear and deallocate all chromosomes

    void randomizeAttributes(); // Randomize RGB values for each chromosome

    void setRedValue(int index, int value); // Set red intensity for a specific chromosome
    void setGreenValue(int index, int value); // Set green intensity for a specific chromosome
    void setBlueValue(int index, int value); // Set blue intensity for a specific chromosome

    int getRedValue(int index) const; // Get red intensity from a specific chromosome
    int getGreenValue(int index) const; // Get green intensity from a specific chromosome
    int getBlueValue(int index) const; // Get blue intensity from a specific chromosome

    void displayInfo() const; // Display information about the genetic code

private:
    Chromosome* chromosomes; // Dynamically allocated array of chromosomes
    int chromosomeCount; // Number of chromosomes in the genetic code
};

#endif // GENOME_H
