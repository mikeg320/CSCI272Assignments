//
//  main.cpp
//  IPPacketSearch
//
//  
//  Copyright © 2017 Michael Gonzalez. All rights reserved.
//
#include<iostream>
#include<cstdlib>
#include<queue>

using namespace std;

struct Packet{
    
    int SourceIP;
    int DestinationIP;
    string Data;
    
    struct Packet *next;
    
};

class Queue{
    
private:
    
    Packet *rear;
    
    Packet *front;
    
public:
    
    Queue();
    
    void enqueue();
    
    void dequeue();
    
    void display();
    
    void ShowWhatisinData();
    
};

Queue::Queue()
{
    rear = NULL;
    
    front = NULL;
}
void Queue::enqueue()
{
    
    int data;
    
    Packet *temp1 = new Packet ;
    Packet *temp2 = new Packet ;
    
    cout<<"Enter the data to enqueue: ";
    
    cin>>data;
    
    temp1->SourceIP = data;
    temp2->DestinationIP = data;
    
    
    temp1->next = NULL;
    temp2->next = NULL;
    
    if(front == NULL){
        
        front = temp1;
        front = temp2;
        
    }else{
        
        rear->next = temp1;
        rear->next = temp2;
        
    }
    
    rear = temp1;
    rear = temp2;
    
}

void Queue::dequeue(){
    
    Packet *temp1 = new Packet;
    Packet *temp2 = new Packet;
    
    if(front == NULL){
        
        cout<<"\nQueue is Emtpty\n";
        
    }else{
        
        temp1 = front;
        temp2 = front;
        
        front = front->next;
        
        
        cout<<"This is the Source IP "<<temp1->SourceIP;
        cout<<"\n"<<endl;
        cout<<"This is the Destination IP "<<temp2->DestinationIP;
        cout<<"\n"<<endl;
        delete temp1;
        delete temp2;
    }
    
}

void Queue::display()
{
    
    Packet *Ptr = new Packet;
    
    Ptr = front;
    
    if(front == NULL){
        
        cout<<"\nNothing to Display\n";
        
    }else{
        
        while(Ptr!=NULL){
            
            cout<<endl<<Ptr->SourceIP;
            cout<<endl<<Ptr->DestinationIP;
            
            Ptr = Ptr->next;
            
        }
        
    }
}
void Queue::ShowWhatisinData()
{
    string Data;
    int n, m;
    char c1,c2, c3, c4,c5,c6,c7,c8;
    c1 ='L';
    c2 ='Q';
    c3 ='J';
    c4 ='P';
    
    c5 ='L';
    c6 ='C';
    c7 ='Z';
    
    c2 = char(int(c1)-2);
    c3 = char('Q'-2);
    c4 = char('J'-2);
    c5 = char('P'-2);
    
    c6 = char('L'-2);
    c7 = char('C'-2);
    c8 = char('Z'-1);
    
    if(c2=='L', c3=='Q', c4== 'J',c5 =='P');
    //cout<<"J"<<"O"<<"H"<<"N"<<endl;
    cout<<c2<<c3<<c4<<c5<<endl;
	   if(c6== 'L', c7=='C',c8== 'Z');
    // cout<<"J"<<"A"<<"Y"<<endl;
    cout<<c6<<c7<<c8<<endl;
    
}

int main(){
    
    Queue queue;
    
    int choice;
    
    while(true)
    {
    	   cout<<"~~~~~~ * | Menu to view Packets | * ~~~~~~~";
        
        cout<<"\n 1.Enqueue (Enter digits) \n 2.Dequeue(Outputs Digits as Source & Destination IP) \n 3. Display (See all the digits together) \n 4. Display Name of College in Data \n 5. Quit \n" <<endl;
        cout<<"\n"<<endl;
        cout<<" Please enter a Choice, Options 1-5:  ";
        
        cin>>choice;
        
        switch(choice){
                
            case 1:
                
                queue.enqueue();
                
                break;
                
            case 2:
                
                queue.dequeue();
                
                break;
                
            case 3:
                
                queue.display();
                
                break;
                
            case 4:
                
                queue.ShowWhatisinData();
                
                break; 
                
            case 5:
                
                exit(0);
                
                break;
                
            default:
                
                cout<<"\n Invalid, option. Please, Try again \n";
                
                break;
                
        }
        
    }
    
    system("pause");
    return 0;
    
}
