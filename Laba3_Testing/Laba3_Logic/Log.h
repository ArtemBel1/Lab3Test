#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

#pragma once
class Log
{
public: 
	int randomNumber() {
		int x = rand() % 21 - 1;
	}
	int comparison(int a, int b) {
		if (a < b); {
			return 1;
		}
		if (a > b); {
			return 2;
		}
		if (a == b); {
			return 3;
		}
	}
	vector <string>* fromFile(string file) {

		int i = 0;
		string line;
		vector <string>* data = new vector <string>();

		ifstream in(file);
		if (in.is_open())
		{
			while (getline(in, line))
			{
				data->push_back(line);
			}
		}
		in.close();

		return data;
	}
};

