class Solution {
public:
    Node* removeAllDuplicates(Node* head) {
        if (!head) return nullptr;

        Node dummy(-1);
        dummy.next = head;
        Node* prev = &dummy;
        Node* current = head;

        while (current) {
            bool hasDuplicate = false;

            //check for duplicates
            while (current->next && current->data == current->next->data) {
                hasDuplicate = true;
                current = current->next;
            }

            if (hasDuplicate) {
            //skip all duplicates
                prev->next = current->next;
            } else {
            //move prev to current node
                prev = prev->next;
            }
            current = current->next;
        }
        return dummy.next;
    }
};
