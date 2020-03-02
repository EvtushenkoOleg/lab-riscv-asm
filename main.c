#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4
#define M 3
void process(int n, int m, int arr[N][M], int* result);

int main(int argc, char** argv)
{
	int arr[N][M];
	int res[2];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &arr[i][j]);
	process(N, M, arr, res);
	printf("imax=%d \n jmax=%d", res[0], res[1]);
	
	return 0;
}

void process(int n, int m, int arr [N][M], int *result)
{
	int max = arr[0][0];
	result[0]=result[1] = 0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if (max < arr[i][j])
			{
				max = arr[i][j];
				result[0] = i;
				result[1] = j;
			}

}