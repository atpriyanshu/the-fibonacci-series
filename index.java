public class index {
  public static void main(String[] args) {
    System.out.println(fibonacci(1)); // returns 0
    System.out.println(fibonacci(2)); // returns 1
    System.out.println(fibonacci(3)); // returns 1
    System.out.println(fibonacci(15)); // returns 377
    System.out.println(fibonacci(20)); // returns 4181
  }

  public static int fibonacci(int x) {
    if (x < 3) {
      return x - 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
  }
}
