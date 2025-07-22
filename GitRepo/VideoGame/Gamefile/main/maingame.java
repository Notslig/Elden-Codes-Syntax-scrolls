package main;
import javax.swing.JFrame;

//import main.GamePanel;
public class maingame {
    public static void main(String[] args) throws Exception {
        JFrame windowscreen=new JFrame();
        windowscreen.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        windowscreen.setResizable(false);
        windowscreen.setTitle("Gulag Adventure"); 
        GamePanel gamepanel = new GamePanel();
        windowscreen.add(gamepanel);
        windowscreen.pack();
        windowscreen.setLocationRelativeTo(null);
        windowscreen.setVisible(true);
        gamepanel.startGameThread();
    }   
    
}
