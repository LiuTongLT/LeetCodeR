#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
    if(x==0)
    {
        return 0;
    }
    int result = abs(x);

    int num = 0;
    while(result%10==0)
    {
        result = result/10;
    }

    if(result >= 1000000000 && (result%10>2 || result%100>12 || result%1000>412 || result%10000>7412 || result%100000>47412 || result%1000000>847412 || result%10000000>3847412 || result%100000000>63847412 || result%1000000000>463847412 ))
    {
        if(result%10<2 ||(result%10<=2 && result%100<12)||(result%10<=2 && result%100<=12 && result%1000<412 )||(result%10<=2 && result%100<=12 && result%1000<=412 && result%10000<7412))
        {
             while(result>0)
    {
        num = num*10 + result%10;
        result /= 10;
    }
        }
        else
        {
             return 0;
        }
    }

    while(result>0)
    {
        num = num*10 + result%10;
        result /= 10;
    }
    if(x<0)
    {
        return -num;
    }
    return num;
    }
};
