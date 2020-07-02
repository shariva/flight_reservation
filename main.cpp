#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int glob = 0;
int global = 10;

class DomesticBooking //class - domestic booking
{
protected:
	//protected members
    int pnr;
    char flight_domestic[10],time_arrival[7],time_departure[7]; 
    long int date;
    int choice,src,dest;
public:
	//methods
    void pnr_domestic() {
    	//to keep pnr unique, global variable is used
        glob++; 
        pnr=glob;
    }
    int details_domestic() {// domestic journey
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Enter a valid date." <<  endl;
        cin >> date;
        cout << "1.Delhi\t2.Mumbai\t3.Chennai\t4.Kolkata" << endl;
        cout << "Enter Source"<< endl;
        cin >> src;
        cout << "Enter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1)) {
            cout << "Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Jet Airways\t\t 08:00\t\t 11:05\t\t Rs.5000"<<endl;
            cout << "2.SpiceJet\t\t 14:00\t\t 17:05\t\t Rs.5500"<<endl;
            cout << "3.Go Air\t\t 19:00\t\t 22:05\t\t Rs.6000"<<endl;
        }

        else if((src==1 && dest==3) || (src==3 && dest==1)) {
            cout << "Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Jet Airways\t\t 08:00\t\t 11:05\t\t Rs.7000"<<endl;
            cout << "2.SpiceJet\t\t 14:00\t\t 17:05\t\t Rs.6000"<<endl;
            cout << "3.Go Air\t\t 19:00\t\t 22:05\t\t Rs.6000"<<endl;
        }

        else if((src==1 && dest==4) || (src==4 && dest==1)) {
            cout << "Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Jet Airways\t\t 08:00\t\t 11:05\t\t Rs.4000"<<endl;
            cout << "2.SpiceJet\t\t 14:00\t\t 17:05\t\t Rs.5000"<<endl;
            cout << "3.Go Air\t\t 19:00\t\t 22:05\t\t Rs.4000"<<endl;
        }

        else if((src==2 && dest==3) || (src==3 && dest==2)) {
            cout << "Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Jet Airways\t\t 08:00\t\t 11:05\t\t Rs.3000"<<endl;
            cout << "2.SpiceJet\t\t 14:00\t\t 17:05\t\t Rs.4500"<<endl;
            cout << "3.Go Air\t\t 19:00\t\t 22:05\t\t Rs.2800"<<endl;
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Jet Airways\t\t 08:00\t\t 11:05\t\t Rs.5000"<<endl;
            cout << "2.SpiceJet\t\t 14:00\t\t 17:05\t\t Rs.5500"<<endl;
            cout << "3.Go Air\t\t 19:00\t\t 22:05\t\t Rs.6000"<<endl;
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout << "1.Jet Airways\t\t 08:00\t\t 11:05\t\t Rs.5000"<<endl;
            cout << "2.SpiceJet\t\t 14:00\t\t 17:05\t\t Rs.5500"<<endl;
            cout << "3.Go Air\t\t 19:00\t\t 22:05\t\t Rs.6000"<<endl;
        }
        else if(src==dest) {
            cout << "\nSource and destination were identical.\nTry again\n" << endl<<endl;
            return details_domestic();
        }
        else {
            cout <<"\nIncorrect entry-Try again" << endl<<endl;
            return details_domestic();
        }

    }

    int select_flight() //for selecting flight
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) {
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "Jet Airways"<<endl;
                strcpy(flight_domestic,"Jet Airways");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(time_departure,"8:00"); 
                strcpy(time_arrival,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "SpiceJet"<<endl;
                strcpy(flight_domestic,"SpiceJet");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(time_departure,"14:00");
                strcpy(time_arrival,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Go Air" << endl;
                strcpy(flight_domestic,"Go Air");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(time_departure,"19:00");
                strcpy(time_arrival,"22:05");
                break;
          default:
                cout << "Wrong input entered-Try again" << endl;
                return select_flight();
        }
    }
};


class InternationalBooking //class for international booking
{
protected:
//protected members
    int pnri;
    char international_flight[10],time_arrival_international[7],time_departure_international[7];
    long int date_international;
    int srci,desti,choicei;
public:
//public member functions
    void pnr_international() {
		//global variable for generation of unique pnr
        global++;
        pnri=global;
    }
    
    int details_international()  //for journey details
    {
        cout<<"Enter DateOfJourney(DDMMYY)"<<endl;;
        cin>>date_international;
        cout<<"1.London  2.Delhi  3.Moscow  4.Paris  5.Frankfurt"<<endl;
        cout<<"Enter Source"<<endl;
        cin>>srci;
        cout<<"\nEnter destination" ;
        cin>>desti;
        
        if((srci==1 && desti==3) || (srci==3 && desti==1)) {
            cout<<"Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout<<"1.Vistara\t\t 10:00\t\t 14:05\t\t Rs.50000"<<endl;
            cout<<"2.Lufthansa\t\t 14:00\t\t 18:05\t\t Rs.51500"<<endl;
            cout<<"3.Emirates\t\t 18:00\t\t 22:05\t\t Rs.54000"<<endl;
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1)) {
            cout<<"Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout<<"1.Vistara\t\t 10:00\t\t 14:05\t\t Rs.10000"<<endl;
            cout<<"2.Lufthansa\t\t 14:00\t\t 18:05\t\t Rs11500"<<endl;
            cout<<"3.Emirates\t\t 18:00\t\t 22:05\t\t Rs.12000"<<endl;
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1)) {
            cout<<"Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout<<"1.Vistara\t\t 10:00\t\t 14:05\t\t Rs.12000"<<endl;
            cout<<"2.Lufthansa\t\t 14:00\t\t 18:05\t\t Rs.12500"<<endl;
            cout<<"3.Emirates\t\t 18:00\t\t 22:05\t\t Rs.12000"<<endl;
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2)) {
            cout<<"Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout<<"1.Vistara\t\t 10:00\t\t 14:05\t\t Rs.25000"<<endl;
            cout<<"2.Lufthansa\t\t 14:00\t\t 18:05\t\t Rs.21500"<<endl;
            cout<<"3.Emirates\t\t 18:00\t\t 22:05\t\t Rs.24000"<<endl;
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2)) {
            cout<<"Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout<<"1.Vistara\t\t 10:00\t\t 14:05\t\t Rs.70000"<<endl;
            cout<<"2.Lufthansa\t\t 14:00\t\t 18:05\t\t Rs.71500"<<endl;
            cout<<"3.Emirates\t\t 18:00\t\t 22:05\t\t Rs.74000"<<endl;
        }
        
        else if(srci==2 && desti==5 || (srci==5 && desti==2)) {       
		    cout<<"Airline:\t\t Departure:\t Arrival:\t Price:"<<endl;
            cout<<"1.Vistara\t\t 10:00\t\t 14:05\t\t Rs.25000"<<endl;
            cout<<"2.Lufthansa\t\t 14:00\t\t 18:05\t\t Rs.21500"<<endl;
            cout<<"3.Emirates\t\t 18:00\t\t 22:05\t\t Rs.24000"<<endl;
        }
        
		else if(srci==desti) {
            cout<<"wrong input entered - Try again"<< endl;
            return details_international();
        }
        else {
            cout<<"Wrong input entered - Try again"<<endl;
            return details_international();
        }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Vistara" << endl;
            strcpy(international_flight,"Vistara");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(time_departure_international,"10:00");
            strcpy(time_arrival_international,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Lufthansa" << endl;
               strcpy(international_flight,"Lufthansa");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(time_departure_international,"14:00");//copy to string
                strcpy(time_arrival_international,"18:05");//copy to string
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(international_flight,"Emirates");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(time_departure_international,"18:00");
            strcpy(time_arrival_international,"22:05");
            break;
        default:
            cout << "Wrong input entered - Try again\n" << endl;
            return select_flighti();
        }
    }
};



class passenger: public DomesticBooking,public InternationalBooking{
//class passenger inherited from class DomesticBooking and InternationalBooking
protected:
//protected members
    char f_name[20],l_name[20];
    int age,gender;
    long int c_no;
public:
//public member functions
    void p_detail(int x) //x is the selection for domestic or international
    {   if(x==1) { 
			details_domestic();
        	select_flight();
        }
        else {  
		  	details_international();
            select_flighti();
        }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check() {
        cout << "\nGender:\t1. Male\t2. Female:";
        cin >> gender;
        if(gender>2) {
        	//checking valid entry
            cout << "Wrong input entered.\nTry again\n\n" << endl;
            return gender_check();//function call
        }
    }
    void more_details() {
        cout << "Age:";
        cin >> age;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        //displaying details
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      
        cout << "Age:" << age << endl;
        cout << "Contact No.:" << c_no << endl;
    }


    int getpnr() {
    	//to access protected member pnr for domestic class
        return pnr;
    }

    int getpnri() {
     	//to access protected member pnr for international class
        return pnri;
    }

    void disp() {
    	//domestic details display
    	cout<<"********************************************************"<<endl;
		cout<<"PNR:" << pnr << endl;
        cout<<"Flight:" << flight_domestic << endl;
        cout<<"Name:" << f_name << " " << l_name << endl;
        cout<<"DATE:" << date << endl;
        cout<<"Departure Time:" << time_departure << endl;
        cout<<"Arrival Time:" << time_arrival << endl;
		cout<<"********************************************************"<<endl;         
    }

    void dispi() {
    	//international flight details display
    	cout<<"********************************************************"<<endl;
        cout<<"PNR:" << pnri << endl;
        cout<<"Flight:" << international_flight << endl;
        cout<<"Name:" << f_name << " " << l_name << endl;
        cout<<"DATE:" << date_international << endl;
        cout<<"Departure Time:" << time_departure_international << endl;
        cout<<"Arrival Time:" << time_arrival_international << endl;
        cout<<"********************************************************"<<endl;
    }
};



void createfile(passenger p) {  
	//appending passenger details to file passanger
	ofstream fin("domestic.dat",ios::binary|ios::app);
   	fin.write((char*)&p,sizeof(p));	//writing to file
   	fin.close();					//closing file
}

void cancelticket(int x) {
	//to cancel ticket
	//delete from existing file by copying content except for that entry to another file and the renaming
	passenger p;
    int f=0;
   	ifstream fout("domestic.dat",ios::binary|ios::app);//for reading file
   	ofstream fin("domestic1.dat",ios::binary|ios::app);//for writing to a new file
   	fout.read((char *)&p,sizeof(p));//reading file
   	while(fout) {
     	if(p.getpnr()!=x)						//checking pnr
      		fin.write((char *)&p,sizeof(p));	//writing to file
      	else {
         	p.disp();//display details
         	cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
         	f++;//incrementing f if pnr found
     	}
     	fout.read((char *)&p,sizeof(p));		//reading another record from file
   }
   if(f==0)			//if flag is not set then pnr not found
    	cout<<"Ticket not found\n";
   //closing files
   fout.close();
   fin.close();
   remove("domestic.dat");							//deleting old file
   rename("domestic1.dat","domestic.dat");			//renaming new file

}

void checkticket(int x) {  
	passenger p;
   	int f=0;
   	ifstream fout("domestic.dat",ios::binary);//opening file
   	fout.read((char *)&p,sizeof(p));//reading file
   	while(fout) {
     	if(p.getpnr()==x) {
		 	//checking pnr
		 	p.disp();//display details
      		cout<<"\nYour ticket"<<endl;
      		f++;         //incrementing flag if pnr found
      		break;
     	}
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if flag is 0 then pnr not found
   cout<<"Ticket not found"<<endl;
}

void createfilei(passenger p) {  
	//creating a file for international booking
	ofstream fin("international.dat",ios::binary|ios::app);
   	fin.write((char*)&p,sizeof(p));//writing to file
   	fin.close();//closing file
}

void cancelticketi(int x) {  
	//function to cancel ticket for international flight
	//delete entry by copying all entries except for that one to another file and renaming the new file
	passenger p;
   	int f=0;
   	ifstream fout("international.dat",ios::binary|ios::app);	//opening file
   	ofstream fin("international1.dat",ios::binary|ios::app);	//writing to a new file
   	fout.read((char *)&p,sizeof(p));							//reading old file
   	while(fout) {
   	  	if(p.getpnri()!=x)										//checking pnr
      		fin.write((char *)&p,sizeof(p));					//writing to new file;
      	else {
         	p.dispi();											//display details
         	cout<<"Your Above ticket is being deleted:"<<endl<<"Amount refunded: Rs 5000\n";
         	f++;												//incrementing f if pnr found
     	}
     fout.read((char *)&p,sizeof(p));							//reading another record from old file
   }
   
   if(f==0)//if flag is 0 then pnr not found
   		cout<<"\nTicket not found\n";
   //closing files
   fout.close();
   fin.close();
   remove("international.dat");									//deleting old file
   rename("international1.dat","international.dat"); 			//renaming new file

}

void checkticketi(int x) {  
	//to view existing ticket international
	passenger p;
   	int f=0;
   	ifstream fout("international.dat",ios::binary);//opening file
   	fout.read((char *)&p,sizeof(p));//reading file
   	while(fout) {
     	if(p.getpnri()==x) {	//checking pnr
     	p.dispi();				//display details
      	cout<<"\nYour ticket"<<endl;
      	f++;					//incrementing f if pnr found
      	break;
    	}	
    fout.read((char *)&p,sizeof(p));	//reading another record from the file
   	}
   fout.close();						//closing file
   if(f==0)								//if flag is 0 then pnr not found
   cout<<"Ticket not found"<<endl;
}

int main() {
    class DomesticBooking d1;					//object for class DomesticBooking
    class InternationalBooking i1;					//object for class InternationalBooking
    class passenger p1;					//object for class passenger
    int ch,ch1,n;						//integer variables
    char input;							//character variables
    do {
    	cout <<"************************************************************\n";
    	cout << "\t\tWelcome To Flight Reservation System"<<endl;
		cout <<"************************************************************\n";
      	cout << "1.Book Flight\n2.Cancel Fight\n3.Check Ticket\n4.Exit" << endl;
    	cin >> ch;
    switch(ch) { 
        case 1:
        	cout << "\n1.Domestic Fights\n2.International Flights" << endl;
            cin >> ch1;
        	switch(ch1) {
                case 1:						//for booking domestic ticket
                	p1.pnr_domestic();
                    p1.p_detail(1);
                    p1.gender_check();
                    p1.more_details();
                    p1.disp();
                    createfile(p1);
                    break;
                case 2: //for booking international ticket
                    p1.p_detail(2);//function calls
                    p1.pnr_international();
                    p1.gender_check();
                    p1.more_details();
                    p1.dispi();
                    createfilei(p1);//call to create file
                    break;
                default://wrong input
                    cout << "Wrong input entered - Try again" << endl;
                    return main();
              }
        break;
        case 2:
            //for canceling ticket
            cout << "1.Domestic Fights\n2.International Flights" << endl;
            cin >> ch1;
            if(ch1==1) {
                cout << "Enter PNR no.:" << endl;
                cin>>n;
                cancelticket(n);//function call for domestic booking cancellation
            }
            else if(ch1==2) {  
				cout << "Please enter your PNR no.:" << endl;
                cin>>n;
                cancelticketi(n);//function call for international cancellation
            }
            else {
                cout << "Wrong input entered - Try again\n\n\n";
                return main();
            }
            break;
        
		case 3://for displaying booked ticket details
            cout << "1.Domestic Fights\n2.International Flights" << endl;
            cin >> ch1;
            if(ch1==1) {
				cout << "Enter PNR no.:" << endl;
                cin>>n;
                checkticket(n);}//function call to display domestic ticket details
            else if(ch1==2) {  
				cout << "Enter PNR no.:" << endl;
                cin>>n;
                checkticketi(n);//function call to display domestic ticket details
                  }
            else {
                cout << "Wrong input entered - Try again\n\n\n";
                return main();
            }
            break;
            
		case 4:
			return 0; 
        
		default:
		    cout << "Wrong input entered - Try again.\n" << endl;
            return main();
      }
    cout<<"\n\n\ncontinue?:(y/n)" << endl;
    cin >> input;
  	}while(input=='Y' || input=='y');//condition for do while loop
return 0;
}

