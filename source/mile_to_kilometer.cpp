#include<iostream>

double mile_to_kilometer(double num){
    double res = num * 1.60934;
    return res;
}

double kilometer_to_mile(double num){
    double res = num * 1.60934;
    return res;
}

int main(){
    int input;
    std::cout << "Geben Sie einen Wert ein: ";
    std::cin >> input;
    double res = mile_to_kilometer(input);
    std::cout << "Ergebnis (von meilen zu kilometer):" << res << "\n";
    return 0;
}
