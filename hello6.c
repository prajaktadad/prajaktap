import java.util.scanner;
public class conditionals{
    
    public static void main(String [] args){
    
    
    scanner scanner = new Scanner(System.in);
    system.out.println("please enter your age: ");
    int age = scanner.nextInt();
    system.out.println("please specify if you hold a valid voter id card or not!!");
    boolean isValidIdcard = scanner.nextBoolean();
    
    if(age>18 && isValidIdcard ==true) {
        system.out.println("you are eligible to vote!! ");
        
    }
        
    }
