#include <iostream>
#include <fstream>
#include <vector>
#ifndef definition_alphabetizer_H
#define definition_alphabetizer_H
using namespace std;
class definition_alphabetizer{
public:
definition_alphabetizer();
vector<string> defs;
string fPath;
void definitionize();
void sortDefs();
void writeToFile();
};
#endif
