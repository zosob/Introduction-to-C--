#include<iostream>
#include<string>
using namespace std;

class RunnerInfo{
    public:
        void setTime(int timeRunSecs){
            if(isValid(timeRunSecs))
                timeRun = timeRunSecs;
            }
        void setDist(double distRunMiles){
            if(isValid(distRunMiles))
                distRun = distRunMiles;
            }
        double getSpeedMph();
    private:
        int timeRun;
        double distRun;

        //Private helper function...
        bool isValid(double val){return val>=0;}
};

double RunnerInfo::getSpeedMph(){
    return distRun / (timeRun / 3600.0); // Logic is hidden from the user...
}

int main(){
    RunnerInfo runner1, runner2;
    runner1.setTime(360);
    runner1.setDist(1.2);
    cout<<"Runner 1 Speed: "<<runner1.getSpeedMph()<<" MPH"<<endl;

    
    runner2.setTime(350);
    runner2.setDist(1.3);
    cout<<"Runner 2 Speed: "<<runner2.getSpeedMph()<<" MPH"<<endl;

}