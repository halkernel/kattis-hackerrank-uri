class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr);
        int diff = 0;
        int abs = Integer.MAX_VALUE;
        for(int i = 0; i < arr.length - 1; i++){
            diff = arr[i+1] - arr[i];
            if(abs > diff)
                abs = diff;
        }

        List<List<Integer>> res = new ArrayList<>();
        for(int i = 0; i < arr.length-1; i++){
            if(arr[i+1] - arr[i] == abs){
                res.add(List.of(arr[i], arr[i+1]));
            }
        }
        return res;
    }
}
