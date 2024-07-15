#include <iostream>
using namespace std;
int main(){
	int n, s=0, s1,n1, datos[n][n];
	cout<<"Ingrese el orden de la matriz:";
	cin>>n;
	for (int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"ingrese el numero de la posicion"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>datos[i][j];
			s1=i+j;
			n1=n-1;
			if (s1==n1){
				s=s+datos[i][j];
			}
		}
	}
	cout<<"\n==> La suma de los  elementos de la diagonal secundaria es:"<<s<<endl;
	return 0;
}
