#include<iostream>
#include<string>
using namespace std;
	int oc[5]={1,1,1,1,1};
	int i[5]={0,0,0,0,0};
	int j;
	string menu[20]={"0","chicken tikka","chicken tandoori","mutton masala","egg masala","chicken biryani ","mutton biryani","naan","roti","coca cola"};
	
	int price[20]={0,240,200,280,190,210,260,30,10,20};
class order{
    public:
    	void setdish(int i,int o)
    	{
    		dish[i]=o;
		}
		void settotal(int t)
		{
			total=t;
		}
		int givedish(int i)
		{
			return dish[i];
		}
		int givetotal()
		{
			return total;
		}
	private :
		int dish[100] ;
		int total ;
		
};



int tableno()
{
	int n;
	cout<<"\nEnter table no.(1-4) : " ;
	cin>>n;
	return n;
}




void table(order a[],int n)
{  cout<<"TYPE :\n1.order\n2.Bill \n ";
   int no;
	  cin>>no;
	 
	  
	  if(no==1)
	  {
	  if (oc[n]==1)
	  	  	{			
	  	    cout<<"Enter your order (3 inputs) :"<<endl;
	        
	  	    a[n].settotal(0);
	  		int o1;
	  		int t1;
	  		for(int k =1;k<=3;k++)
	  		{
	  			cin>>o1;
	  			a[n].setdish(i[n],o1);
	  		
				for(int j=1;j<=9;j++)
				{
			       if(a[n].givedish(i[n])==j)
				
	  			//if (a[n].givedish(i[n])==1||a[n].givedish(i[n])==2||a[n].givedish(i[n])==3||a[n].givedish(i[n])==4||a[n].givedish(i[n])==5||a[n].givedish(i[n])==6||a[n].givedish(i[n])==7||a[n].givedish(i[n])==8||a[n].givedish(i[n])==9)
	  		    t1=a[n].givetotal()+price[a[n].givedish(i[n])];		  	
			    a[n].settotal(t1); 	  
				i[n]++;		
			}
		   }      
	  	}
	  	else
	  	{
	  		cout<<"Enter your order (3 inputs) :"<<endl;
	         
	  	    
	  	    int o1;
	  		int t1;
	  		for(int k =1;k<=3;k++)
	  		{
	  			cin>>o1;
	  			a[n].setdish(i[n],o1);
	  			if (a[n].givedish(i[n])==1||a[n].givedish(i[n])==2||a[n].givedish(i[n])==3||a[n].givedish(i[n])==4||a[n].givedish(i[n])==5||a[n].givedish(i[n])==6||a[n].givedish(i[n])==7||a[n].givedish(i[n])==8||a[n].givedish(i[n])==9)
	  		    t1=a[n].givetotal()+price[a[n].givedish(i[n])];		  	
			    a[n].settotal(t1);
				i[n]++ ;	  			
		   }      
	  		
		  }
	
	oc[n]=oc[n]+1; 
}
	  
	       else if(no==2)
	       {
	           cout<<"YOUR BILL IS  : "<<a[n].givetotal()<<"\n"<<endl;
	           for(j=0;j<=i[n]-1;j++)
	           cout<<j+1<<". "<<menu[a[n].givedish(j)]<<"-----"<<price[a[n].givedish(j)]<<endl;
	           
	           oc[n]=1;
	           i[n]=0;
	           a[n].settotal(0);
	       }
	  
}





int main()
{
	order a[100];
	string b="end";
	cout<<"HELLLOOOO!!!! welcome to my resturant .\n \n\t\t\tMENU\n--------------------------------------------------------------\n";
bool done=false;
	
	for(int m=1;m<=9;m++)
	cout<<"\t\t"<<m<<".|"<<menu[m]<<"---"<<price[m]<<"\n"<<endl;
	int i[20],no[20];

	do{
    	int n;
      n=tableno();
	switch(n)
	{
	  case 1:{
		
	table(a,n);
	  }
	 break; 
	   
	    case 2:
	  {
		table(a,n);
	  }
	      
	 break;
	   
	     case 3:
	    {
		
	   table(a,n);
	  }
	      
	 break;
	     case 4:
	     {
		
	  table(a,n);
	     }
	      
	     break;
	   
	  default:done=true;
	  cout<<"invalid ";
	}
	}while(done!=true );
	cout<<"\nHOLIDAY !! ";
	}


