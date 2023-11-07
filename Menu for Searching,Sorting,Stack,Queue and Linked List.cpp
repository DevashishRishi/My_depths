#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;
using std::sort;
#define SIZE 100
#define max 101

void Linear_search();
int search(int arr[],int,int);

void Binary_search();
int search2(int arr[],int,int);

void Bubble_sort();

void Insertion_sort();

void Selection_sort();
int samllest(int arr[],int k,int size);
int sort1(int arr[],int n);

void Merge_sort();
void merge(int arr[],int,int);
void sort2(int arr[],int,int);

void Quick_sort();
int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);

void Radix_sort();
int largest(int arr[], int n);
void radix_sort(int arr[], int n);

void Shell_sort();

struct stack{
	
	int top= -1;
    int arr[max];
};
void push(stack*,int x);
void pop(stack*);
void print(stack*);

struct queue{
	
	int front = -1;
	int rear = - 1;
	int arr_queue[max];
};
void enqueue(queue*,int x);
void dequeue(queue*);
void display(queue*);


struct Node{
	int data;
	Node* next;
};

Node* head;

void Insert_at_head(int x);
void Insert_at_tail(int y);
void Insert_at_Nth_position(int z,int position);
void Delete_at_Nth_position(int p);
void Reverse();
void Print();

struct Node2{
	int data;
	struct Node2* next;
	struct Node2* prev;
};

struct Node2* head2;

void Insertion_at_head(int x);
void Insertion_at_tail(int v);
void Print_DL();
void ReversePrint();
void Insert_at_Nth_position2(int z,int position);
void Deletion_at_Nth_position(int y);

int main(){
	int ch;
	char ch2,ch3;
    LOOP: while(1){
    	cout<<endl;
   	printf("Please input your choice: \n");
	printf("1. Searching \n");
	printf("2. Sorting \n");
	printf("3. Stack \n");
	printf("4. Queue \n");
	printf("5. Linked List\n");
	printf("6. EXIT \n");
	scanf("%d",&ch);
	switch(ch){
		
		case 1:
			cout<<endl;
		printf("Please select from the following :\n");
		printf("A. Linear Search\n");
		printf("B. Binary Search\n");
		printf("C. EXIT\n");
		scanf("%s",&ch2);
		switch(ch2){
			
			case 'a':
			case 'A':
				printf("\nYou chose Linear Search\n");
				Linear_search();
				break;
				
			case 'b':
			case 'B':
				printf("\nYou chose Binary Search\n");
				Binary_search();
				break;
				
			case 'c':
			case 'C':
				goto LOOP;
				//exit(0);
				break;
				
			default:
				printf("\nYou entered the wrong choice\n");
				
		}
		break;
		case 2:
			cout<<endl;
		printf("Please select from the following: \n");
		printf("A.Bubble sort\n");
		printf("B.Insertion Sort\n");
		printf("C.Selection sort\n");
		printf("D.Merge sort\n");
		printf("E.Quick sort\n");
		printf("F.Radix sort\n");
		printf("G.Shell sort\n");
		printf("H.EXIT\n");
		scanf("%s",&ch3);
		switch(ch3){
			
			case 'a':
			case 'A':
				printf("You chose Bubble sort\n");
				Bubble_sort();
				break;
				
			case 'b':
			case 'B':
				printf("You chose Insertion sort\n");
				Insertion_sort();
				break;
			case 'c':	
			case 'C':
				printf("You chose Selection sort\n");
				Selection_sort();
				break;
				
			case 'd':
			case 'D':
				printf("You chose Merge sort\n");
				Merge_sort();
				break;
				
			case 'e':
			case 'E':
				printf("You chose Quick sort\n");
				Quick_sort();
				break;
					
			case 'f':	
			case 'F':
			    printf("You chose Radix sort\n");
				Radix_sort();
				break;
				
			case 'g':
			case 'G' :
				printf("You chose Shell sort\n");
				Shell_sort();
				break;
					
			case 'h':
			case 'H':
				goto LOOP;
			   // exit(0);
				break;
					
			default:
				printf("Your choice doesnot match any point");
		}	
		break;	
        case 3:{
        	int ch4;
			int x;
			stack st;
			while(1){
				cout<<endl;
			cout<<"Please Enter your choice: "<<endl;
			cout<<"1.Push"<<endl;
			cout<<"2.POP"<<endl;
			cout<<"3.Print"<<endl;
			cout<<"4.Exit"<<endl;
			cin>>ch4;
			switch(ch4){
				case 1:{
					cout<<"Please enter your element to be pusshed"<<endl;
					cin>>x;
					push(&st,x);
					break;
					}
				case 2:{
					pop(&st);
					break;
				}	
				case 3:{
					print(&st);
					break;
				}
				case 4:{
					goto LOOP;
					//exit(0);
					break;
				}
				default:{
					cout<<"Please Live, Life is beautiful and pick something correct"<<endl;
					break;
				}
			}	
		}
			break;
		}
		case 4:{
			int ch5;
  			int x;
  			queue qu;
			while(1){
				cout<<endl;
				cout<<"Please Enter your choice: "<<endl;
				cout<<"1. Enqueue"<<endl;
				cout<<"2. Dequeue"<<endl;
				cout<<"3. Display"<<endl;
				cout<<"4. Exit"<<endl;
				cin>>ch5;
				switch(ch5){
				case 1:{
					cout<<"Please Enter the element to be enqueued: ";
					cin>>x;
					enqueue(&qu,x);
					break;
					}
				case 2:{
					dequeue(&qu);
					break;
					}
				case 3:{
					display(&qu);
					break;
					}
				case 4:{
					goto LOOP;
					//exit(0);
					break;
					}
				default:{
					cout<<"Please Go Outside And Touch Some Grass"<<endl;
					break;
					}
				
				}		
			}
				break;
		}
		case 5:{
			    char ch6;
			   	cout<<endl;
				cout<<"Please Enter your choice: "<<endl;
				cout<<"A. Single Linked List"<<endl;
				cout<<"B. Doubly Linked List"<<endl;
				cout<<"C. Exit"<<endl;
				cin>>ch6;
				switch(ch6){
					case 'A':
					case 'a':{
						int ch7;
						while(1){
			   			 	int x,y,z,position,p;
			    				cout<<endl;
			    				cout<<"Please Enter Your Choice: "<<endl;
			    				cout<<"1.Insert_at_head"<<endl;
			    				cout<<"2.Insert_at_tail"<<endl;
			    				cout<<"3.Insert_at_Nth_position"<<endl;
			    				cout<<"4.Delete_at_Nth_positiion"<<endl;
			    				cout<<"5.Reverse"<<endl;
			    				cout<<"6.Print"<<endl;
			    				cout<<"7.Exit"<<endl;
			    				cin>>ch;
			    				switch(ch){
			    					case 1:{
			    					cout<<"Please Enter your Element to be inserted at the head"<<endl;
			    					cin>>x;
			    					Insert_at_head(x);
									break;
									}
									case 2:{
									cout<<"Please Enter your Element to be entered at the tail"<<endl;
									cin>>y;
									Insert_at_tail(y);
									break;
									}
									case 3:{
									cout<<"Please Enter your Element to be entered : "<<endl;
									cin>>z;
									cout<<"We're assuming that only correct position is entered."<<endl;
									cout<<"Now,Please Enter the specific position you want element to be inserted: "<<endl;
									cin>>position;
									Insert_at_Nth_position(z,position);
									break;
									}
									case 4:{
									cout<<"Please Specify the Node you want the Element Deleted of"<<endl;
									cin>>p;
									Delete_at_Nth_position(p);
									break;
									}
									case 5:{
									Reverse();
									break;
									}
									case 6:{
									Print();
									break;
									}
									case 7:{
									//exit(0);
									goto LOOP;
									break;
									}
									default:{
									cout<<"Please do not give up on living, Make it productive And select correct option"<<endl;
									break;
								}
							}
			   		}
						break;
				}
				case 'B':
				case 'b':{
					int ch8;
					int a,y,z,v,position;
					while(1){
						cout<<endl;
						cout<<"1.Insertion_at_head"<<endl;
						cout<<"2.Insertion_at_tail"<<endl;
						cout<<"3.Insertion_at_specif_position"<<endl;
						cout<<"4.Reversal"<<endl;
						cout<<"5.Print"<<endl;
						cout<<"6.Delete at specific position"<<endl;
						cout<<"7.Exit"<<endl;
						cin>>ch8;
					    switch(ch8)
							{
								case 1:{
								cout<<"Please Enter an element to be inserted in the list: "<<endl;
								cin>>a;
								Insertion_at_head(a);
								break;
								}
								case 2:{
									cout<<"Please Enter an element to be inserted at tail:  ";
									cin>>v;
									Insertion_at_tail(v);
									break;
								}
								case 3:{
									cout<<"Please enter the element to be added: ";
									cin>>z;
									cout<<"Now, Please enter the specific position in which to be added: ";
									cin>>position;
									Insert_at_Nth_position2(z,position);
									break;
								}
								case 4:{
								ReversePrint();
								break;
								}
								case 5:{
								Print_DL();
								break;
								}
								case 6:{
									cout<<"Please Enter the specific position you want the element deleted of: "<<endl;
									cin>>y;
									Deletion_at_Nth_position(y);
									break;
								}
								case 7:{
								//exit(0);
								goto LOOP;
								break;
								}
								default:{
						        cout<<"Human mallice is bottomless, please don't fall into it and make worthy choices."<<endl;
								break;
								}
							}
						}
					break;
				}
			}	
		}
		case 6:{
			exit(0);
			break;
		}
		default:{
			cout<<"Nah Bro! You've got it all wrong. Please motivate youself,Life is full of colours. Don't see just Grey.";
			break;
		}
     }
  }
		
	return 0;	
}

void Linear_search(){
	int arr[10];
	int size;
	int key;
	int i,p;
	printf("\nPlease enter the number of elements in your array: \n");
	scanf("%d",&size);
	printf("Now, Please enter the elemets in the array: \n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements you enetered are: \n");
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Please enter the element to be seacrhed\n");
	scanf("%d",&key);
	
	p = search(arr,size,key);
	if(p==-1) printf("The entered element doesnot exist.\n");
	else
	printf("The element %d found at %d position",key,p+1);
	
}

int search(int arr[],int size,int key){
	int i;
	for(i=0;i<size;i++){
		if(key == arr[i]) return i;
	}
	return -1;
}


void Binary_search(){
	int arr[10];
	int size;
	int key;
	int i,p;
	printf("\nPlease enter the number of elements in your array: \n");
	scanf("%d",&size);
	printf("Now, Please enter the elemets in the array: \n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements you enetered are: \n");
	int n = sizeof(arr) / sizeof(arr[0]);
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/ 
    sort(arr, arr + n);
 
	for(i=1;i<=size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nEnter the element to be searched\n");
	scanf("%d",&key);
	p = search2(arr,size,key);
	
	if(p==-1) printf("The entered element doesnot match.\n");
	else
	printf("The element %d found at %d position",key,p);
}

int search2(int arr[],int size,int key){
	int head,tail,mid;
	head = 0;
	tail = size-1;
	while(head<=tail){
		mid = (head + tail)/2;
		if(key == arr[mid]) return mid;
		if(key<arr[mid])  head = mid-1;
		else
		head = mid + 1;
	}
	return -1;
}


void Bubble_sort(){
	int i,j,temp,arr[20],size;
	printf("Please enter the number of elements in your array:\n");
	scanf("%d",&size);
	printf("Now,Please enter the elements in your array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elemnts you entered are: \n");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	// now for the fun part
	for(i=0;i<size;i++){
		for(j=0;j<(size-1);j++){
			if(arr[j]>arr[j+1]){
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("THE ENTERED ARRAY IN SORTED MANNER IS: ");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}


void Insertion_sort(){
	int i,j,temp,arr[20],size;
	printf("Please enter the number of elements in your array:\n");
	scanf("%d",&size);
	printf("Now,Please enter the elements in your array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elemnts you entered are: \n");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	
	// now for the fun part 
	for(i=1;i<size;i++){
		temp=arr[i];
		j=i-1;
		while(temp<arr[j]&&j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	printf("After Sorting: ");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
}


void Selection_sort(){
	int i,j,temp,arr[20],size;
	printf("Please enter the number of elements in your array:\n");
	scanf("%d",&size);
	printf("Now,Please enter the elements in your array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements you entered are: \n");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	sort1(arr,size);
	printf("\nAfter sorting:");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
}

int smallest(int arr[],int k,int size){
	int pos = k,small = arr[k],i;
	for(i=k+1;i<size;i++){
		if(arr[i]<small){
			small= arr[i];
			pos = i;
		}
	}
	return pos;
}

int sort1(int arr[],int size){
	int k,pos,temp;
	for(k=0;k<size;k++){
		pos = smallest(arr,k,size);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}


void Merge_sort(){
	int i,arr[20],size;
	printf("Please enter the number of elements in your array:\n");
	scanf("%d",&size);
	printf("Now,Please enter the elements in your array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements you entered are: \n");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	sort2(arr,0,(size-1));
	printf("\nThe sorted Array:\n");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
}

void merge(int arr[],int beg,int mid,int end){
	int i = beg,j=mid+1,index=beg,temp[23],k;
	while(i<=mid&&j<=end){
		if(arr[i]<arr[j]){
			temp[index] = arr[i];
			i++;
		}else{
			temp[index] = arr[j];
			j++;
		}
		index++;
	}
	if(i>mid){
		while(j<=end){
			temp[index]=arr[j];
			j++;
			index++;
		}
	}else{
		while(i<=mid){
			temp[index]=arr[i];
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++)
	arr[k]=temp[k];
}

void sort2(int arr[],int beg,int end){
	int mid;
	if(beg<end){
		mid=(beg+end)/2;
		sort2(arr,beg,mid);
		sort2(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}


void Quick_sort(){
	int arr[100], i, n;
		printf("\n Enter the number of elements in the array: ");
		scanf("%d", &n);
		printf("\n Enter the elements of the array: ");
		for(i=0;i<n;i++)
			{
 				scanf("%d", &arr[i]);
			}
		quick_sort(arr, 0, n-1);
		printf("\n The sorted array is: \n");
		for(i=0;i<n;i++)
		printf(" %d\t", arr[i]);
}

int partition(int a[], int beg, int end){
	int left, right, temp, loc, flag;
	loc = left = beg;
	right = end;
	flag = 0;
		while(flag != 1)
			{
				while((a[loc] <= a[right]) && (loc!=right))
				right--;
 				if(loc==right)
 					flag =1;
 					else if(a[loc]>a[right])
 						{
 							temp = a[loc];
 							a[loc] = a[right];
 							a[right] = temp;
 							loc = right;
 						}
	if(flag!=1)
 		{
			while((a[loc] >= a[left]) && (loc!=left))
			left++;
 			if(loc==left)
			flag =1;
 				else if(a[loc] <a[left])
				 {
 					temp = a[loc];
					a[loc] = a[left];
					a[left] = temp;
					loc = left;
 				}
 		}
}
return loc;
}

void quick_sort(int a[], int beg, int end){
	int loc;
	if(beg<end)
	{
 		loc = partition(a, beg, end);
		quick_sort(a, beg, loc-1);
		quick_sort(a, loc+1, end);
	}
}


void Radix_sort(){
	int arr[SIZE], i, n;
	printf("\n Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++)
		{	
			scanf("%d", &arr[i]);
		}
		radix_sort(arr, n);
		printf("\n The sorted array is: \n");
		for(i=0;i<n;i++)
		printf(" %d\t", arr[i]);
	
}

int largest(int arr[], int n){
	int large=arr[0], i;
	for(i=1;i<n;i++)
		{
 			if(arr[i]>large)
 			large = arr[i];
		}
	return large;
}

void radix_sort(int arr[], int n){
	int bucket[SIZE][SIZE], bucket_count[SIZE];
	int i, j, k, remainder, NOP=0, divisor=1, large, pass;
	large = largest(arr, n);
	while(large>0)
	{
		NOP++;
		large/=SIZE;
	}
	for(pass=0;pass<NOP;pass++) // Initialize the buckets
		{
		for(i=0;i<SIZE;i++)
		bucket_count[i]=0;
		for(i=0;i<n;i++)
 	{
 // sort the numbers according to the digit at pass_th place
		remainder = (arr[i]/divisor)%SIZE;
 		bucket[remainder][bucket_count[remainder]] = arr[i];
		bucket_count[remainder] += 1;
 	}
 // collect the numbers after PASS pass
	i=0;
	for(k=0;k<SIZE;k++)
	 {
		for(j=0;j<bucket_count[k];j++)
		 {
 			arr[i] = bucket[k][j];
			i++;
 		}
 	}
	divisor *= SIZE;
	}
}


void Shell_sort(){
	
int arr[10]={-1};
	 int i, j, n, flag = 1, gap_size, temp;
	 printf("\n Enter the number of elements in the array: ");
	 scanf("%d", &n);
	 printf("\n Enter %d numbers: ",n); // n was added
	 for(i=0;i<n;i++)
	 scanf("%d", &arr[i]);
	 gap_size = n;
	 while(flag == 1 || gap_size > 1)
{
	 	 flag = 0;
	 	 gap_size = (gap_size + 1) / 2;
	 	 for(i=0; i< (n - gap_size); i++)
 {
	 	 	 if( arr[i+gap_size] < arr[i])
 {
	 	 	 	 temp = arr[i+gap_size];
	 	 	 	 arr[i+gap_size] = arr[i];
	 	 	 	 arr[i] = temp;
	 	 	 	 flag = 0;
 }
 }
}
	 printf("\n The sorted array is: \n");
	 for(i=0;i<n;i++){
	 	 printf(" %d\t", arr[i]);
}
}


void push(stack* s1,int x){
	if(s1->top==max-1){
		cout<<"Error: Stack is full,No place to push"<<endl;
		return ;
	}
	s1->arr[++s1->top] = x;
}

void pop(stack* s1){
	if(s1->top==-1){
		cout<<"Error: Stack is empty,No element to pop"<<endl;
		return;
	}
	s1->top--;
}

void print(stack* s1){
	if(s1->top==-1){
		cout<<"Error: Stack is empty,No element to print"<<endl;
		return;
	}
	cout<<" Displaying Stack: ";
	for(size_t i(0);i<=s1->top;i++){
		cout<<s1->arr[i]<<" ";
	}
	cout<<endl;
}


void enqueue(queue* q1,int x){
	
	if(q1->rear==max-1)
	printf("Error: Queue is full\n");
	else{
	if(q1->rear==-1) {
	q1->front = q1->rear = 0;
	q1->arr_queue[q1->rear] = x;
	}
	else{
	q1->rear++;
	q1->arr_queue[q1->rear] = x;
	}
	}
}

void dequeue(queue* q1){

	if(q1->front==-1){
		printf("Error:No element to dequeue\n");
		return;
	}else{
		if(q1->front == q1->rear) 
		q1->front = q1->rear = -1;
		else
		q1->front++;
	}
}

void display(queue* q1){
	
	if(q1->front==-1||q1->front>q1->rear){
		printf("Error:No element to dequeue");
		return;
	}else{
		printf("Displaying Queue: ");
		for(size_t i=q1->front;i<=q1->rear;i++){
			printf(" %d ",q1->arr_queue[i]);
		}
		printf("\n");
	}
	
}


void Insert_at_head(int x){
	// creation of a Node dynamically
	Node* temp_1 = new Node();
	temp_1->data = x;
	temp_1->next = head;
	
	head=temp_1;
}

void Insert_at_tail(int y){
	//creation of a new node dynamically
	Node* temp_2 = new Node();
	temp_2->data = y;
	temp_2->next = NULL;
	
	// for the case where the list is empty
	if(head==NULL){
		head=temp_2;
		return;
	}
	
	// for the rest of the cases
	// creating a new variable to travere to the point of insertion
	Node* temp_3 = head;
	while(temp_3->next!=NULL){
		temp_3 = temp_3->next;
	}
	temp_3->next=temp_2;
}

void Insert_at_Nth_position(int z,int position){
   // creation of new node dynamically
	Node* temp_4 = new Node();
	temp_4->data = z;
	temp_4->next = NULL;
	
	// for the case if the Nth position is the first node
	if(position==1){
		temp_4->next = head;
		head = temp_4;
		return;
	}
	
	// for the rest of the cases
	// creation of a new node for traversal
	//1.) we'll need to go to (n-1)th node first.
	//2.) temp_5 now points to (n-1)th node, means now it has the address of the (n-1)th node
	//3.) Now we set the link field of the newly created node as the link field of the (n-1)th node
	//4.) then we adjust the link of the (n-1)th node to point to our newly created node
	loop:
	Node* temp_5 = head;
  	for(size_t i(0);i<(position-2);++i){ //postion-2 to reach the (n-1)th position
		temp_5=temp_5->next;  //(2.)
	}
	temp_4->next=temp_5->next; // (3.)
	temp_5->next=temp_4; //(4.)  
	
}

void Delete_at_Nth_position(int p){
	// create another variable to traverse to the position to where node is to deleted
	Node* temp_6=head; // start with head
	
	//if we have to delete the first node
	if(p==1){
		head=temp_6->next;// head now points at the second link where initially first node was pointing
		delete temp_6;
		return;
	}
	
	// to traverse to the nth position
	for(size_t i(0);i<(p-2);++i){ // if enterd 3rd position will only execute once to reach at (n-1)th position
		temp_6=temp_6->next;// temp_3 pointing to (n-1)th position
	}
	
	// new variable to store 
	Node* temp_7= temp_6->next;// nth node
	temp_6->next=temp_7->next;
	delete temp_7;
}

void Reverse(){
	Node* current,*prev,*next_node;
	current=head; // is actually where we currently are
	prev=NULL; // to store the address of the head
	
	while(current!=NULL){
		next_node=current->next;
		current->next=prev;
		prev=current;
		current = next_node;
	}
	head=prev;	
}

void Print(){
	Node* print_variable = head;
	cout<<"List is: ";
	while(print_variable!=NULL){
		cout<<print_variable->data<<" ";
		print_variable = print_variable->next;
	}
	cout<<endl;
}


void Insertion_at_head(int a){
	// creation of a new node dynamically
	struct Node2* temp = (struct Node2*)malloc(sizeof(struct Node2));
	temp->data = a;
	temp->next = NULL;
	temp->prev = NULL;
	
	//for the case if the list is empty
	if(head2==NULL){
		head2 = temp;
		return;
	}
	
	// for the case if the list isn't empty
	head2->prev = temp;
	temp->next = head2;
	head2 = temp;	
}

void Print_DL(){
	struct Node2* temp_4 = head2;
	printf("Forward: ");
	while(temp_4!=NULL){
		printf("%d ",temp_4->data);
		temp_4 = temp_4->next;
	}
	printf("\n");
}

void ReversePrint(){
	struct Node2* temp_5 = head2;
	if(temp_5==NULL) return ;  //empty list,exit.
	
	// going to last node
	while(temp_5->next!=NULL) temp_5 = temp_5->next;
	
	//traversing backward
	printf("Backward: ");
	while(temp_5!=NULL){
		printf("%d ",temp_5->data);
		temp_5 =  temp_5->prev;
	}
	printf("\n");
}

void Deletion_at_Nth_position(int y){
	
	struct Node2* traverse_var = head2;
	// for the case if the 1st node is to be deleted
	if(y==1){
		
	 	head2=traverse_var->next;
	 	traverse_var->next->prev = NULL;
	 	free(traverse_var);
	 	return;
	}
	
	// for the rest of the cases
	for(size_t i(0);i<y-2;i++){
	traverse_var = traverse_var->next; // now traverse_var points to the n-1th node
	}
	Node2* temp1 = traverse_var->next;//Nth node
	Node2* temp2 = temp1->next;
	temp2->prev = temp1->prev;
	traverse_var->next = temp1->next;
	free(temp1);
}

void Insert_at_Nth_position2(int z,int position){
	
	struct Node2* temp_var = (struct Node2*)malloc(sizeof(struct Node2));
	temp_var->data = z;
	temp_var->next = NULL;
	temp_var->prev = NULL;
	
	// if its the first node being inserted
	if(position==1){
		temp_var->next = head2;
		head2->prev=temp_var;
		temp_var->prev = NULL;
		head2 = temp_var;
	}
	
	// for the rest of the cases
	else{
		Node2* temp_var2 = head2;
		
	for(size_t i(0);i<position-2;i++){
		temp_var2 = temp_var2->next;
	}
    	temp_var->next = temp_var2->next;
	    temp_var->next->prev = temp_var;
	    temp_var2->next = temp_var;
	    temp_var->prev = temp_var2;

	}
}

void Insertion_at_tail(int v){
	Node2* temp = new Node2();
	temp->data = v;
	temp->next = NULL;
	temp->prev = NULL;
	
	// for the case if the list is empty
	if(head2 == NULL){
		head2 = temp;
		return;
	}
	
	// for the rest of the cases
	Node2* temp2 = head2;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next = temp;
	temp->prev = temp2;
	temp->next = NULL;
	
}

