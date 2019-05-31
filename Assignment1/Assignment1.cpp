   #include <iostream>
    using namespace std;


    class node {
    public:
    // data
    int val;
    //pointer
    node*next;
    // constructor
       node ( int newval) {
         val = newval;
         next = NULL;
          }
    
     };


        class linkedlist {
        public:
        // pointer
        node*head;
        // constructor
         linkedlist () {  
         head = NULL;
         }

      };


   void insert (int newval) {
   // empty linkedlist
    if (head == NULL){
     node*temp = new node;
     head = temp;
    }
     else () {
   // creating a new node
    node*temp = new node;
    node*curr = head;
   // making current to point at the last element
    while (curr->next != NULL) {
      curr = curr->next;
      count++;
     }
         }
    temp->next = NULL;
    // creating a link between current last element and new node to be inserted
    curr->next = temp;

     }


   int countitems () {
   int count = 1;
     node*curr = head;
     while (curr != NULL) 
    {
      count++;
    }
0.
   return count;



      void inserAt(int pos , int data) {
     // checking validity of position
     if ( pos< 1 || pos > countitems + 1 ) 
     {
         cout << "Not a valid position" << endl;
       return;
    }
      

      if (pos < countitems + 1) {
     
     // inserting at first position
      if (pos == 1) {
      node*temp = new node;
      temp->next = head;
      head = temp;
       }
     // inserting at any position other than first and last
     else () {
     node*temp = new node;
     node*curr = head;
     while (curr != pos-1) {
     curr = curr->next;
     count++;
     }
     temp->next = curr->next;
     curr->next = temp;
       }
     
        }
  // inserting at last position
   else ( pos == countitems+1 ) {
    node*temp = new node;
    node*curr = head;
     while (curr != pos-1 ) {
        curr = curr->next;
        count ++;
         }
   temp->next = NULL;
   curr->next = temp;
     }
     
   }  

    
      void delet () {  
   // creating a pointer to point at last node
      node*temp = head;
      while ( temp->next != NULL) {
      temp = temp->next;
       count++;
         }
   // creating a pointer to point at second last node
      node*curr = head;
      while((curr->next)->next!=NULL ) {
         curr = curr->next;
          count++;
         }
  // breaking the link between last and second last node
     curr->next = NULL;
     delet temp;
       }



      void deletAt(int pos){
       // checking the validity of position
      if (pos > countitems) 
    {
       cout << "Not a valid position" << endl;
        return;
    }
   
   // deleting the first node
    if (pos == 1) {
     node*temp = head;
     head = head->next;
     delet temp;
       }

   // deleting any other node
    else () {
     node*curr = head;
     while ( curr != pos-1 ){
     curr = curr->next;
     count++;
     }
      temp = current->next;
       curr->next = current->next->next;
      delet temp;
     }
       }


    void display () {
    if (head = NULL) {
    cout << " NULL" << endl;
    }

    else () {
     node*curr = head;
    while ( curr != NULL) {
    cout << curr->val << "->";
     curr = curr->next;
      }
     cout << "NULL" << endl;
      }


     int main () {
     linkedlist l1;
     for ( int i = 4; i > 0 ; i--) {
      l1.insert(i);
       }
     l1.display();
     cout <<"counitems" << endl;
     l1.insertAt(1,3);
     l1.display();
   }
























     
      
   
    
      












     











       


























       
