// file name: main.cpp
// chứa hàm main, là file thực thi 

#include "include.h"
#include "CollegeCourse.h"

int main() {
    CollegeCourse course;
    string deparment;
    int courseNum;
    int seats;
    cout << "---------------------------------------------------------";
    cout << "\nDeparment: ";
    cin >> deparment;
    cout << "\nCourse Number: ";
    cin >> courseNum;
    cout << "\nSeats: ";
    cin >> seats;
    cout << "----------------------------------------------------------";
    if(seats > 100 || seats < 0) cout << "\nSeats Invalid !!!";
    else {
        course.setDeparmentAndCourse(deparment, courseNum);
        course.setSeats(seats);
        course.displayCourseData();
    }
    return 0;
}

//---------------------------------------------------------------

