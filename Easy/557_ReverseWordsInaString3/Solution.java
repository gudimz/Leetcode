class Solution {
    public String reverseWords(String s) {
        String[] words = s.split(" ");
        StringBuilder result = new StringBuilder("");
        for (String word : words) {
            StringBuilder sb = new StringBuilder(word);
            result.append(" ").append(sb.reverse());
        }
        return result.toString().trim();
    }
}