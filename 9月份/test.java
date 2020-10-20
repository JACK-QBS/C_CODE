import java.util.Objects;

class Student {
    String name;
    int age;
    double height;
    double weight;

    public Student(String name) {
        this.name = name;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Student student = (Student) o;
        return Objects.equals(name, student.name);
    }

}


public class test {
    public static void main(String[] args) {
        Student student1 = new Student("乔邦朔");
        Student student2 = new Student("乔邦朔");
        Student student3 = new Student("马乐");
        Student student4 = new Student("马乐");

        System.out.println(student1.equals(student2));
        System.out.println(student1.equals(student3));
    }

}
