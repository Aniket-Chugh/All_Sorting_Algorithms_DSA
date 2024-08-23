
public class quicksort {

    public static int partition(int arr[], int start, int end) {

        int pivot = arr[end];
        int i = start - 1;

        for (int j = start; j < end; j++) {
            if (arr[j] < pivot) {
                i++;
                // swap -->

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }

        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[end] = temp;
        return i; // pivot index !

    }

    public static void quickSort(int arr[], int start, int end) {
        if (start < end) {

            int pidx = partition(arr, start, end);

            quickSort(arr, start, pidx - 1);
            quickSort(arr, pidx + 1, end);

        }
    }

    public static void main(String[] args) {
        int[] arr = { 6, 3, 9, 5, 2, 8 };
        int n = arr.length;

        quickSort(arr, 0, n - 1);

        // print the sorted array:

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

    }
}
