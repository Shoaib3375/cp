import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
  public static void main(String[] args) throws Exception {
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    int num;
    for (int i = 1; i <= t; i++) {
      num = input.nextInt();
      
      System.out.print("Case " + i + ": ");
      if ((Integer.bitCount(num) & 1) > 0) {
        System.out.println("odd");
      } else {
        System.out.println("even");
      }
    }
  }
}
