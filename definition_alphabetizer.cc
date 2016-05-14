#include <iostream>
#include <fstream>
#include <vector>
#include "definition_alphabetizer.h"
using namespace std;

definition_alphabetizer::definition_alphabetizer()
{
}
void definition_alphabetizer::definitionize()
{
	cout << "Enter complete filepath to text file: " << endl;
	cin >> fPath;
	string temp = "";
	fstream fs;
	fs.open(fPath,ios_base::in|ios_base::out);
	while(fs.peek() == '\n' || fs.peek() == '\t' || fs.peek() == 13)
	{
		fs.get();
	}

	while(!fs.eof())
	{
		if(fs.peek() == '\n' || fs.peek() == '\t' || fs.peek() == 13)
		{
			temp+='\n';
			defs.push_back(temp);
			temp = "";
			fs.get();
			while(fs.peek() == '\n' || fs.peek() == '\t' || fs.peek() == 13)
		  	{
				fs.get();
			}
		}
		else
		{
			char x = fs.get();
			if(x >= 65 && x<= 91)
			{
				x+=32;
			}
			temp+=x;
		}
	}
}

void definition_alphabetizer::sortDefs()
{
	sort(defs.begin(), defs.begin()+defs.size());
}

void definition_alphabetizer::writeToFile()
{
	ofstream of;
	of.open(fPath);
	for(int i = 0; i < defs.size(); i++)
	{
		of.write(defs.at(i).c_str(), defs.at(i).size());
		of.write("\n",1);
	}
	of.close();
}
