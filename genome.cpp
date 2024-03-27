#include "genome.h"
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()


using namespace std;

// Constructor: Sets initial state with no chromosomes


GeneticCode::GeneticCode() : chromosomes(nullptr), chromosomeCount(0) {}

// Destructor: Ensures dynamic memory is freed

GeneticCode::~GeneticCode() {
    clearChromosomes();
}


// Initialize chromosomes array with specified number of chromosomes
void GeneticCode::initChromosomes(int numChromosomes) {
    clearChromosomes(); // Ensure previous memory is freed
    chromosomeCount = numChromosomes; // Update count
    chromosomes = new Chromosome[chromosomeCount]; // Allocate new memory
    for (int i = 0; i < chromosomeCount; ++i) {
        // Initialize RGB values to 0 for each chromosome
        chromosomes[i].red = chromosomes[i].green = chromosomes[i].blue = 0;
    }
}


// Deallocate memory used for chromosomes
void GeneticCode::clearChromosomes() {
    if (chromosomes != nullptr) {
        delete[] chromosomes; // Free memory
        chromosomes = nullptr; // Reset pointer
        chromosomeCount = 0; // Reset count
    }
}


// Assign random RGB values to each chromosome
void GeneticCode::randomizeAttributes() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed RNG
    for (int i = 0; i < chromosomeCount; ++i) {
        // Randomize RGB values within the range [0, 255]
        chromosomes[i].red = rand() % 256;
        chromosomes[i].green = rand() % 256;
        chromosomes[i].blue = rand() % 256;
    }
}


// Set the red intensity for a specific chromosome, ensuring index is within bounds
void GeneticCode::setRedValue(int index, int value) {
    if (index >= 0 && index < chromosomeCount) chromosomes[index].red = value;
}


// Set the green intensity for a specific chromosome, ensuring index is within bounds
void GeneticCode::setGreenValue(int index, int value) {
    if (index >= 0 && index < chromosomeCount) chromosomes[index].green = value;
}


// Set the blue intensity for a specific chromosome, ensuring index is within bounds
void GeneticCode::setBlueValue(int index, int value) {
    if (index >= 0 && index < chromosomeCount) chromosomes[index].blue = value;
}


// Retrieve the red intensity from a specific chromosome, returns -1 if index is out of bounds
int GeneticCode::getRedValue(int index) const {
    return (index >= 0 && index < chromosomeCount) ? chromosomes[index].red : -1;
}


// Retrieve the green intensity from a specific chromosome, returns -1 if index is out of bounds
int GeneticCode::getGreenValue(int index) const {
    return (index >= 0 && index < chromosomeCount) ? chromosomes[index].green : -1;
}


// Retrieve the blue intensity from a specific chromosome, returns -1 if index is out of bounds
int GeneticCode::getBlueValue(int index) const {
    return (index >= 0 && index < chromosomeCount) ? chromosomes[index].blue : -1;
}



// Display information about the genetic code including chromosome count and their RGB values
void GeneticCode::displayInfo() const {
    cout << "GENETIC CODE: " << chromosomeCount << " chromosomes";
    for (int i = 0; i < chromosomeCount; ++i) {
        // Display the RGB values for each chromosome
        cout << " (" << chromosomes[i].red << "," << chromosomes[i].green << "," << chromosomes[i].blue << ")";
    }
    cout << endl;
}

