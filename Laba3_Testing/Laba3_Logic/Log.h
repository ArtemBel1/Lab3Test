#include <iostream>

#pragma once
class Log
{
	int r = 5;
public: 
	int randomNumber() {
		int x = r;
		r = 10;
		return x;
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

