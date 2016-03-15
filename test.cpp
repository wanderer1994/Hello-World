#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdint.h>
#include <omp.h>

using namespace std;



int main()
{

    
    ofstream myfile;
    myfile.open ("result.dat");

    myfile << "Hello World" << endl;
    myfile.close();

}