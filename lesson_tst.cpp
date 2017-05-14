#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int size;
    cin >> size;
    int i , square[size];
    for(i = 0; i < size; i++){
        square[i] = i * i;
        cout << i * i << "=" << square[i] << endl;
    }
return 0;
}
