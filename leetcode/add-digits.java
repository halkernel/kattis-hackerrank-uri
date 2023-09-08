class Solution {

    int reduce(int num){
        if(num <= 9)
            return num;
        return num%10 + reduce(num/10);
    }

    public int addDigits(int num) {
        if(num <= 9)
            return num;
        while(num > 9){
            num = reduce(num);            
        }
        return num;
    }
}
