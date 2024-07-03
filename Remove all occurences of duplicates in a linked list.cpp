class Solution {
public:
    Node* RemoveAllDuplicates(Node* head) {
        //dummy node to handle edge cases gracefully
        Node dummy;
        dummy.next = head;
        Node* prev = &dummy;  

        while (head != nullptr) {
            if (head->next != nullptr && head->data == head->next->data) {
                //skip all nodes that have the same value
                while (head->next != nullptr && head->data == head->next->data) {
                    Node* toDel = head->next;
                    head->next = head->next->next;
                    delete toDel;
                }
                //skip the last node of this group
                Node* toDel = head;
                prev->next = head->next;
                head = head->next;
                delete toDel;
            } else {
                //move prev only when no deletion
                prev = head;
                head = head->next;
            }
        }
        return dummy.next;
    }
};
