int main(){
    int a = 9;
    bool b = false;
    char c = 'a';
    double d = 1.3;
    int const five = 5;
    double e = a/five;

    //five = d;

    return 0;
}

/*
typen sind alles was links steht (int, bool, etc.)
variablen sind die, die in der mitte stehen (a, b, etc.)
werte stehen rechts.
const ist ein versprechen an den compiler, dass die variable sich nicht ändert. D.h. man kann five keinen neuen Wert geben wie in Zeile 9.
*/

