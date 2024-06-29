bool areIdentical(struct Node *head1, struct Node *head2) {
    while (head1 && head2 && head1->data == head2->data) {
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == NULL && head2 == NULL;
}

/*
https://www.geeksforgeeks.org/problems/identical-linked-lists/1

Given the two singly Linked Lists respectively. The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have the same data and with the same arrangement too. If both Linked Lists are identical then return true otherwise return false.  

Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: false
*/
