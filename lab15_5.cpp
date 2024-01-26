#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);//Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);//Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *A, int *B, int *C, int *D){
	    int *shfA = A;
		int *shfB = B;
		int *shfC = C;
		int *shfD = D;
		int shff[] = {*shfA, *shfB, *shfC, *shfD};
	    for (int i = 0; i < 4; i++){
		    int P1 = rand()%4;
			int P2 = rand()%4;
			int swap = shff[P1];
            shff[P1] = shff[P2];
			shff[P2] = swap;
		}

		*A = shff[0], *B = shff[1], *C = shff[2], *D = shff[3];

}