//Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

//Return the decimal value of the number in the linked list.
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* current;
        current=head;
        unsigned int res=0;
        while(current != NULL){
            res = res*2 + current->val;
            current = current->next;
        }
        return res;
    }
};


