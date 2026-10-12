class Solution {
  String longestCommonPrefix(List<String> strs) {
     String prefix = "";
        strs.sort();
        for (int i=0;i<strs.length;++i){
            if (strs[i].isEmpty) {
                return "";
            }
            if (i == 0) {
                prefix=strs[i];
            } else {
                for (int j=0;j<prefix.length;++j){
                    if (j>=strs[i].length || prefix[j]!=strs[i][j]){
                        prefix=prefix.substring(0,j);
                        break;
                    }
                }
            }
        }
        return prefix;
  }
}