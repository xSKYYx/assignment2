#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
// skyler black, s0544454
// assignment 2
//making a calucations on long this phone calls monday to friday
//7:00am -6:00 pm = .30cents/min
//12:00 am - 5:59 am, 6:01pm- 11:59 pm = .15 cents/min
// weekends are .15cents/min all day
*/


int main()
{
	double time, time2, minutes, charges;
	; char ans;
	char cAnswer;
	int wkdy;
	int wken;

	cout << "welcome to skyler's long distance phone call calculation program:"
		<< "press 1 or 2 for weekdays(1) or weekends(2) ?  :";
	cin >> cAnswer;



	if ((cAnswer == '1') || (cAnswer == '1'))
	{
		do {

			//setting the times for certain rates.
			cout << "Enter the time call started on the weekday!(monday - friday)  (24 hour, hh:mm) : ";
			cin >> time;

			time2 = time - static_cast<int>(time); 

			if (time2 > .59) //minutes
			{
				cout << "starting time (minutes) number can not exceed more than 59!! \n\n:  ";
				cout << "Enter the time again (HH:MM): ";
				cin >> time;
			}
			if (time > 23.59)//full days
			{

				cout << " time cannot exceed more than 23.59 , put in the minutes/hours (HH:MM):\n\n ";
				cin >> time;

			}

			cout << "Enter the duration of the call (minutes): "; // time lenght of the phone call
			cin >> minutes;
			if (minutes < 0)
			{
				cout << "minutes can be 0.0 ! \n\n"
					<< " enter the duration of the call in minutes: ";
				cin >> minutes;
			}

			// set rates 
			cout << fixed << setprecision(2);
			if (time >= 0.00 && time <= 6.59)
			{
				charges = minutes * 0.15;
				cout << "Cost for the call: $" << charges << "\n\n"; //12:00 am to 6:59 am is set to .15cents/minute
			}
			if (time = 7.0 && time <= 18.0)
			{
				charges = minutes * 0.30;
				cout << "Cost for the call: $" << charges << "\n\n"; // 7:00 am to 6:00 pm is set to .30cents/minute
			}
			if (time >= 18.01 && time <= 23.59)
			{
				charges = minutes * 0.15;
				cout << "Cost for the call: $" << charges << "\n\n"; //6.01 pm to 11:59 pm is set back to .15cents/minute
			}

			system("pause");



			cout << "do you want to do another calculation?: \n"
				<< "press y for yes , n for no: \n";
			cin >> ans;
		} while ((ans == 'Y') || (ans == 'y'));
		cout << "Goodbye";
	}


	else if ((cAnswer == '2')|| (cAnswer =='2'))
	{
		do {
			//saturdays and sundays

			cout << "Enter the time call started on the weekend! (saturday-sunday) (24 hour, hh:mm) : ";
			cin >> time;

			time2 = time - static_cast<int>(time); // gets the functional part

			if (time2 > .59) {
				cout << "starting time (minutes) number can not exceed more than 59!! \n\n:  ";
				cout << "Enter the time again (HH:MM): ";
				cin >> time;
			}
			if (time > 23.59) {
				cout << " time cannot exceed more than 23.59 , put in the minutes/hours (HH:MM):\n\n ";
				cin >> time;

			}

			cout << "Enter the duration of the call (minutes): ";
			cin >> minutes;
			if (minutes < 0)
			{
				cout << "minutes can be 0.0 ! \n\n"
					<< " enter the duration of the call in minutes: ";
				cin >> minutes;
			}

			// set rates 
			cout << fixed << setprecision(2);
			if (time >= 0.00 && time <= 7.0)
			{
				charges = minutes * 0.10;
				cout << "Cost for the call: $" << charges << "\n\n";
			}
			if (time = 7.0 && time <= 18.0)
			{
				charges = minutes * 0.10;
				cout << "Cost for the call: $" << charges << "\n\n";
			}
			if (time >= 18.01 && time <= 23.59)
			{
				charges = minutes * 0.10;
				cout << "Cost for the call: $" << charges << "\n\n";
			}

			system("pause");




			cout << "do you want to another calculation? : \n"
				<< " press y for yes , n for no. \n";
			cin >> ans;
		} while (ans == 'y' || (ans == 'Y'));
		cout << "goodbye\n";
	}
	return 0;
}


