#include <iostream>
#include <string>

using namespace std;

//superclass
class Human {
   private:
    string NIK;
    string nama;
    char jenis_kelamin;

   public:
    //constructor
    Human(string NIK, string nama, char jenis_kelamin) {
        this->NIK = NIK;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }

    //constructor
    Human() {
        this->NIK = "";
        this->nama = "";
        this->jenis_kelamin = '-';
    }

    //set NIK
    void setNIK(string NIK){
        this->NIK = NIK;
    }

    //get NIK
    string getNIK() {
        return NIK;
    }

    //set nama
    void setNama(string nama){
        this->nama = nama;
    }

    //get nama
    string getNama() {
        return nama;
    }

    //set jenis kelamin
    void setJenisKelamin(char jenis_kelamin){
        this->jenis_kelamin = jenis_kelamin;
    }

    //get jenis kelamin
    char getJenisKelamin() {
        return jenis_kelamin;
    }
};