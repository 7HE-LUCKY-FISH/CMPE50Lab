//============================================================================
// Name        : lab6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class studentrecord{
    private:
    double quizscores[3];
    double midscore;
    double finalgrade;
    double weightedaverage;
    public:
    studentrecord(){
        for(int i =0; i<3;i++){
        	quizscores[i]=0.0;

        }
        midscore = 0.0;
        finalgrade = 0.0;
        weightedaverage = 0.0;
    }
    void setquiz(const double newquizscore[3]){
    	for(int i=0; i<3; i++){
    		quizscores[i]=newquizscore[i];
    	}
    }
    void setmid(double midtermscore);
    void setfinal(double finalscore);


    double getquiz(int index) const{
    	if(index>=0 && index <3){
    		return quizscores[index];
    	}
    	return 0.0;
    }
    double getmidterm() const {
    return midscore;
    }
    double getfinal() const {
    return finalgrade;
    }
    double getaverage() const {
    return weightedaverage;
    }

    void calcgrade(){
        sort(quizscores, quizscores+3, greater<double>());
        double quizavg = ((quizscores[0] + quizscores[1]) / 20) * 0.25;
        double weightedmid = static_cast<double>(midscore/100) * 0.25;
        double weightedfin = static_cast<double>(finalgrade/100) * 0.50;
        weightedaverage = (quizavg+ weightedmid + weightedfin)*100;
    }
};
    void studentrecord::setmid(double midtermscore) {
        midscore = midtermscore;
    }
    void studentrecord::setfinal(double finalscore) {
        finalgrade = finalscore;
    }


int main(){

    studentrecord student;
    double quizarray[3];
    double midtermscore;
    double finalscore;
    for(int i =0; i<3;i++){
    	cout<<"Enter quiz score: ";
    	cin>>quizarray[i];
    }
    student.setquiz(quizarray);
    cout<<"Enter midterm score: ";
    cin>>midtermscore;
    student.setmid(midtermscore);
    cout<<"Enter final score: ";
    cin>>finalscore;
    student.setfinal(finalscore);
    student.calcgrade();

    double outquiz1 = student.getquiz(0);
    double outquiz2 = student.getquiz(1);
    double outquiz3 = student.getquiz(2);
    double outmid = student.getmidterm();
    double outfinal = student.getfinal();
    double outavg = student.getaverage();


    cout << "Quiz Scores: "<<outquiz1<<" "<<outquiz2<<" "<<outquiz3<<"\n";
    cout << endl;

    cout << "Midterm Score: " << outmid<<"\n";
    cout << "Final Score: " << outfinal<<"\n";
    cout << "Weighted Average: " << outavg << endl;


    return 0;
}



/*
class counter{
    public:
    counter(){
        count =0;
    }
    counter(int initialval) {
        if (initialval < 0) {
            cout << "Value cannot be negative. Counter set to 0." <<endl;
            count = 0;
        } else {
            count = initialval;
        }
    }
    void increase(){
        count++;
    }
    void decrease(){
        if(count >0){
            count--;
        }else{
            cout<<"Counter is negative. Counter has been set to zero.\n";
        }
    }
    void printcount(){
        cout<<"The counter is at: "<<count<<endl;
    }


    private:
        int count;
};
int main(){
    int userinput;
    int decision;
    cout<<"Enter number to start counter: ";
    cin >> userinput;
    //counter counter1;
    counter counter2(userinput);
    counter2.increase();
    //counter2.decrease();
    counter2.printcount();

    //Enter number to start counter: 1
     The counter is at: 2

     Enter number to start counter:0
     Counter is negative. Counter has been set to zero.
};




class parallelogram{
    private:
    double length;
    double height;
    double area;
    public:
    parallelogram(double length_usr, double height_usr){
        length = length_usr;
        height = height_usr;
        area = 0.0;
    }


    void calculate(){
        area = length*height;
    }
    void display(){
        cout<<"The area of the parallelogram is: "<<area<<endl;
    }
};


int main(){
    double length, height;
    cout<<"Enter the length of the parallelogram: ";
    cin >> length;
    cout<<"Enter the height of the parallelogram: ";
    cin >> height;


    parallelogram par(length, height);
    par.calculate();
    par.display();
    return 0;


}
*/
/*
 * Enter the length of the parallelogram: 3.2
Enter the height of the parallelogram: 3
The area of the parallelogram is: 9.6
 *
 * */



