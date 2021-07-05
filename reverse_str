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
