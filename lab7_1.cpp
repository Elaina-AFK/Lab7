#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string a, b;
    cout << "Input text: ";
	cin >> a;
    cout << "Reversed text: " << func1(a) << endl;
	string x = func2(a);
	string y = func2(func1(a));
	if(x == y){
		b = "Yes";
	}
	else{
		b = "No";
	}
    cout << "Palindrome: "<< b;
    return 0;
}
