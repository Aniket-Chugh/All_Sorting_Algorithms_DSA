
import java.util.Scanner;

public class bubblesort {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("enter the size of the element : ");
        int size = input.nextInt();
        int[] arr = new int[size];

        System.out.println("enter the elements : ");
        for (int i = 0; i < size; i++) {
            arr[i] = input.nextInt();
        }

        // bubble sorting logic :

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap the elements :
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }

        System.out.println();


       // time complexity : O(n^2);

    }
}
