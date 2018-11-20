package bigmod;

import java.math.BigInteger.*;
import java.util.*;
import java.math.*;

public class Bigmod {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger year;
        int chec = 0;
        while (sc.hasNextBigInteger()) {
            year = sc.nextBigInteger();
            if (chec != 0) {
                System.out.println();
            }
            chec = 1;
            if ((year.mod(BigInteger.valueOf(400)).equals(0)) || ((year.mod(BigInteger.valueOf(4)).equals(0)) && !(year.mod(BigInteger.valueOf(100)).equals(0)))) {
                System.out.println("This is leap year.");
                if (year.mod(BigInteger.valueOf(15)).equals(0)) {
                    System.out.println("This is huluculu festival year.");
                }
                if (year.mod(BigInteger.valueOf(55)).equals(0)) {
                    System.out.println("This is bulukulu festival year.");
                }
            } else if (year.mod(BigInteger.valueOf(15)).equals(0)) {
                System.out.println("This is huluculu festival year.");
            } else {
                System.out.println("This is an ordinary year.");
            }
        }
    }
}
