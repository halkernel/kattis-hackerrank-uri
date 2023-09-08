class Solution {

    class Pair{
        int f, s;
        Pair(int f, int s){
            this.f = f;
            this.s = s;
        }
    }

    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        for(int n : nums){
            map.put(n, map.getOrDefault(n, 0) + 1);
        }
        Comparator<Pair> cmp = (x,y) -> Integer.compare();
        TreeSet<Pair> ts = new TreeSet<>(cmp);
        map.forEach((el, cnt) -> ts.add(new Pair(cnt, el)));

        int ans[] = new int[k];
        int i = 0;
        while (k-- > 0){
            ans[i++] = ts.pollFirst().s;
        }
        return ans;
    }
}
