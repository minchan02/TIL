#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N;
pair<int, int> tmp;
vector<pair<int, int>> vec;

bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.second != b.second) {
    return a.second < b.second;
  }

  else {
    return a.first < b.first;
  }
}

int main() {
  cin >> N;

  for (int i = 0; i < N; ++i) {
    cin >> tmp.first >> tmp.second;
    vec.push_back(tmp);
  }

  sort(vec.begin(), vec.end(), compare);

  for (int i = 0; i < N; ++i) {
    cout << vec[i].first << ' ' << vec[i].second << '\n';
  }

  return 0;
}
