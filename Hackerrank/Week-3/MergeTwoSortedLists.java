import java.util.Scanner;

class SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode next;

    SinglyLinkedListNode(int data) {
        this.data = data;
        this.next = null;
    }
}

class SinglyLinkedList {
    SinglyLinkedListNode head;

    void insertNode(int data) {
        SinglyLinkedListNode newNode = new SinglyLinkedListNode(data);
        if (head == null) {
            head = newNode;
        } else {
            SinglyLinkedListNode temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    void printList() {
        SinglyLinkedListNode temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }
}

public class MergeTwoSortedLists {
    
    public static SinglyLinkedListNode mergeLists(SinglyLinkedListNode headA, SinglyLinkedListNode headB) {
        if (headA == null) return headB;
        if (headB == null) return headA;

        SinglyLinkedListNode mergedHead;

        if (headA.data <= headB.data) {
            mergedHead = headA;
            mergedHead.next = mergeLists(headA.next, headB);
        } else {
            mergedHead = headB;
            mergedHead.next = mergeLists(headA, headB.next);
        }

        return mergedHead;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            
            int n1 = sc.nextInt();
            SinglyLinkedList list1 = new SinglyLinkedList();
            for (int i = 0; i < n1; i++) {
                list1.insertNode(sc.nextInt());
            }

            
            int n2 = sc.nextInt();
            SinglyLinkedList list2 = new SinglyLinkedList();
            for (int i = 0; i < n2; i++) {
                list2.insertNode(sc.nextInt());
            }

        
            SinglyLinkedListNode mergedHead = mergeLists(list1.head, list2.head);

            SinglyLinkedList tempList = new SinglyLinkedList();
            tempList.head = mergedHead;
            tempList.printList();
        }

        sc.close();
    }
}
