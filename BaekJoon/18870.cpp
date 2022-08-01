#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
pair<int,int> p;
vector<pair<int,int>> x;
vector<pair<int,int>> tmp;

bool compare(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

bool compare2(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

int main(){
	cin >> N;

	for(int i=0; i<N; ++i){
		int a;
		cin >> a;
		p.first = a;
		p.second = i;
		x.push_back(p);
	}
	
	stable_sort(x.begin(), x.end(),compare);

	tmp = x;

	int num = 0;

	for(int i=0; i<N; ++i){
		if(i == 0){
			x[i].first = num;
			num++;
		}
		else{
			if(tmp[i-1].first == tmp[i].first){
				x[i].first = x[i-1].first;
			}

			else{
				x[i].first =num;
				num++;
			}
		}
	}

	stable_sort(x.begin(), x.end(), compare2);

	for(int i=0; i<N; ++i){
		cout << x[i].first<<' ';
	}

	return 0;
	
}
