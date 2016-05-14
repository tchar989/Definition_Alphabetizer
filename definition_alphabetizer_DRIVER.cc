#include <iostream>
#include <fstream>
#include <vector>
#include "definition_alphabetizer.h"
using namespace std;

int main()
{
	definition_alphabetizer *Defer = new definition_alphabetizer();
	Defer->definitionize();
	Defer->sortDefs();
	Defer->writeToFile();
	return 0;
}

