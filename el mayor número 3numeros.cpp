#include<iostream>

using namespace std;
int main(){
	float n1, n2, n3;
	
	
	cout<<"Diga 3 numeros: ";
	cin>>n1>>n2>>n3;
	
	if(n1==n2==n3){
		cout<<"todos los numeros son iguales";
	}
	else if(n1>n2,n3<n1){
	cout<<"el mayor es :   "<<n1;
	
	}else if(n2>n1,n3<n2){
		cout<<"el mayor es:   "<<n2;
		
	}else {
		cout<<"le mayor es:  "<<n3;
	}

	return 0;
}
