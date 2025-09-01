import java.util.*;

public class SimpleTextEditor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Q = sc.nextInt();
        sc.nextLine();

        StringBuilder text = new StringBuilder();
        Stack<String> history = new Stack<>();

        for (int i = 0; i < Q; i++) {
            String[] input = sc.nextLine().split(" ");
            int type = Integer.parseInt(input[0]);

            switch (type) {
                case 1:
                    history.push(text.toString());
                    text.append(input[1]);
                    break;

                case 2:
                    history.push(text.toString());
                    int k = Integer.parseInt(input[1]);
                    text.delete(text.length() - k, text.length());
                    break;

                case 3:
                    int pos = Integer.parseInt(input[1]);
                    System.out.println(text.charAt(pos - 1));
                    break;

                case 4:
                    text = new StringBuilder(history.pop());
                    break;
            }
        }
    }
}
