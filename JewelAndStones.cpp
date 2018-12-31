//
//  main.cpp
//  JewelandStones
//
//  Created by 刘桐 on 31/12/2018.
//  Copyright © 2018 Liu Tong. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

int numJewelsInStones(string J, string S) {
    int j = J.length();
    int s = S.length();
    int count = 0;
    for(int a = 0; a < s; a++)
    {
        char s = S[a];
        for(int b = 0; b < j; b++)
        {
            if(s==J[b])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string J = "aA";
    string S = "aAAbbbb";
    int num = numJewelsInStones(J, S);
    cout<<num;
}
