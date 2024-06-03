public class Main {
    public static void main(String[] args) {
        System.out.println("Jeel Gor is here!!");
        String name = "jeel";
        String ans = name.replace('J', 'e');
        System.out.println(ans);

        // subString
        String name1 = "Jeel and Gor";
        System.out.println(name1.substring(0, 4));

        // Array

        int[] Marks = new int[3];
        Marks[0] = 97;
        Marks[1] = 87;
        Marks[2] = 77;

        for (int i = 0; i < Marks.length; i++) {
            System.out.println(Marks[i]);
        }
        // int marks[] = { 10, 20, 30, 40 };

        // for each looop
        System.out.println("");
        int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };

        for (int element : arr) {
            System.out.println(element + "");
        }
    }
}