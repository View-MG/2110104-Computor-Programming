#include <bits/stdc++.h>
using namespace std;
string convert(long long int n) {
    string single[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    if (n<10) return single[n];
    else if (n<20) 
        return teens[n-10];
    else if (n<100) 
        return tens[n/10-2] + (n%10 != 0 ? " " + single[n % 10] : "");
    else if (n<1000)  
        return single[n/100] + " hundred" + (n%100 != 0 ? " " + convert(n%100) : "");
    else if (n<1000000) 
        return convert(n/1000) + " thousand" + (n%1000 != 0 ? " " + convert(n%1000) : "");
    else if (n<1000000000) 
        return convert(n/1000000) + " million" + (n % 1000000 != 0 ? " " + convert(n%1000000) : "");
    else if (n<1000000000000)   
        return convert(n/1000000000) + " billion" + (n % 1000000000 != 0 ? " " + convert(n%1000000000) : "");
    else   
        return convert(n/1000000000000) + " trillion" + (n%1000000000000 != 0 ? " " + convert(n % 1000000000000) : "");
}
int main() {
    long long int a;
    cin >> a;
    cout << convert(a) << endl;
}
