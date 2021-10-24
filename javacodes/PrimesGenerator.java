/*
 * SHaDeX0
 * 11 - 10 - 2021 (Monday)
 * Prime Generator Program
 */

import java.util.Scanner;

public class PrimesGenerator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a number:");
        int num = scanner.nextInt();                            //Input the number to find all the primes till 'num'

        System.out.println("Primes till " + num + ":");
        boolean isPrime;                                        //Declaring a flag var
        int count = 0, numberOfPrimes = 0;
        for (int i = 2; i <= num; i++) {                        //Looping through all the numbers from 2 till 'num', including 'num'
            isPrime = true;                                     //Initializing isPrime to true
            for (int j = 2; j < i; j++) {                       //Looping through all the numbers from 3 till the current number (i)
                if(i % j == 0) {                                //If the current number can be divided by any of the previous numbers
                    isPrime = false;                            //We assign isPrime as false as that number is not a prime number
                    break;                                      //If the current number is getting divided by its previous number, then there is no need of further checking
                }
            }
            if (isPrime) {                                      //Checking if the current number is a prime
                System.out.print(i + " ");                      //If yes, then output it
                count++;
                numberOfPrimes++;                               //Incrementing 'count' and 'numberOfPrimes'
            }
            if(count == 10) {                                   //Checking if 'count' is equal to 10
                count = 0;                                      //If yes, assign zero to it
                System.out.println();                           //and provide a new line
            }
        }
                                                                //Output the number of primes till 'num'
        System.out.println("\nCount of prime numbers: " + numberOfPrimes);
    }
}
