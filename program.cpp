#include<iostream>

using namespace std;

long long silnia(int n){
	if (n<=1) return 1;
	return n*silnia(n-1);

}
int main(){
	int n;
	cin>>n;
	cout<<silnia(n)<<endl;
	if(n<0){
		cout<<"Blad liczba ujemna"<<endl;
		return 0;
	}
	cout<<n<<endl;
	return 0;
}
