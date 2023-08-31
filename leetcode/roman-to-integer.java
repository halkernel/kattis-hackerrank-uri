class Solution {
    public int romanToInt(String s) {
        char[] arr = s.toCharArray();
        int dec = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == 'I'){
                dec +=1;
            }
            if(arr[i] == 'V'){
                dec +=5;
            }
            if(arr[i] == 'X'){
                dec += 10;
            }
            if(arr[i] == 'L'){
                dec += 50;
            }
            if(arr[i] == 'C'){
                dec += 100;
            }
            if(arr[i] == 'D'){
                dec += 500;
            }
            if(arr[i] == 'M'){
                dec += 1000;
            }

            if(i + 1 < arr.length && arr[i] == 'I' && (arr[i+1] == 'V' || arr[i+1] == 'X')){
                dec -=2;
            }
            if(i + 1 < arr.length && arr[i] == 'X' && (arr[i+1] == 'L' || arr[i+1] == 'C')){
                dec -=20;
            }
            if(i + 1 < arr.length && arr[i] == 'C' && (arr[i+1] == 'M' || arr[i+1] == 'D')){
                dec -=200;
            }
        }
        return dec;
    }
}
