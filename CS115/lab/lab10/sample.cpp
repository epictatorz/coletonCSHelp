// A simple C program to introduce
// a linked list
// The following code is modified from:
//  http://www.geeksforgeeks.org/linked-list-set-1-introduction/
#include <iostream>
using namespace std;
 
struct Node 
{
  int datum;
  Node *next;
};
 
// Program to create a simple linked 
// list with 3 nodes
int main()
{
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;
   
  // allocate 3 nodes in the heap  
  head = new Node;
  second = new Node;
  third =  new Node;
 
  /* Three blocks have been allocated  dynamically. 
     We have pointers to these three blocks as first, second and third     
    head (0x2008)    second(0x2032)   third(0x2064)
        |                |               |
        |                |               |
        V                V               V
    0x2008           0x2032           0x2064
    +----+------+    +----+------+    +----+------+
    | #  | #    |    | #  | #    |    |  # | #    |
    +----+------+    +----+------+    +----+------+
    datum  next      datum  next      datum  next

   # represents any random value.
   datum is random because we haven't assigned anything yet  */
   
  head->datum = 1; //assign datum in first node
  head->next = second; // Link first node with the second node
   
  /* datum has been assigned to datum part of first block (block 
    pointed by head).  And next pointer of first block points to
    second.  So they both are linked.
 
    head (0x2008)    second(0x2032)   third(0x2064)
        |                |               |
        |                |               |
        V                V               V
    0x2008           0x2032           0x2064
    +----+------+    +----+------+    +----+------+
    | 1  |0x2032|--->| #  | #    |    |  # | #    |
    +----+------+    +----+------+    +----+------+
    datum  next      datum  next      datum  next
  */ 
   
  second->datum = 2; //assign datum to second node
  second->next = third; // Link second node with the third node
   
  /* datum has been assigned to datum part of second block (block pointed by
     second). And next pointer of the second block points to third block.  
    So all three blocks are linked.
   
    head (0x2008)    second(0x2032)   third(0x2064)
        |                |               |
        |                |               |
        V                V               V
    0x2008           0x2032           0x2064
    +----+------+    +----+------+    +----+------+
    | 1  |0x2032|--->| 2  |0x2064|--->|  # | #    |
    +----+------+    +----+------+    +----+------+
    datum  next      datum  next      datum  next
  */
   
  third->datum = 3; //assign datum to third node
  third->next = NULL;
   
  /* datum has been assigned to datum part of third block (block pointed
    by third). And next pointer of the third block is made NULL to indicate
    that the linked list is terminated here.
 
     We have the linked list ready.  
 
    head (0x2008)    
        |                               
        |                              
        V                               
    0x2008           0x2032           0x2064
    +----+------+    +----+------+    +----+------+
    | 1  |0x2032|--->| 2  |0x2064|--->| 3  | NULL |
    +----+------+    +----+------+    +----+------+
    datum  next      datum  next      datum  next
    
     
    Note that only head is sufficient to represent the whole list.  We can 
    traverse the complete list by following next pointers.    */     
 
  return 0;
}
/*

Walking through the makeList function

    Create first guy:

    newNodePtr (0x2008)  
        |         
        |        
        V       
    0x2008       
    +----+------+ 
    | 1  | NULL |
    +----+------+ 
    datum  next  


   Create second guy:

   currPtr(0x2008) 
   head (0x2008)    newNodePtr(0x2032)  
        |                |          
        |                |         
        V                V        
    0x2008           0x2032       
    +----+------+    +----+------+ 
    | 1  | NULL |    | 2  | NULL |
    +----+------+    +----+------+
    datum  next      datum  next     


   Connect the two:
   currPtr(0x2008) 
   head (0x2008)    newNodePtr(0x2032)  
        |                |          
        |                |         
        V                V        
    0x2008           0x2032       
    +----+------+    +----+------+ 
    | 1  |0x2032|--->| 2  | NULL |
    +----+------+    +----+------+


    Create third guy:

    head (0x2008)    currPtr(0x2032)   newNodePtr(0x2064)
        |                |               |
        |                |               |
        V                V               V
    0x2008           0x2032           0x2064
    +----+------+    +----+------+    +----+------+
    | 1  |0x2032|--->| 2  | NULL |    |  3 | NULL |
    +----+------+    +----+------+    +----+------+
    datum  next      datum  next      datum  next


    Connect the last guy:

    head (0x2008)    currPtr(0x2032)   newNodePtr(0x2064)
        |                |               |
        |                |               |
        V                V               V
    0x2008           0x2032           0x2064
    +----+------+    +----+------+    +----+------+
    | 1  |0x2032|--->| 2  |0x2064|--->|  3 | NULL |
    +----+------+    +----+------+    +----+------+
    datum  next      datum  next      datum  next
*/
