#include<iostream>
#include<string>

using namespace std;
class Book
{
	int price;
	public:
		char author[20];
		char publisher[20];
		int stock;
		char title[20];
		void Insert(int i);
		void Display(int i);
		void Update();
		int Search(string x);
		int Searchx(string c,string a);
		int Price()
		{
				return price;
		}
	
};
void Book::Insert(int i)
{
	
	cout<<endl<<":::::ENTER DETAILS FOR BOOK("<<i+1<<")::::"<<endl;
	cout<<"Enter the title of the book"<<endl;
	cin>>title;
	cout<<"Enter the publisher"<<endl;
	cin>>publisher;
		cout<<"Enter the author of the book"<<endl;
	cin>>author;
	cout<<"Enter the price of the book"<<endl;
	cin>>price;
	cout<<"Enter the quantity"<<endl;
	cin>>stock;
}
//diplay function
void Book::Display(int i)
{
	cout<<"\n";
	cout<<":::: DETAILS FOR BOOK ("<<i+1<<")::::"<<endl;
	
	cout<<"\tBook Title:"<<title<<endl;
	cout<<"\tPublisher:"<<publisher<<endl;
	cout<<"\tBook author:"<<author<<endl;
	cout<<"\tBook Price:"<<price<<endl;
	cout<<"\tAvailable Stock:"<<stock<<endl;

	cout<<":::::::END::::::::::::"<<endl;
	cout<<"\n";
}

//search  function for a book
 int Book::Search(string x)
 {
 	
 	if(title==x)
 	{
 		return 1;
	 }
	 else
	 
	{
			return 0;
	}
 }// author
int Book::Searchx(string c,string a)
 {
 	if(title==c && author==a)
 	
 	{
 		return 1;
	 }
	 else
	{
		return 0;
	}
 }

//update function

void Book::Update()
{
	int x;;
	cout<<"Enter the new price of the book"<<endl;
	cin>>x;
	price=x;
	cout<<"Price updated successfully"<<endl;
	
}

int main()
{
	int x=1;
	int count = 1;
	cout<<"Enter x: "<<endl;
	cin>>x;
	int n;
	
			cout<<"\n:::::::WELCOME TO XFILES STATIONERY::::\n"<<endl;
			cout<<"Enter the total number of books to store"<<endl;
			cin>>n;
			Book bk[n];
				for(int i=0;i<n;i++)
					{
						bk[i].Insert(i);
						
					}
			
	do{
		count +=1;
			
		int choice;
			cout<<"\n:::::::BOOK MENU:::::"<<endl;
			cout<<endl<<"1:Display Books"<<endl<<"2:Update Price"<<endl<<"3::Search Book"<<endl;
			cin>>choice;
				cout<<"\n:::::::END OF BOOK MENU:::::"<<endl;
			
		switch(choice)
		{
			
			case 1:
			
				{
						for(int i=0;i<n;i++)
					{
						bk[i].Display(i);
						
					}
					break;
					
				}
			case 2:
				{
					char title[20];
					cout<<"Enter the title of the book to update its price"<<endl;
					cin>>title;
						for(int i=0;i<n;i++)
					{
						if(bk[i].Search(title))
						{
							bk[i].Update();
						}
						
					}
					break;
					
				}
			case 3:
				{
					char title[20];
					char author[20];
					cout<<"Enter the title of the book"<<endl;
					cin>>title;
						cout<<"Enter the author of the book"<<endl;
						cin>>author;
				
					
					for(int i=0;i<n;i++)
					{
						if(bk[i].Searchx(title,author))
						{
										int num;
										bk[i].Display(i);
										cout<<"Enter the number of copies you want"<<endl;
										cin>>num;
										if(num<=(bk[i].stock))
										{
											int total;
											total=(bk[i].Price()*num);
											cout<<"Total is :UGX"<<total<<endl;
										}
										else
										{
											cout<<"Required number not in stock"<<endl;
											
										}
									
						}
						
					  }
						break;
					}
			
		}
		
	}while(x!=10);
	cout<<count;
	
	return 0;
	
}
