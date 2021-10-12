/**
 * SHaDeX0
 * 12 - 10 - 2021 (Tuesday)
 * Program to find the least number of Notes and Coins for a given amount
 * (Only for Indian National Currency - Indian Rupee - INR)
 */

import java.util.Scanner;

public class Coins {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the amount: ");
        int amount;
        try {                                                                   //Checking the possibility of fractions or alphabets
            amount = scanner.nextInt();
            if (amount < 0) {                                                   //If amount is less than zero the print error
                System.out.println("Amount must be greater than zero!");
            } else {                                                            //If amount is greater than zero then calculate the number of notes and coins to be provided
                calculateCoins(amount);
            }
        } catch (Exception e) {                                                 //If any exception is found then print the following error message
            System.out.println("Amount should be a whole number!");
        }
    }

    private static void calculateCoins(int amt) {                               //Function to calculate the least number of notes and coins for a given amount
        //Declaring & initializing the counters for all the notes and coins present in Indian Currency
        int cTwoThousand = 0, cFiveHundred = 0, cTwoHundred = 0, cHundred = 0, cFifty = 0, cTwenty = 0, cTen = 0, cFive = 0, cTwo = 0, cOne = 0;

        while (amt > 0) {                                                       //Running the loop till 'amt' becomes zero
            if (amt >= 2000) {                                                  //If amt is greater than two thousand then pay one 2000 rupee note
                amt -= 2000;
                cTwoThousand++;
            } else if (amt >= 500) {                                            //Else if it is greater than five hundred then pay one 500 note
                amt -= 500;
                cFiveHundred++;
            } else if (amt >= 200) {                                            //Similar to the above but checking for Rs. 200
                amt -= 200;
                cTwoHundred++;
            } else if (amt >= 100) {
                amt -= 100;
                cHundred++;
            } else if (amt >= 50) {
                amt -= 50;
                cFifty++;
            } else if (amt >= 20) {
                amt -= 20;
                cTwenty++;
            } else if (amt >= 10) {
                amt -= 10;
                cTen++;
            } else if (amt >= 5) {
                amt -= 5;
                cFive++;
            } else if (amt >= 2) {
                amt -= 2;
                cTwo++;
            } else {                                                            //Finally if every other case fails, then the 'amt' is equal to 1
                amt--;
                cOne++;
            }
        }
        //Output the number of notes and coins to be provided
        System.out.println("Number of Notes and coins you have to give:\nTwo thousand: " + cTwoThousand +
            "\nFive hundred: " + cFiveHundred + "\nTwo hundred: " + cTwoHundred + "\nOne hundred: " + cHundred +
            "\nFifty: " + cFifty + "\nTwenty: " + cTwenty + "\nTen: " + cTen +
            "\nFive: " + cFive + "\nTwo: " + cTwo + "\nOne: " + cOne);
    }
}
