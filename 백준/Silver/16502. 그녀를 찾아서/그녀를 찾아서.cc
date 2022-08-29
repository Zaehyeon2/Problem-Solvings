#include <cstdio>
#include <vector>

using namespace std;

float store[4] = {0.25, 0.25, 0.25, 0.25};
float tmp[4];

vector <vector <pair<char, float> > > v(4);

int main() {
	int N; scanf("%d", &N);
	int n; scanf("%d\n", &n);
	while(n--){
		char s, e; float per;
		scanf("%c %c %f", &s, &e, &per);
		v[s-'A'].push_back(make_pair(e, per));
		getchar();
	}
	while(N--){
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < v[i].size(); j++){
				tmp[v[i][j].first - 'A'] += v[i][j].second * store[i];
				// printf("%c %c %f\n", i + 'A', v[i][j].first, v[i][j].second);
			}
		}
		for(int i = 0; i < 4; i++){
			store[i] = tmp[i];
			tmp[i] = 0;
		}
	}
	for(int i = 0; i < 4; i++){
		printf("%.2f\n", store[i]*100);
	}
}