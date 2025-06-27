package object_oriented.Polymorphism;

import java.util.*;

// Student class with Comparable implementation
class Student implements Comparable<Student> {
    String name;
    int marks;

    Student(String name, int marks) {
        this.name = name;
        this.marks = marks;
    }

    // Natural ordering: alphabetical order of names
    public int compareTo(Student other) {
    
        return this.name.compareTo(other.name);
    }

    public String toString() {
        return name + " (" + marks + ")";
    }
}

// Comparator to sort by marks
class SortByMarks implements Comparator<Student> {
    public int compare(Student a, Student b) {
        return a.marks - b.marks;
    }
}

// Comparator to sort by name length
class SortByNameLength implements Comparator<Student> {
    public int compare(Student a, Student b) {
        return a.name.length() - b.name.length();
    }
}

public class SortingDemo {
    public static void main(String[] args) {
        // Sorting integers
        List<Integer> numbers = Arrays.asList(5, 2, 8, 1, 9);
        Collections.sort(numbers);
        System.out.println("Sorted integers: " + numbers);

        // List of Students
        List<Student> students = new ArrayList<>();
        students.add(new Student("Charlie", 78));
        students.add(new Student("Alice", 85));
        students.add(new Student("Bob", 92));
        students.add(new Student("David", 85));

        // Natural order (Comparable): alphabetical by name
        Collections.sort(students);
        System.out.println("\nSorted by name (alphabetical): " + students);

        // Custom sort using Comparator: by marks
        Collections.sort(students, new SortByMarks());
        System.out.println("Sorted by marks: " + students);

        // Custom sort using Comparator: by name length
        Collections.sort(students, new SortByNameLength());
        System.out.println("Sorted by name length: " + students);
    }
}

