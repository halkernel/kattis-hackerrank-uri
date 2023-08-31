class Solution {

    void print(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.printf("%d ", arr[i]);
        }
        System.out.println();
    }

    public int[] merge(int arr1[], int arr2[]){
        int arr3[] = new int[arr1.length + arr2.length];
        int i = 0, j = 0, k = 0;
        while(i < arr1.length)
            arr3[k++] = arr1[i++];
        while(j < arr2.length)
            arr3[k++] = arr2[j++];
        
        return arr3;
    }


    public double findMedianSortedArrays(int[] arr1, int[] arr2) {
        int[] arr3 = merge(arr1, arr2);
        Arrays.sort(arr3);
        if(arr3.length % 2 != 0){
            return (double) arr3[arr3.length/2];
        }
        return (double) (arr3[arr3.length/2] + arr3[(arr3.length/2)-1])/2;
    }
}
