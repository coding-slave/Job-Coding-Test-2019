#include <iostream>

using namespace std;

int main() {
	int T;
	int N, K;
	int sum;

	int** students;

	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case) {
	
	

		cin >> N >> K;
		//2차원 배열 동적할당
		
		students = new int* [N];
		for (int j = 0; j < N; j++)
			students[j] = new int[K];

		for (int j = 0; j < N; j++)
		{
			if (j & 1)
			{
				for (int k = K - 1; k >= 0; k--)
					students[j][k] = j * K + (K - k);
			}

			else
			{ //0, 짝수일 때
				for (int k = 0; k < K; k++)
					students[j][k] = j*K+k+1;
			}

	

		}
		
		cout << "#" << test_case << " ";

		for (int j = 0; j < K; j++)
		{
			sum = 0;
			for (int k = 0; k < N; k++)
				sum += students[k][j];
			cout << sum << " ";
		}
		cout << '\n';
			
		
		//즉 N행 K열 2차원배열
		//사실 K행 N열로 잡아도 내맘임
		//그냥 귀찮으니 직접 대입해서 풀자
		//현재가 짝수인지 홀수인지 나타내주는 int 생성
		//N까지 for문 돌려서 배열 채워나가기

		
	
		
	}
}