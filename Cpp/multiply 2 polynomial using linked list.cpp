#include <iostream>
using namespace std;
struct node
{
           int c, p;
           node* next;
};
node* addnode(node* start, int c1, int p1)
{
           node* newnode = new node;
           newnode->c= c1;
           newnode->p = p1;
           newnode->next = NULL;
           if (start == NULL)
                      return newnode;
           node* ptr = start;
           while (ptr->next != NULL)
                      ptr = ptr->next;
           ptr->next = newnode;
           return start;
}
void print(node* ptr)
{
           while (ptr->next != NULL)
           {
                      cout << ptr->c << "x^" << ptr->p;
                      if( ptr->next!=NULL && ptr->next->c>=0)
                                 cout << "+";
                      ptr = ptr->next;
           }
           cout << ptr->c<< "\n";
}
 void removeDuplicate(node* start)
{
           node *pt1, *pt2, *dup;
           pt1 = start;
           while (pt1 != NULL && pt1->next != NULL)
           {
                      pt2 = pt1;
                      while (pt2->next != NULL)
                      {
                                 if (pt1->p== pt2->next->p)
                                 {
                                            pt1->c= pt1->c+ pt2->next->c;
                                            dup = pt2->next;
                                            pt2->next = pt2->next->next;
                                            delete (dup);
                                 }
                                 else
                                            pt2 = pt2->next;
                      }
                      pt1 = pt1->next;
           }
}
 node* multiply_poly(node* poly1, node* poly2,node* poly3)
{
           node *ptr1, *ptr2;
           ptr1 = poly1;
           ptr2 = poly2;
           while (ptr1 != NULL)
           {
                      while (ptr2 != NULL)
                      {
                                 int c2, p2;
                                 c2= ptr1->c* ptr2->c;
                                 p2= ptr1->p + ptr2->p;
                                 poly3 = addnode(poly3, c2, p2);
                                 ptr2 = ptr2->next;
                      }
                      ptr2 = poly2;
                      ptr1 = ptr1->next;
           }
           removeDuplicate(poly3);
           return poly3;
}
int main()
{
           node *p1 = NULL, *p2 = NULL, *p3 = NULL;
           p1 = addnode(p1, 3, 6);
           p1 = addnode(p1, 7, 0);
           p2 = addnode(p2, 1, 2);
           p2 = addnode(p2, -8, 1);
           p2 = addnode(p2, 3, 0);
           cout << "1st Polynomial:";
           print(p1);
           cout << "2nd Polynomial:";
           print(p2);
           p3 = multiply_poly(p1, p2, p3);
           cout << "Final Polynomial:";
           print(p3);
           return 0;
}
