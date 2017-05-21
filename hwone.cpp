#include <iostream>


using namespace std;

long long int fn(long long int maxn){
    if(maxn == 1){
        return 1;
    }
    else {
        return fn(maxn - 1) + maxn;
    }
}
long long int gn(long long int maxn){
    if (maxn == 1){
        return 1;
    }else{
        return gn(maxn - 1) + fn(maxn);
    }

}
int main(){


    int n;
    while(cin >> n){
        cout << fn(n) << " "<< gn(n) << endl;
    }

    return 0;
}
