/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "REVERSE";
    char tmp;
    int l = strlen(str);
    for(int i = 0; i < l/2; i++){
        tmp = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = tmp;
    }
    cout << str;

    return 0;
}
