public class index {
  public static void main(String[] args) {
    System.out.println(fibonacci(01));  // returns 0
    System.out.println(fibonacci(02));  // returns 1
    System.out.println(fibonacci(03));  // returns 1
    System.out.println(fibonacci(15));  // returns 377
    System.out.println(fibonacci(20));  // returns 4181
  }

  public static int fibonacci(int x) {
    if (x <= 2) {
      return x - 1;
    }

    return fibonacci(x - 1) + fibonacci(x - 2);
  }
}
