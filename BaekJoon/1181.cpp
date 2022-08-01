#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
vector<string> word;

bool compare(string a, string b) {
  if (a.length() != b.length()) {
    return a.length() < b.length();
  } else {
		/*
    for(int i=0; i<a.length(); ++i){
			if(a[i] != b[i]){
				return a[i]<b[i];
			}

			return true; // 런타임 에러 방지용*/
		return a<b;
		}
		
}

int main() {
  cin >> N;

  for (int i = 0; i < N; ++i) {
    string w;
    cin >> w;
    word.push_back(w);
  }

	sort(word.begin(), word.end(), compare);

	for(int i=0; i< N; ++i){
		if(i != N-1){
			if(word[i] != word[i+1]){
				cout <<word[i] <<'\n';
			}
		}
		else{
			cout << word[i];
		}
	}

	return 0;
}
