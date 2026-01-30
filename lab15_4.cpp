#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
	int e[4] = {a,b,c,d};
	for (int i = 3; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(e[i], e[j]);
    }

	a = e[0];
	b = e[1];
	c = e[2];
	d = e[3];

}