#include <cstdio>
#include <queue>

using namespace std;

queue <int> deck;

int main(){
	int N; scanf("%d", &N);
	for (int i = 1; i <= N; ++i)
	{
		deck.push(i);
	}
	while(deck.size() > 1){
		deck.pop();
		deck.push(deck.front());
		deck.pop();
	}
	printf("%d\n", deck.front());
}