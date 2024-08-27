import java.util.Arrays;

public class radixSort {

    public static void logicsort(int arr[], int n, int pos) {
        int[] output = new int[n];
        int[] count = new int[10];

        // Count the occurrences of each digit
        for (int i = 0; i < n; i++) {
            count[(arr[i] / pos) % 10]++;
        }

        // Calculate cumulative count
        for (int i = 1; i < 10; i++) {  // Start from 1 to avoid index out of bounds
            count[i] += count[i - 1];
        }

        // Build the output array
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / pos) % 10] - 1] = arr[i];
            count[(arr[i] / pos) % 10]--;
        }

        // Copy the output array to arr
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    public static void radixsort(int arr[], int n) {
        int max = Arrays.stream(arr).max().getAsInt();

        // Apply counting sort for every digit
        for (int pos = 1; max / pos > 0; pos *= 10) {  // Start pos from 1 and correct loop condition
            logicsort(arr, n, pos);
        }
    }

    public static void main(String[] args) {
        int[] arr = {657,786,342,232,767,1056,999 };
        int n = arr.length;
        radixsort(arr, n);

        // Print the sorted array
        System.out.println("Sorted Array:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
