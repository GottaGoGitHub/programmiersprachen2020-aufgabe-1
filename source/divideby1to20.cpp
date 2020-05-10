#include <bits/stdc++.h> 
using namespace std; 

//groesse des ergebnis ist unbekannt, deswegen nimmt man hier den groessten moeglichen wert
typedef long long int X; 

//Funktion zum ermitteln des groessten gemeinsamen teilers
int ggt(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	return ggt(b, a % b); 
} 

//Funktion zum ermitteln des kgv
X kgv(int arr[], int n) 
{ 
	//initialisiere ergebnis 
	X ergebnis = arr[0]; 

	//ergebnis beinhalted kgv von arr[0], arr[1], ..., arr[i]  
	for (int i = 1; i < n; i++) 
		ergebnis = (((arr[i] * ergebnis)) / 
				(ggt(arr[i], ergebnis))); 

	return ergebnis; 
} 

int main() 
{ 
    //initialisiere array
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Kleinster Wert, der durch die Zahlen 1 bis 20 teilbar ist: " << kgv(arr, n) <<"\n"; 
	return 0; 
} 