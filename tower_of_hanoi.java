/*
 * for 3 discs the structure is like
  1
  2
  3
Disc A   Disc B   Disc C
 * time complexity of tower of hanoi is O(2^n)
 */
/**
 *
 * @author Anubh_sinha
 */
class move{ //this class will do the algorithm of tower of hanoi
    public void movy(int n, char tower_one,char tower_two, char tower_three)
    {
        if(n==1) // if n = 1 means we have to move top of x to y
        {  
            System.out.println("Move disk " + n + " from " + tower_one + " to " + tower_two);
            return;
        }
        move mov = new move();
        mov.movy(n-1, tower_one, tower_three, tower_two);
        //it is a recursive call to move (n-1) discs from tower one to tower three using tower two.
        System.out.println("Move disk "+n+" from "+ tower_one + " to "+ tower_two);
        mov.movy(n-1, tower_three, tower_two, tower_one);
        //it is a recursive call to move (n-1) discs from tower three to tower two using tower one.
    }
}
public class tower_of_hanoi {
    public static void main(String args[])
    {
        int n = 3;
        char tower_one = 'A';
        char tower_two = 'B';
        char tower_three = 'C';
        move mov = new move();
        mov.movy(n, tower_one, tower_two, tower_three);   
    }
    
}
