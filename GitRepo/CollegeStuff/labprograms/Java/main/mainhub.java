package CollegeStuff.labprograms.Java.main;


// Main hub to run various Java programs if using other packages
// I have not used since its in same package
import CollegeStuff.labprograms.Java.srcprogram.studentdetail;
import CollegeStuff.labprograms.Java.srcprogram.sumofproduct;
import CollegeStuff.labprograms.Java.srcprogram.matrixrowsums;
import CollegeStuff.labprograms.Java.srcprogram.mirrorreverse;
import CollegeStuff.labprograms.Java.srcprogram.arithmeticswitch;
import CollegeStuff.labprograms.Java.srcprogram.fibonnacci;

import java.lang.System;
import java.lang.Exception;
import java.util.InputMismatchException;
import java.awt.*;
import javax.swing.*;

public class mainhub {
     public static void main(String[] args) throws Exception {
        JFrame windowscreen = new JFrame();
        windowscreen.setSize(600, 400);
        windowscreen.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        windowscreen.setResizable(false);
        windowscreen.setTitle("NOTSLIGs Library"); 
        windowscreen.setLocationRelativeTo(null);
        windowscreen.setLayout(new BorderLayout());


         JLabel label = new JLabel("Running NOTSLIG/labprograms/Java", SwingConstants.CENTER);
        label.setFont(new Font("Arial", Font.BOLD, 20));
        windowscreen.add(label, BorderLayout.CENTER);


        windowscreen.setVisible(true);
        

  String input = JOptionPane.showInputDialog(
            windowscreen,
            "Enter a number to choose your program:\n" +
            "1: Student Details\n" +
            "2: Sum of Products\n" +
            "3: Matrix Row Sum\n" +
            "4: Mirror Inverse\n" +
            "5: Numeric Switch\n" +
            "6: Fibonacci Number",
            "Select Program",
            JOptionPane.QUESTION_MESSAGE
        );
        
        try {
           JOptionPane.showMessageDialog(windowscreen, "Running the program request");
            if (input == null || input.isEmpty()) {
                JOptionPane.showMessageDialog(windowscreen, "Bye kurwa perdoyle");
                System.exit(0);
            }
           int option = Integer.parseInt(input);
            switch (option) {
                case 1:
                    JOptionPane.showMessageDialog(windowscreen, "Program to access student details name and marks in 2 subjects and find their total marks, average and grade them accordingly");
                    new studentdetail().studentinfo();
                    break;
                case 2:
                    JOptionPane.showMessageDialog(windowscreen, "Program to read two inputs having same digits and multiplying each inputs digit with other and find their SOP");
                    new sumofproduct().sop();
                    break;
                case 3:
                    JOptionPane.showMessageDialog(windowscreen, "Program to create a matrix of two dimensions and find sum of each row");
                    new matrixrowsums().matrixrow();
                    break;
                case 4:
                    JOptionPane.showMessageDialog(windowscreen, "Program to check whether the array is a mirror inverse");
                    new mirrorreverse().mirrorrev();
                    break;
                case 5:
                    JOptionPane.showMessageDialog(windowscreen, "Program to input two numbers and peform arthmetic operations using switch case");
                    new arithmeticswitch().mathswitch();
                    break;
                case 6:
                    JOptionPane.showMessageDialog(windowscreen, "Program to find Fibonnacci number by inputting the range from start till end using java ");
                    new fibonnacci().fibonnacii();
                    break;
                default:
                    JOptionPane.showMessageDialog(windowscreen, "Not in my .$directory — please take that L and cope ");
            }
        } catch (InputMismatchException e) {
           JOptionPane.showMessageDialog(windowscreen, "Dude pick from above");
        } 
        catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(windowscreen, "it says number not skibidi");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(windowscreen, "man im deeeaaadddd" + e.getMessage());
        } finally {
            JOptionPane.showMessageDialog(windowscreen, "Thank you for using the Notslig$directory!");
        System.exit(0); 
        }

          
  }
}
