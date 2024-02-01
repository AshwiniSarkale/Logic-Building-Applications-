
class node
{
    public int data;
    public node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyLL
{
    private node first;
    private int count;
    
    public SinglyLL()
    {
        first = null;
        count = 0;
    }
}

class Program408
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

    }
}