#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, r, p, c;
	cin >> n >> r;
	while(n != 0){
		vector<int> v;
		for(int i = 0; i < n; ++i){
			v.push_back(n-i);
		}
		for(int i = 0; i < r; ++i){
			cin >> p >> c;
			vector<int> newV;
			for(int i = p-1; i < p-1+c; ++i){
				newV.push_back(v[i]);
			}
			for(int i = 0; i < p-1; ++i){
				newV.push_back(v[i]);
			}
			for(int i = p-1+c; i < n; ++i){
				newV.push_back(v[i]);
			}
			v = newV;
		}
		cout << v[0] << endl;

		cin >> n >> r;
	}
	return 0;
}
