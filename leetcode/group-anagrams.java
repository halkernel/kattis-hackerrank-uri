class Solution {
   public static List<List<String>> groupAnagrams(String[] strs) {
        if(strs.length == 0){
            return new ArrayList(new ArrayList(Collections.singleton("")));
        }
        if(strs.length == 1){
            return new ArrayList(new ArrayList(Collections.singleton(strs)));
        }
        Map<String, List<String>> map = new HashMap<>();
        for(int i = 0; i < strs.length; i++){
            char[] arr = strs[i].toCharArray();
            Arrays.sort(arr);
            String str = String.valueOf(arr);
            if(map.containsKey(str)){
                map.get(str).add(strs[i]);
                continue;
            }
            map.put(new String(arr), new ArrayList<>(Collections.singleton(String.valueOf(strs[i]))));
        }
        return map.values().stream().collect(Collectors.toList());
    }
}
