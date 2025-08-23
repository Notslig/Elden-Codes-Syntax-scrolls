
import java.awt.*;
import javax.swing.*;

public class applicationIcon {
     public static void main(String args[]) {
        JFrame window=new JFrame();
        ImageIcon icon=new ImageIcon("E:\\test\\mambooo-fotor-bg-remover-20250720205015.png");
        Image image=icon.getImage();


        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setResizable(true);
        window.setMaximumSize(new Dimension(100, 100));
        window.setTitle("Owaimo");
        window.setIconImage(image);
        window.setVisible(true);

    }
}