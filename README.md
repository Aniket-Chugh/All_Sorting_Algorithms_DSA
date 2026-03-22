<!-- README.md -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="description" content="In-depth guide to all Java sorting algorithms. Learn Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort, Counting Sort, and Radix Sort with theory, examples, and interview insights.">
    <meta name="keywords" content="Java Sorting Algorithms, Bubble Sort Java, Selection Sort Java, Insertion Sort Java, Merge Sort Java, Quick Sort Java, Heap Sort Java, Counting Sort Java, Radix Sort Java, DSA in Java, Data Structures and Algorithms, Java algorithms for interviews">
    <meta name="author" content="Aniket Chugh">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<h1>All Sorting Algorithms in Java – Deep Dive</h1>

<p>This is a comprehensive guide to <strong>sorting algorithms in Java</strong>. Here we go beyond simple implementation: each algorithm is explained with <strong>its theory, step-by-step working, Java examples, and interview-level insights</strong>. If you are preparing for coding interviews or want to master <strong>DSA in Java</strong>, this is the right place.</p>

<h2>1. Bubble Sort</h2>
<p>Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly swaps adjacent elements if they are in the wrong order.</p>
<ul>
    <li><strong>Time Complexity:</strong> Best: O(n), Average: O(n²), Worst: O(n²)</li>
    <li><strong>Space Complexity:</strong> O(1) (in-place)</li>
    <li><strong>Key Insight:</strong> Can be optimized by stopping if no swaps occur in a pass.</li>
    <li><strong>Interview Tip:</strong> Understand why it’s inefficient for large datasets and how early stopping improves performance.</li>
</ul>

<h2>2. Selection Sort</h2>
<p>Selection Sort repeatedly selects the minimum element from the unsorted part and moves it to the beginning.</p>
<ul>
    <li><strong>Time Complexity:</strong> O(n²) for all cases</li>
    <li><strong>Space Complexity:</strong> O(1) (in-place)</li>
    <li><strong>Key Insight:</strong> Minimizes number of swaps compared to Bubble Sort.</li>
    <li><strong>Interview Tip:</strong> Good for understanding basic sorting logic; rarely used in production.</li>
</ul>

<h2>3. Insertion Sort</h2>
<p>Insertion Sort builds the sorted array one element at a time by placing each element at its correct position.</p>
<ul>
    <li><strong>Time Complexity:</strong> Best: O(n), Average: O(n²), Worst: O(n²)</li>
    <li><strong>Space Complexity:</strong> O(1) (in-place)</li>
    <li><strong>Key Insight:</strong> Extremely efficient for nearly sorted arrays.</li>
    <li><strong>Interview Tip:</strong> Often asked to implement for small datasets or as part of hybrid sorts.</li>
</ul>

<h2>4. Merge Sort</h2>
<p>Merge Sort is a classic divide-and-conquer algorithm. It divides the array into halves, sorts them recursively, and merges them back.</p>
<ul>
    <li><strong>Time Complexity:</strong> O(n log n) for all cases</li>
    <li><strong>Space Complexity:</strong> O(n) due to temporary arrays</li>
    <li><strong>Key Insight:</strong> Stable sort and predictable performance, useful for linked lists.</li>
    <li><strong>Interview Tip:</strong> Be able to explain the merge process and why extra space is required.</li>
</ul>

<h2>5. Quick Sort</h2>
<p>Quick Sort is an efficient divide-and-conquer sorting algorithm. It selects a pivot, partitions the array, and recursively sorts the partitions.</p>
<ul>
    <li><strong>Time Complexity:</strong> Best & Average: O(n log n), Worst: O(n²)</li>
    <li><strong>Space Complexity:</strong> O(log n) for recursion stack</li>
    <li><strong>Key Insight:</strong> Pivot choice affects performance. Randomized pivot reduces worst-case.</li>
    <li><strong>Interview Tip:</strong> Be ready to implement in-place and explain partition logic.</li>
</ul>

<h2>6. Heap Sort</h2>
<p>Heap Sort converts the array into a max-heap, then repeatedly extracts the maximum element to sort the array.</p>
<ul>
    <li><strong>Time Complexity:</strong> O(n log n) for all cases</li>
    <li><strong>Space Complexity:</strong> O(1) (in-place)</li>
    <li><strong>Key Insight:</strong> Not stable, but good for memory-constrained scenarios.</li>
    <li><strong>Interview Tip:</strong> Understand heapify and how it maintains heap property.</li>
</ul>

<h2>7. Counting Sort</h2>
<p>Counting Sort is a non-comparison-based sorting algorithm. It counts occurrences of elements and places them at correct positions.</p>
<ul>
    <li><strong>Time Complexity:</strong> O(n + k), where k is the max element value</li>
    <li><strong>Space Complexity:</strong> O(n + k)</li>
    <li><strong>Key Insight:</strong> Works only for integers or small range of discrete elements.</li>
    <li><strong>Interview Tip:</strong> Know when Counting Sort is better than comparison-based sorts.</li>
</ul>

<h2>8. Radix Sort</h2>
<p>Radix Sort sorts numbers digit by digit using Counting Sort as a subroutine.</p>
<ul>
    <li><strong>Time Complexity:</strong> O(nk), where k is number of digits</li>
    <li><strong>Space Complexity:</strong> O(n + k)</li>
    <li><strong>Key Insight:</strong> Stable sorting for multiple digit numbers; used in large-scale sorting.</li>
    <li><strong>Interview Tip:</strong> Often asked with large numbers or strings; explain stability importance.</li>
</ul>

<h2>Key Interview-Level Takeaways</h2>
<ul>
    <li>Know <strong>time and space complexity</strong> for all algorithms.</li>
    <li>Be able to discuss <strong>stability</strong> and why it matters.</li>
    <li>Understand which algorithm is <strong>best suited for small vs large datasets</strong>.</li>
    <li>Practice implementing <strong>in-place vs not in-place</strong> sorting techniques.</li>
    <li>Be ready for hybrid sorting discussions, e.g., Insertion + Merge Sort for optimization.</li>
</ul>

<p>Practice these sorting algorithms in Java and understand their theory deeply. Mastering these concepts will help you <strong>stand out in coding interviews</strong> and excel in <strong>Data Structures and Algorithms</strong>.</p>

</body>
</html>
