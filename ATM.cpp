	#include <iostream>
	#include <string.h>
	#include <stdlib.h>
	using namespace std;
	 
	//-----------------------------------------------------------------------------------


	class ATMAccountHolders
	    {
	    string accountHolders;
	    string accountHoldersAddress, branch;
	    int accountNumber;
	    double startBalance;
	    double accountBalance;
	    double accountInterest;
	    double amount;
	    int count;
	 
	    public:
	    void deposit();
	    void withdraw();
        void details();
	    void payBills();
	    void accountExit();
	    void interest();
	     
	    ATMAccountHolders()
	    {
	    accountNumber = 38159;
	    accountHolders = "Huthaifa A Quraini";
	    accountHoldersAddress = "Palestine,Attil";
	    startBalance = 10000.00;
	    accountBalance = 23000.00;
	    branch  = "Tulkarm";
	    amount = 20000;                
	    }
	    };
 
	    
	 
	//-----------------------------------------------------------------------------------
	    void ATMAccountHolders::deposit()
	    {
	         system("cls");
	        cout<<"\n ATM ACCOUNT DEPOSIT SYSTEM \n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"The Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"The Branch location is :"<<branch<<"\n\n";
	        cout<<"Account number :"<<accountNumber<<"\n\n";
	       
	        cout<<"Starting account balance :$"<<startBalance<<"\n\n";
	        cout<<"Present available balance :$"<<accountBalance<<"\n\n";
	        cout<<"Enter the Amount to be Deposited $";
	             
	            double amount;
	            cin>>amount;
	        accountBalance=startBalance+amount ;
	        cout<<"\n\tYour new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"\nThank You!\n\n"<<endl;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");
	    }
	//-----------------------------------------------------------------------------------
	    void ATMAccountHolders::withdraw()//Withdrawal Transactions
	    {
	         system("cls");
	        cout<<"\n ATM ACCOUNT WTHDRAWAL \n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"The Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"The Branch location is :"<<branch<<"\n\n";
	        cout<<"Account number :"<<accountNumber<<"\n\n";
	       
	        cout<<"Starting account balance :$"<<startBalance<<"\n\n";
	        cout<<"Present available balance :$"<<accountBalance<<"\n\n";
	        cout<<"Enter the Amount to be Withdrawn $";
	             
	            double amount;
	            cin>>amount;
	             
	            if(amount>accountBalance||amount>5000)//Limit set at 5000 maximum after paying bills
	            {
	        system("cls");
	        cout<<"\nATM ACCOUNT WITHDRAWAL \n\n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"The Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"The Branch location is :"<<branch<<"\n\n";
	        cout<<"Account number :"<<accountNumber<<"\n\n";
	        cout<<"\nInsufficient Available Balance in your account.\n\n"<<endl;
	        cout<<"Sorry !!\n"<<endl;
	        system("PAUSE");
	            }
            else
	            {
	                double b;
	                accountBalance=startBalance-amount ;
	    system("cls");
	        cout<<"\n ATM ACCOUNT WTHDRAWAL \n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
        cout<<"The Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"The Branch location is :"<<branch<<"\n\n";
	        cout<<"Account number :"<<accountNumber<<"\n\n";
	        cout<<"Your new available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");               
	           }
	     
	    }
	//-----------------------------------------------------------------------------------
	    void ATMAccountHolders::payBills()
	    {
	        system("cls");
	           
	 
	        cout<<"\n ATM BILLS PAYMENT SYSTEM \n";
	         
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"The Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"The Branch location is :"<<branch<<"\n\n";
	        cout<<"Account number :"<<accountNumber<<"\n\n";
	        cout<<"Pay Internet service providers Company  bill of $200.00 now?\n\n";
	        cout<<"Press 1 for Yes OR Press 0 for No\n\n";
	         
	        int r;
	         
	        cin>>r;
	        if(r=1)
	        {accountBalance=startBalance-200;
	        system("cls");
	        cout<<"\n ATM BILLS PAYMENT SYSTEM \n";
	        cout<<"\nYour Internet service providers Company bill of $200.00 has been paid.\n\n";
	        cout<<"Your account new Available Balanced Amount is $"<<accountBalance<<endl ;
	        cout<<"Press any key to Return to the Main Menu\n\n";
	       }
	       if(r=0)
	       {
	       cout<<"\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
	        cout<<"\n\nExiting Bill Payment System. Thank you!.\n\n";    
	        cout<<"====================++THANK YOU++============================\n\n";     
	       }
	        system("PAUSE");   
	    };
	     
	//-----------------------------------------------------------------------------------
	void ATMAccountHolders::details()
	    {
	        system("cls");
	           
	 
	        cout<<"\nATM ACCOUNT DETAILS \n";
	        cout<<"\n\nThe Names of the Account Holders are :"<<accountHolders<<"\n\n";
	        cout<<"The Account Holders' address is :"<<accountHoldersAddress<<"\n\n";
	        cout<<"The Branch location is :"<<branch<<"\n\n";
	        cout<<"Account number :"<<accountNumber<<"\n\n";
	        cout<<"Press any key to Return to the Main Menu\n\n";
	        system("PAUSE");   
	    }
	 
	//-----------------------------------------------------------------------------------    
	 
     void ATMAccountHolders::accountExit()
	    {
	        system("cls");
	        system("PAUSE");
	        exit(1);   
	    }
	     
	     
	//-----------------------------------------------------------------------------------    
	
	 
	//-----------------------------------------------------------------------------------    
	    int main()
	    {
	    int e;
	    ATMAccountHolders p;
	     
	   
	      //-----------------------------------------------------------------------------------  
	         
	      cout<<"Press 1 and Then Press Enter to Access Your Account Via Pin Number\n\n";
	      cout<<"\t or \n\n";
	      cout<<"Press 0 and press Enter to get Help.\n\n";
	         
	      int access;
	      cin>>access;
	      switch(access)
	      {
	      case 1://pin to access account
	      system("cls");
		  int i, pin;
	       
	      cout<<"\n ATM ACCOUNT ACCESS \n\n";
	      cout<<"\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n\n"<<endl;
	      cin>>pin;
	       
	      system("cls");
	       
	      if(pin==123)
	       
	      {
	      system("cls"); 
	       
	      do
	        {
	      system("cls");  
	     
	cout << endl << "\n ATM Main Menu Screen \n" << endl << endl;
	cout << "Enter [1] To  Deposit Cash" << endl;
	cout << "Enter [2] To Withdraw Cash" << endl;
	cout << "Enter [3] To Balance Inquiry" << endl;
	cout << "Enter [4] To Pay Bills" << endl;
	cout << "Enter [0] to Exit ATM" << endl << endl;
	cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
	        
	        cin>>e;
	        switch(e)
	        {
	            case 1:
	                p.deposit();
	                break;
	            case 2:
	                p.withdraw();
	                break;
	            case 3:
	                p.details();
	                break;
	            case 4:
	                p.payBills();
	                break;
	            case 0:
	                p.accountExit();
	                break;
	        default:cout<<"Please Enter the Correct Number Choice"<<endl;
	        }
	    }while(e!=0);
	 
	      break;                                    
	      }
	                
	      else
	      {
	      system("cls");
	     
	cout<<"\n THANK YOU \n\n";
	cout<<"\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
	system("PAUSE");
	      exit (1);
	      }
	//-----------------------------------------------------------------------------------   
	       
	       
	    case 0://pin to access account
	    system("cls");
	      cout<<"\nATM ACCOUNT STATUS \n\n";
	                    cout<<"You must have the correct pin number to access this acount. See your\n\n";
	                    cout<<"bank representative for assistance during bank opening hours\n\n";
	                    cout<<"Thanks for, your choice today!!\n\n";
	      system ("PAUSE");
	      exit(1);      
	      break;   
//-----------------------------------------------------------------------------------        
	    }
	     
	system("PAUSE");
	return 0;
	 
	};

