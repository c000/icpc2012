#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int stoi(string s){
	int len = s.length();
	int ans = 0;
	int num = 1;
	char now;
	for(int i=0; i<len; ++i){
		now = s[i];
		if( now == 'm' ){
			ans += num * 1000;
			num = 1;
		}else if( now == 'c' ){
			ans += num * 100;
			num = 1;
		}else if( now == 'x' ){
			ans += num * 10;
			num = 1;
		}else if( now == 'i' ){
			ans += num * 1;
			num = 1;
		}else{
			sscanf(&now, "%1d", &num);
		}
	}
	return ans;
}

void mcxiMono(int i){
	switch(i){
		case 0:
			cout << 'm';
			break;
		case 1:
			cout << 'c';
			break;
		case 2:
			cout << 'x';
			break;
		case 3:
			cout << 'i';
			break;
	}
}

void mcxiPrint(int i){
	char c[256];
	sprintf(c, "%04d", i);
	for(int i=0; i<4; ++i){
		if(c[i] == '0'){
		}else if(c[i] == '1'){
			mcxiMono(i);
		}else{
			cout << c[i];
			mcxiMono(i);
		}
	}
	// cout << ' ' << c;
	cout << endl;
}

int main(){
	int n;
	int ans;
	string str1;
	string str2;

	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> str1 >> str2;
		ans = stoi(str1) + stoi(str2);
		mcxiPrint(ans);
	}
}
