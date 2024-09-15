import java.util.*;// Khen Artur IT3-2307 Week 2 Task


public class App {

    static boolean is_one_from_n(int n) {
        if (n == 1) {
            return true;
        }

        if (n < 0) {
            return false;
        }

        return is_one_from_n(n - 3) || is_one_from_n(n - 5);
    }

    static int max_from_string(String s){
        int max_v = 0;
        for (int i = 0; i < s.length(); i++){
            int v = Integer.parseInt(Character.toString(s.charAt(i)));
            if (max_v < v) {
               max_v = v;
            }
        }
        return max_v;
    }

    static int DigitCounter(String s){
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                count++;
            }
        }

        return count;
    }

    static String AddStars(String s) {
        String res = "";

        for (int i = 0; i < s.length(); i++) {
            res = res + s.charAt(i);

            if (i != s.length() - 1){
                res = res + "*";
            }
        }

        return res;
    }

    static String AddBrackets(String s) {
        String res = "";

        for (int i = 0; i < s.length(); i++){
            res = res + s.charAt(i);
            if (i + 1 < (s.length() / 2.0) ) {
                res = res + "(";
            }
            else if (i + 1 > (s.length() / 2.0) && i != s.length() - 1) {
                res = res + ")";
            }
        }

        return res;
    }

    static String AddBrackets2(String s) {
        String res = "";

        for (int i = s.length() - 1; i >= 0; i--) {
    
            if (s.charAt(i) == '(') {
                res = res + ")";
            } else {
                res = res + s.charAt(i);
            }
        }

        return res;
    }

    static String ReduceString(String s) {
        String res_r = "";
        String res_l = "";

        int left = 0;
        int right = s.length() - 1;

        while (left <= right) {
            if (s.charAt(left) == s.charAt(right)) {
                left++;
                right--;

            } else {
                if (left == right) {
                    res_r = res_r + s.charAt(left);

                } else {
                    res_r = res_r + s.charAt(left);
                    res_l = s.charAt(right) + res_l;

                }
                left++;
                right--;
            }
        }
        return res_r + res_l;
    }

    static int DeleteBranch(){
        Dictionary<Integer, List<Integer>> dict = new Hashtable<>();
        Scanner sc = new Scanner(System.in);

        int count = sc.nextInt();

        for (int i = 0; i < count; i++) {
            int message = sc.nextInt();
            int parent = sc.nextInt();
            
            if (dict.get(parent) != null) {
                List<Integer> n = dict.get(parent);
                n.add(message);
                dict.put(parent, n);
            }
            else {
                List<Integer> n = new LinkedList<Integer>();
                n.add(message);
                dict.put(parent, n);
            }
            
        }
        
        int target = sc.nextInt();

        Queue<Integer> queue = new LinkedList<>();
        queue.add(target);

        int res = 0;
        
        while (!queue.isEmpty()) {
            int current = queue.poll();
            res++;

            if (dict.get(current) != null) {
                queue.addAll(dict.get(current));
            }
        }

        sc.close();

        return res;

    }


    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        // TASK 1
        // int task_1 = Integer.parseInt(sc.nextLine());
        // if (is_one_from_n(task_1)){
        //     System.out.println("YES");
        // }
        // else {
        //     System.out.println("NO");
        // }

        // TASK 2
        // String task_2 = sc.nextLine();
        // System.out.println(max_from_string(task_2));

        // TASK 3
        // String task_3 = sc.nextLine();
        // System.out.println(DigitCounter(task_3));

        // TASK 4
        // String task_4 = sc.nextLine();
        // System.out.println(AddStars(task_4));

        // TASK 5
        // String task_5 = sc.nextLine();
        // System.out.println(AddBrackets(task_5));

        // TASK 6
        // String task_6 = sc.nextLine();
        // System.out.println(task_6 + AddBrackets2(task_6));

        // TASK 7
        // String task_7 = sc.nextLine();
        // System.out.println(ReduceString(task_7));

        // TASK 8
    
        System.out.println(DeleteBranch());


        sc.close();
    }
}
