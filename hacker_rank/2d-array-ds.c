
int hourSum(int row, int col, int ** arr){
    int sum, i, j;
    sum = i = j = 0;
    for(i = row-1; i < row; i++){
        for(j = col-1; j <= col+1; j++){
            sum += arr[i][j];
        }
    }
    sum += arr[row][col];
    for(i = row+1; i <= row+1; i++){
        for(j = col-1; j <= col+1; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}


int hourglassSum(int row, int col, int** arr) {  
    int i, j, highest = -99999999;  
    for(i = 1; i < row-1; i++){
        for(j = 1; j < col-1; j++){
            int n = hourSum(i, j, arr);
            printf("%d", n);
            if(n > highest){
                highest = n;
            }
        }
    }
    return highest;
}