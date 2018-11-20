package javaapplication2;
import java.math.BigInteger;
import static java.math.BigInteger.*;
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
            BigInteger n ,d17;
            d17 = valueOf(17);
            //System.out.println(d17);
            while(true){
                    n = sc.nextBigInteger();
                    if(n.equals(ZERO))break;
                    if(n.mod(d17)==ZERO)System.out.println(1);
                    else System.out.println(0);
            }
    }
}
