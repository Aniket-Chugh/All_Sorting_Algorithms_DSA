
import java.util.Scanner;

public class selectionsort {
// time complexity : O{N^2};


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int size = input.nextInt();
        int[] arr = new int[size];

        // Taking input
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size; i++) {
            arr[i] = input.nextInt();
        }

        // Selection sort
        for (int i = 0; i < arr.length - 1; i++) {
            int smallest = i;

            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[smallest]) {
                    smallest = j;
                }
            }

            // Swap
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }

        // Print sorted array
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
