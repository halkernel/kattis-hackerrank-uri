class Solution {
    public int hardestWorker(int n, int[][] logs) {
        int id = -1, leaveTime = 0;
        int max = -1, maxId = -1;
        int i = 0, j = 0;
        while(i < logs.length){
            if(logs[i][j+1] - leaveTime > max){
                max = logs[i][j+1] - leaveTime;
                maxId = logs[i][j];
            }
            if(logs[i][j+1] - leaveTime == max){
                if(maxId > logs[i][j])
                    maxId = logs[i][j];
            }
            leaveTime = logs[i][j+1];
            i++;
        }
        return maxId;
    }
}

//max = 3 - 0
//maxid = 0
//leave = 3
