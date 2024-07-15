#include <iostream>
using namespace std;
int main(){
	int n, s=0, datos[n][n];
	cout<<"Ingrese el orden de la matriz:";
	cin>>n;
	for (int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"ingrese el numero de la posicion"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>datos[i][j];
			if (j>i){
				s=s+datos[i][j];
			}
		}
	}
	cout<<"\n==>La suma de los  elementos que estan por encima de la diagonal principal es:"<<s<<endl;
	return 0;
}
