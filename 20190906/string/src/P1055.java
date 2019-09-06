import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class P1055 {

    public static void main(){
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        Pattern p= Pattern.compile("\\d+");
        Matcher m = p.matcher(s);
        int i = 1;
        while(m.find()){

        }
    }

}
