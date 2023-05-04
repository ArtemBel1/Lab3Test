#include <iostream>

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
};

