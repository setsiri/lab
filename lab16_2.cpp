#include<iostream>
using namespace std;

void myString(char *&pp,int N){
    pp = new char[N+1];    
	for(int i = 0; i < N;i++) *(pp+i) = 'A'+i;
	pp[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}