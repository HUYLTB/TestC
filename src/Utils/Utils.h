#ifndef __UTILS_H__
#define __UTILS_H__
#include<string>
class Utils
{
private:
    /* data */
public:
    static int chint(const std::string& s){
    int n = s.length();
    int sum=0;
    for(int i = 0; i < n ; i++){
        int x = s[i] - 48;
        sum = sum*10 + x;
    }
	return sum;
    }
    
};
#endif // __UTILS_H__