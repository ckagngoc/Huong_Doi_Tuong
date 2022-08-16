// file name: CollegeCourse.h
// header của lớp CollegeCourse

class CollegeCourse {
    private:
        string deparment;
        int courseNum;
        int seats;
    public:
        void setDeparmentAndCourse(string, int);
        void setSeats(int);
        void displayCourseData();
};
//---------------------------------------------------------------

//Hàm nhận hai param set deparment và courseNum
void CollegeCourse::setDeparmentAndCourse(string deparment, int courseNum) {
    this->deparment = deparment;
    this->courseNum = courseNum;
}

//Hàm nhận 1 param setSeats
void CollegeCourse::setSeats(int seats) {
    if(seats <= 100 && seats > 0) this->seats = seats;
}

//Hàm xuất data
void CollegeCourse::displayCourseData() {
    cout << "\nCourse Data : " << "{ department: " << deparment << " , courseNum: " << courseNum << " , seats: " << seats << " }"<< endl;
}