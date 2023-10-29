import java.util.Deque;
import java.util.LinkedList;

class Solution {
    public int longestSemiRepetitiveSubstring(String s) {

        int left = 0;
        int len = s.length();
        int right = len;

        Deque<Character> stack = new LinkedList<>();

        int oneDup = 0;
        int max = 0;
        for (int i = 0; i < len; i++) {

            char ch = s.charAt(i);
            if (stack.size() == 0) {
                stack.add(ch);
            } else {

                char top = stack.getLast();
                if (top == ch) {
                    if (oneDup == 0) {
                        stack.add(ch);
                        if (stack.size() > max)
                            max = stack.size();
                        oneDup = 1;
                    } else {
                        int size = stack.size();
                        if (size > max)
                            max = size;
                        stack.add(ch);
                        char prev = stack.remove();
                        while (stack.size() > 0) {
                            char next = stack.element();
                            if (prev == next) {
                                break;
                            } else {
                                prev = stack.remove();
                            }
                        }
                    }
                } else {
                    stack.add(ch);
                    if (stack.size() > max)
                        max = stack.size();
                }
            }
        }
        if (stack.size() > max)
            max = stack.size();

        return max;
    }
}
