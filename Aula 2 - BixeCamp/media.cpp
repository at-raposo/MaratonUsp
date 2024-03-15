#include <bits/stdc++.h> //biblioteca da USP?
using namespace std;

int main(){
	int N1, N2, med;
	cin >> N1 >> N2;
	
	med = (2*N1 + 3* N2)/5;
	
	if(med > 7){
	    cout << "APROVADO" << endl;
	}
	if else (med < 3){
	    cout << "REPROVADO" << endl;
	    
	}
	else{
	    cout << "FINAL" << endl;
	}
}
