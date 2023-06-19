#include<iostream>
#define MAX 999
using namespace std;

int EggDrop(int N, int K) {
  int Floor[N + 1][K + 1];
  int threshold;
  int i, j, x;
  for (i = 1; i <= N; i++) {
    Floor[i][1] = 1;
    Floor[i][0] = 0;
  }
  for (j = 1; j <= K; j++)
    Floor[1][j] = j;
 
  for (i = 2; i <= N; i++) {
    for (j = 2; j <= K; j++) {
      Floor[i][j] = MAX;
      for (x = 1; x <= j; x++) {
	  	threshold = 1 + max(Floor[i - 1][x - 1],Floor[i][j - x]);
        if (threshold < Floor[i][j])
          Floor[i][j] = threshold;
      }
    }
  }
  cout<<"Minimum number of moves required are "<<Floor[N][K];
}

int main()
{
	int N,K;
	cout<<"Enter number of Eggs: ";
	cin>>N;
	cout<<"Enter number of Floors: ";
	cin>>K;
	EggDrop(N,K);
	return 0;
}
