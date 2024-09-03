
import java.util.Scanner;// Khen Artur IT3-2307 Week 1 Task

public class App {
    static boolean is_palindrome(String a) {
        for (int i = 0; i < a.length() / 2; i++){
            if (!(a.charAt(i) == a.charAt(a.length() - i - 1))) {
                return false;            
            }
        }
        return true;
    }
    
    static int fibonacci(int n) {
        int f1 = 0;
        int f2 = 1;
        
        for (int i = 0; i < n - 1; i++) {
            int temp = f1;
            f1 = f2;
            f2 = f2 + temp;
        }
        
        return f1;
    }
    
    static int max_arr(int[] arr) {
        int max_v = arr[0];  
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max_v) {
                max_v = arr[i];
            }
        }
        return max_v;
    }

    
    static int min_arr(int[] arr) {
        int min_v = arr[0];  
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < min_v) {
                min_v = arr[i];
            }
        }
        return min_v;
    }

   
    static double calculate_gpa(double[] grades, int[] credits) {
        double totalGpa = 0;
        int totalCredits = 0;
        for (int i = 0; i < grades.length; i++) {
            totalGpa += grades[i] * credits[i];
            totalCredits += credits[i];
        }
        return (double) totalGpa / totalCredits; 
    }


    static int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    
    
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        
        // Palindrome Task
        System.out.println("Palindrome Task. Enter string: ");
        String palindrome = sc.nextLine();            
        boolean is_palindrome = App.is_palindrome(palindrome);
        System.out.println(is_palindrome);
        
        // fibonacci program
        System.out.println("fibonacci Task. Enter n: ");
        String fibonacci = sc.nextLine();            
        int fibonacci_res = App.fibonacci(Integer.parseInt(fibonacci));
        System.out.println(fibonacci_res);
        
        // Find maximum and minimum value in arrays
        System.out.println("Find maximum and minimum value in arrays Task. Enter values: ");
        String[] arrayInput = sc.nextLine().split(" ");
        int[] array = new int[arrayInput.length];
        for (int i = 0; i < arrayInput.length; i++) {
            array[i] = Integer.parseInt(arrayInput[i]);
        }

        int max = App.max_arr(array);
        int min = App.min_arr(array);
        System.out.println("Max: " + max);
        System.out.println("Min: " + min);

        // GPA Calculator Task
        System.out.println("GPA Calculator Task. Enter number of subjects: ");
        int number = Integer.parseInt(sc.nextLine());
        double[] grades = new double[number];
        int[] credits = new int[number];
        for (int i = 0; i < number; i++) {
                System.out.println("Enter subject gpa and credits (3.5 5): ");
                String[] subject_info = sc.nextLine().split(" ");
                grades[i] = Double.parseDouble(subject_info[0]);
                credits[i] = Integer.parseInt(subject_info[1]);
        }

        double gpa = App.calculate_gpa(grades, credits);
        System.out.println("Calculated GPA: " + gpa);

            // Factorial Program
        System.out.println("Factorial Task. Enter n: ");
        int factorial_in = sc.nextInt();
        int factorial_res = App.factorial(factorial_in);
        System.out.println("Factorial result: " + factorial_res);
        
        
    }

}
