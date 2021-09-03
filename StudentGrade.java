
import java.util.Scanner;

class INFO {
    String SUBJ ;
    String GRADE ;
    boolean chexk = true;
    
    INFO (String SUBJ , String GRADE){
        this.SUBJ = SUBJ;
        this.GRADE = GRADE;   
    }
    void printGrade(){
        System.out.print(SUBJ + " ");
        if (GRADE.equals("F") || GRADE.equals("D")){
            System.out.println("*");
        } else {
            System.out.println(GRADE);
        }
    } 
}

public class StudentGrade {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        

    }

}
