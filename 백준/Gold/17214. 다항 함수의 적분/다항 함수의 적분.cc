#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
	string inp; cin >> inp;
	int xidx = -1;							//x index
	bool maxcha = 0;						//x exist
	if(inp == "0"){ 						//if input is "0"
		printf("W\n");
		return 0;
	}
	for (int i = 0; i < inp.size(); ++i)	//whether x exist, store x index
	{
		if(inp[i] == 'x'){
			maxcha = 1;
			xidx = i;
		}
	}
	if(maxcha == 0) {						//x is not exist
		if(inp != "1" && inp != "-1"){		//constant is not 1 or -1
			cout << inp + "x+W\n";
		}
		else {								//constant is 1 or -1
			inp == "1" ? printf("x+W\n") : printf("-x+W\n");;
		}
	}
	else{									//x is exist
		string pre, post;
		for (int i = 0; i < xidx; ++i)		//x's coefficient
		{
			if(inp[i] != 'x'){
				pre += inp[i];
			}
		}
		int coe = stoi(pre)/2;				//xx's coefficient
		if(coe == -1 || coe == 1){			//xx's coefficient is 1 or -1
			coe == -1 ? printf("-xx") : printf("xx");;
		}
		else{								//xx's coefficient is not 1 or -1
			printf("%dxx", coe);
		}
		for (int i = xidx+1; i < inp.size(); i++){	//constant
			post += inp[i];
		}
		// cout << "\n" + post + '\n';
		if(post == "+1" || post == "-1"){			//constant is +1 or -1
			post == "+1" ? printf("+x+W\n") : printf("-x+W\n");;
		}
		else{										//constant is not 1 or -1
			if(xidx == inp.size()-1){				//constant not exist
				cout << "+W\n";
			}
			else {									//constant exist
				cout << post << "x+W\n";
			}
		}
	}
}