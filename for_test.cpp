#include <iomanip>
#include <iostream> // library
#include <string>
#include <vector>

using namespace std;

void print_space(int w);

int example_add(int a, int b) {
    int answer;
    answer = a + b;
    return answer;
}
void print_number(int amount, int target) {
    // num = k - 1;
    // num: 4, k: 5
    // int k;
    for (int i = 0; i < amount; i++) {
        cout << target;
    }
    // for(k = 1 ; k < 7;k += 2){

    // }
}


int main() { // coding style
    int i, j, n = 4;
    int amount;
    for(i = 0; i < n; ++i) {
        amount = i * 2 + 1 ;
        for(j = 0; j < 2 * i + 1; ++j) {
            if (j == 0) {


                print_space(n - i);

                print_number(amount, n - i);
            }
        }
        cout << '\n';
    }
    int sum;
    sum = example_add(2, 3);
    cout << "sum: " << sum << endl;
    return 0;
}

void print_space(int w) {
    for (int i = 0; i < w; i++) {
        cout << " ";
    }
}
