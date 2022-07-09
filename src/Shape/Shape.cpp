#include"Shape.h"
int Shape::chint(const std::string& s)//chuyen string sang integer bang cach tru thao ma Assi
{
	int n = s.length();
    int sum=0;
    for(int i = 0; i < n ; i++){
        int x = s[i] - 48;
        sum = sum*10 + x;
    }
	return sum;
}