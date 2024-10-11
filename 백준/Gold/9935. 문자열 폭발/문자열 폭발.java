import java.util.Scanner;
import java.util.Stack;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String str = scanner.nextLine();
        String explosion = scanner.nextLine();
        
        Stack<Character> st = new Stack<>();
        
        for (int i = 0; i < str.length(); i++) {
            st.push(str.charAt(i));
            
            if (st.size() >= explosion.length()) {
                boolean isExplosion = true;
                
                for (int j = 0; j < explosion.length(); j++) {
                    if (st.get(st.size() - explosion.length() + j) != explosion.charAt(j)) {
                        isExplosion = false;
                        break;
                    }
                }
                
                if (isExplosion) {
                    for (int j = 0; j < explosion.length(); j++) {
                        st.pop();
                    }
                }
            }
        }
        
        StringBuilder answer = new StringBuilder();
        for (char c : st) {
            answer.append(c);
        }
        
        System.out.println(answer.length() == 0 ? "FRULA" : answer.toString());
        scanner.close();
    }
}
