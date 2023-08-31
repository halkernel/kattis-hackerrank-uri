class Solution {

    void swap(int[] arr, int x, int y){
        int tmp = arr[x];
        arr[x] = arr[y];
        arr[y] = tmp;
    }

    public int removeElement(int[] arr, int val) {
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < arr.length; i++){
            if(arr[i] != val){
                list.add(arr[i]);
            }
        }

        for(int i = 0; i < list.size(); i++){
            arr[i] = list.get(i);
        }
        return list.size();
    }
}
