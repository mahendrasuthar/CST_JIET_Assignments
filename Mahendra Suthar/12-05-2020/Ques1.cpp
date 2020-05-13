#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
bool prime[MAX];
void SieveOfEratosthenes()
{
  memset(prime, true, sizeof(prime));
  prime[0] = prime[1] = false;
  for (int p = 2; p * p < MAX; p++) {
	if (prime[p] == true) {
		for (int i = p * p; i < MAX; i += p)
			prime[i] = false;
		}
	}
}

int PrimeSumCells(vector<vector<int> >& mat)
{
	int count = 0;
	int N = mat.size();
	int M = mat[0].size();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int sum = 0;
			if (i - 1 >= 0)
				sum += mat[i - 1][j];
			if (i + 1 < N)
				sum += mat[i + 1][j];
			if (j - 1 >= 0)
				sum += mat[i][j - 1];
			if (j + 1 < M)
				sum += mat[i][j + 1];
			if (prime[sum])
				count++;
		}
	}
	return count;
}
int main()
{
	SieveOfEratosthenes();

	vector<vector<int> > mat = { { 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 10, 11, 12 } };
	cout << PrimeSumCells(mat) << endl;
}
