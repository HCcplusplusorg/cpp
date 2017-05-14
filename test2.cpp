#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
int main(){
    string b = "123456789";
    int i = atoi(b.substr(4,1).c_str()) + 100;
    cout << i <<endl;
    return 0;
}
