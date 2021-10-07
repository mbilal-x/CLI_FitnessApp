#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
using namespace std;


//function declarations
int main();
void control();
void schedule(int);
void start();
void instruction();
void record();
void workout();
void test();
void profile();

//variable declarations
int m,program,T=999,i=0,c=0;
char ch;

fstream file;

/*
---FUNCTIONS----
*/

//control function
	void control()
		{
		sleep(3);
		cout<<"\n\n\n_____________________\n\n";
		cout<<"Back [b]\n";
		cout<<"Exit [e]\n";
	
		cout<<"\n\n\n\tchoose action :";
		cin>>ch;
		switch (ch)
		{	
			case 'b':
				system("cls");
				main();
				break;
				
			case 'e':
				system("cls");
				cout<<"\n\n\n\t\t \"You have Exited\"\n\n\n";
				exit(0);
				break;
		}
	
		}


//diet function
	void diet()
		{
			
		}

//start function
	void start()
		{
		system("cls");
		cout<<""
		<<"|||        |||   |||||||   |||       |||||||||     ||||||||    |||\\\\     //|||   |||||||\n"
		<<"|||  //\\\\  |||   |||       |||      |||      ||   |||    |||   ||| \\\\\\  ///|||   |||    \n"
		<<"||| ///\\\\\\ |||   ||||||    |||      |||           |||    |||   |||  \\\\\\/// |||   |||||| \n"
		<<"|||///  \\\\\\|||   |||       |||      |||      ||   |||    |||   |||   \\\\//  |||   |||    \n"
		<<"|||//    \\\\|||   |||||||   |||||||   |||||||||     ||||||||    |||         |||   |||||||\n";
		}
		
//instruction function
	void instruction()
		{
		system("cls");
		cout<<"\n\t\t\tSet Profile\n\nSetup your presonal profile by answering a few questions about your \nweight, height, age, gender and also enter your fitness goals, so that \nall your workouts are custom tailored just for you.  "
		<<"\n\n\t\t\tWorkouts\n\n First take the test to see which workout plan suits you. Based on your \nresults and goals. you will be recomended a Training Program."
		<<"\n\n\t\t\tDiet (Cal. Intake)\n\n Based on your BMI, activity stasus, and other parameters, you are\n recommented a properly calculated Calorie intake; for maximum results."
		<<"\n\n\t\t\tTest your Level \n\n Do maximum repetitions of pushups that you can do and enter your max rep count.\nThis information will be used to decide your workout plan."
		<<"\n\n\t\t\t Records \n\n You can view your data in 'Record'. You can also edit it \n      in 'Set Profile' option.  '";
		}
		
// test function
	void test()
		{
		system("cls");
		cout<<"\n\n\n\n\t\t    Do Maximum Repitition Of Pushups"
		<<"\n\n\n\t\tEnter Max Count : (can't be over 35)   ";
		cin>>T;
		cout<<"\n\n\n\t  Great!   Your result has been stored";
		}
		
		
//profile function
	void profile()
		{
		system("cls");
		 
			file.open("data.txt",ios::app);
			
			for (int c=0; c<1 ; c++)
			file<<"name\t\t\weight\t\theight\t\tgender\t\tupdated on"<<endl;
			
			string name,weight,height,gender,date;
			cout<<"Enter your name:";
			getline(cin,name);
			cout<<"Enter your weight:";
			getline(cin,weight);
			cout<<"Enter your height:";
			getline(cin,height);
			cout<<"Enter your gender:";
			getline(cin,gender);
			cout<<"Enter your date:";
			getline(cin,date);
			
			file<<name<<"\t\t"<<weight<<"\t\t"<<height<<"\t\t"<<gender<<"\t\t"<<date<<"\t\t"<<endl;
			file.close();

		}
// record function
	void record()
		{
		system("cls");
		
			file.open("data.txt",ios::in);
			string line;
			string name;
			cout << " Enter the name you want to search :";
			cin >> name ;
			
			while(!file.eof()){
				getline(file,line);
				if(line.find(name) != string::npos)
				cout << line << endl ;
			}
			file.close();
		}
	
// workout function
	void workout()
		{
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t        WAIT";
		cout<<"\n\n\t\t be sure to warm-up before training!\n\n\n\n";
		sleep(3);
		system("cls");
		
		//initially directing to Test
			if (T==999)	
				{
					test();
					workout();
				}
			else if (T<=5)
				{
				program=1;
				schedule(program);
				}
			else if (T>5 and T<11)
				{
				program=2;
				schedule(program);	
				}
			else if (T>=11 and T<20)
				{
				program=3;
				schedule(program);	
				}
			else if (T>=20 and T<25)
				{
				program=4;
				schedule(program);	
				}
			else if (T>=25 and T<30)
				{
				program=5;
				schedule(program);	
				}
			else if (T>=30 and T<35)
				{
				program=6;
				schedule(program);
				}		
		}
		
//schedule function
	void schedule(int program)
		{	
		switch(program)
			{
			case 1:
			cout<<"program "<<program<<" : \n\n";
			cout<<"\n_____________schedule_____________"	
			<<"\n\tDay 1 : 2  3  2  2  3"
			<<"\n\tDay 2 : 3  3  2  2  4"  
			<<"\n\tDay 3 : 4  4  3  3  5"
			<<"\n\tDay 4 : rest"
			<<"\n\tDay 5 : 5  5  4  4  7"
			<<"\n\tDay 6 : 5  6  4  4  7";
			break;
			
			case 2:
			cout<<"program "<<program<<" : \n\n";
			cout<<"\n_____________schedule_____________"	
			<<"\n\tDay 1 : 5  6  4  4  5"
			<<"\n\tDay 2 : 6  6  5  5  6 "
			<<"\n\tDay 3 : 7  7  6  6  8"
			<<"\n\tDay 4 : rest"
			<<"\n\tDay 5 :  8  9  8  8  10"
			<<"\n\tDay 6 : 10  11  8  8  12";
			break;
			
			case 3:
			cout<<"program "<<program<<" : \n\n";
			cout<<"\n_____________schedule_____________"	
			<<"\n\tDay 1 : 8  9  7  7  8"
			<<"\n\tDay 2 : 9  10  8  8  10"
			<<"\n\tDay 3 : 10  11  8  8  11"
			<<"\n\tDay 4 : rest"
			<<"\n\tDay 5 : 11  12  10  10  13"
			<<"\n\tDay 6 : 12  14  11  11  14";
			break;
			
			case 4:
			cout<<"program "<<program<<" : \n\n";
			cout<<"\n_____________schedule_____________"	
			<<"\n\tDay 1 : 12  14  12  12  14"
			<<"\n\tDay 2 : 12  15  12  12  16"
			<<"\n\tDay 3 : 13  15  13  13  16"
			<<"\n\tDay 4 : rest"
			<<"\n\tDay 5 : 14  15  13  13  18"
			<<"\n\tDay 6 : 14  16  13  13  19";
			break;
			
			case 5:
			cout<<"program "<<program<<" : \n\n";
			cout<<"\n_____________schedule_____________"	
			<<"\n\tDay 1 : 12  17  13  13  17"
			<<"\n\tDay 2 : 14  18  14  14  18"
			<<"\n\tDay 3 : 15  19  15  16  19"
			<<"\n\tDay 4 : rest"
			<<"\n\tDay 5 : 16  21  17  17  21"
			<<"\n\tDay 6 : 18  22  18  18  22";
			break;
			
			case 6:
			cout<<"program "<<program<<" : \n\n";
			cout<<"\n_____________schedule_____________"	
			<<"\n\tDay 1 : 18  22  18  18  22"
			<<"\n\tDay 2 : 19  23  19  18  23"
			<<"\n\tDay 3 : 20  24  20  20  25"
			<<"\n\tDay 4 : rest"
			<<"\n\tDay 5 : 22  25  20  20  27"
			<<"\n\tDay 6 : 24  28  23  23  30";
			break;
			}
		}

	




int main(){
	system("cls");
	system("color 03");
	
//_______________________calling start just once when starting program.
	for(i; i<3; i++)
	{
	start();
	sleep(1);
	system("cls");
	sleep(1);
	}
	
	
	
	

	
	
	cout<<"                       PUSH FIT             \n"
		<<"                (your fitness partner)            \n\n\n";
	
	cout<<"____________MENU__________\n"
	<<"0. Instructions\n"
	<<"1. Set Profile\n"
	<<"2. Workout\n"
	//<<"3. Diet\n"
	<<"4. Record\n"
	<<"5. Test\n"
	<<"6. Exit\n";
	
	cout<<"\n\n\n\tChoose Action: ";
	
	

	
	cin>>m;
	switch (m)
	{
		case 0:
		    instruction();
			control();
			
				
		break;
		case 1:
			profile();
			control();
		
		break;
		case 2:
		//calling workout
			workout();
			control();
		break;
		case 3:
			//Diet();
			control();
		break;
		case 4:
			record();
			control();
		break;
		case 5:
			test();
			control();
		break;
		case 6:
			system("cls");
			cout<<"\n\n\n\t\t \"You have Exited\"\n\n\n";
			exit(0);
			
		break;
		
	
	}
		
	
	
	
	
return 0;	
	
}
