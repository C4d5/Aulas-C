void imprime(int m[][4], int n){
	int i, j;
	for (i=o;i<n;i++){
		for (i=o;i<4;i++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mat [3][4] = {{1,2,3,4},
			{50.60,70.80},
			{91,101,111,121}};

	imprime(mat, 3);
}