public class ForLoopExample {
    public static void main(String[] args) {
        int[] marks = {85, 90, 78, 88, 92};
        int total = 0;

        for (int i = 0; i < marks.length; i++) {
            total += marks[i];
        }

        double average = total / (double) marks.length;
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);
    }
}
