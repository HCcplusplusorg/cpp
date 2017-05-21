#include <iostream>
#include <iomanip>
using namespace std;

double rate(double m ,double p){
    return (p - m) / m * 100;
}
string result(double rate){
    if (rate >= 10 || rate <= -7 ){
        return "dispose";
    }
    else{
        return "keep";
    }
}
int main(){

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double m, p;
        cin >> m >> p;
        double r = rate(m, p);
        cout << fixed << setprecision(2) << r << "%" << " " << result(r) << endl;
    }

    return 0;
}
