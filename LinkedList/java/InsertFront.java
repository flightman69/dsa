class Node{
  public int value;
  public Node next;

  public Node(int val) {
    value = val;
    next = null;
  }
}

class LinkedList{
  public Node head;

  public void insertFront(int val){
    Node NewNode = new Node(val);
    NewNode.next = head;
    head = NewNode;
  }

  public int getHeadValue(){
    if(head == null){
      return -1;
    } else {
      return head.value;
    }
  }
}

public class InsertFront {
  public static void main(String[] args) {
    LinkedList list = new LinkedList();
    list.insertFront(3);
    System.out.println("The head is at: "+ list.getHeadValue());

    list.insertFront(2);
    System.out.println("The head is at: "+ list.getHeadValue());
  }
}
