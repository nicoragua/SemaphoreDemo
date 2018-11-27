package semaphores;

import token.Token;

import java.util.List;

public class Counting {

    private int counter;
    private List<Token> queue;

    public Counting()   {

    }

    public void add(Token token)    {
        queue.add(token);
    }

    public void remove()    {
        queue.remove(0);
    }

}
