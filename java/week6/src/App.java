public class App {
    public static Double find_pi() {
        
        Double PI = 3., n = 2., sign = 1.;
        for (int i = 0; i <= 1000000; i++) {
            PI = PI + (sign * (4 / ((n) * (n + 1)
                                    * (n + 2))));
            sign = sign * (-1);
    
            n += 2;
        }
        return PI;
    }

    public static double exp(int n) {
        double result = 1.0; 
        double term = 1.0;   
        int i = 1;           

        while (true) {
            term *= (double)n / i; 
            if (term < 1e-10 && term > -1e-10) { 
                break; 
            }
            result += term; 
            i++; 
        }

        return result;
    }
    
    public static int factorial(int n){
        if (n < 0) {
            throw new IllegalArgumentException("Factorial is not defined for negative numbers.");
        }
        int res = 1;
        for (int i = 1; i <= n; i++){
            res = res * i;
        }
        
        return res;
    }

    
    public static Double power(Double base, int power){
        if(base == 0 && power == 0){
            throw new IllegalArgumentException();
        }
        
        Double result = 1.;
        
        for (power = 3; power != 0; power--) {
            result = result * base;
        }
        
        return result;
    }
    
    public static double sqrt(double number) {
        if (number < 0) {
            throw new IllegalArgumentException("Cannot calculate square root of a negative number.");
        }
        if (number == 0 || number == 1) {
            return number;
        }

        double guess = number / 2;
        double epsilon = 1e-10;

        while (true) {
            double nextGuess = (guess + number / guess) / 2;
            if (((nextGuess - guess < epsilon) && (guess - nextGuess < epsilon))) {
                break;
            }
            guess = nextGuess;
        }

        return guess;
    }

    
    
    public static double sin(double x) {
        double result = 0.0;
        double term = x;
        int n = 1;

        while (true) {
            result += term;
            term *= -x * x / ((2 * n) * (2 * n + 1)); 
           
            if (term < 1e-10 && term > -1e-10) break; 
            n++;
        }

        return result;
    }

    public static double cos(double x) {
        double result = 0.0;
        double term = 1.0;
        int n = 0;

        while (true) {
            result += term;
            term *= -x * x / ((2 * n + 1) * (2 * n + 2)); 
            
            if (term < 1e-10 && term > -1e-10) break; 
            n++;
        }

        return result;
    }

    public static double tan(double x) {
        double cosValue = cos(x);
        if (cosValue < 1e-10 && cosValue > -1e-10) {
            throw new ArithmeticException("tan is undefined for x where cos(x) = 0.");
        }
        return sin(x) / cosValue;
    }

    public static double cot(double x) {
        double sinValue = sin(x);
        if (sinValue < 1e-10 && sinValue > -1e-10) {
            throw new ArithmeticException("cot is undefined for x where sin(x) = 0.");
        }
        return cos(x) / sinValue;
    }
    
    public static void main(String[] args) throws Exception {
        System.out.println(find_pi());
        System.out.println(exp(1));
        System.out.println(factorial(10));
        System.out.println(power(5., 2));
        System.out.println(sqrt(2));
        System.out.println(sin(30. * find_pi() / 180));
        System.out.println(cos(30. * find_pi() / 180));
        System.out.println(tan(45. * find_pi() / 180));
        System.out.println(cot(45. * find_pi() / 180));
    }
}
