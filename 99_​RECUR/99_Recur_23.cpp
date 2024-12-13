#include <iostream>
#include <cmath>
#include <map>
using namespace std;
int F(int n) { // Fibonacci number
    if(n==0) return 0;
	else if(n==1) return 1;
	else if(n%2==0){
	    int f= n/2;
		return (2* F(f-1) + F(f)) * F(f);
	}else{
	    int f=(n+1)/2;
		return (F(f)*F(f)) + (F(f-1) * F(f-1));
	}
}
int M(int n) { // Motzkin number
    if(n==0) return 1;
	if(n==1) return 1;
	int ans=0;
	ans += M(n-1);
	for (int i=0; i<= n-2; i++){
		ans += M(i)*M(n-2-i);
	}
	return ans;
}
int S(int n) { // Schröder–Hipparchus Number
    if (n==1 || n==2) return 1;
	else return ((6*n-9) * S(n-1)) / n-((n-3) * S(n-2)) / n;
}
int D(int n) { // Derangement
    if(n == 0){return 1;}
	return n*D(n-1) + pow(-1,n);
}
int main() {
	map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
	string fn;
	int p;
	while (cin >> fn >> p) {
	if (func.find(fn) != func.end())
	cout << fn << '(' << p << ") = " << func[fn](p) << endl;
	}
	return 0;
}
